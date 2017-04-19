/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:03:04 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/19 18:56:34 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

// gcc main_printf.c libftprintf.a ./libft/libft.a -I libft

static const void (*(ptr_fct[]))(va_list *, t_format_id *) =
{
	['s'] = ft_print_arg_s,				//String.
	['S'] = ft_print_arg_s					//String.
	//
	// ['p'] = ft_print_arg_p,				//pointer.
	// ['d'] = ft_print_arg_d,				//Decimal signed integer.
	// ['D'] = ft_print_arg_d,				//Decimal signed integer.
	// ['i'] = ft_print_arg_d,				//Decimal signed integer.
	// ['o'] = ft_print_arg_o,				//Octal integer.
	// ['O'] = ft_print_arg_o,				//Octal integer.
	// ['u'] = ft_print_arg_u,				//Unsigned integer.
	// ['U'] = ft_print_arg_u,				//Unsigned integer.
	// ['x'] = ft_print_arg_x,				//Hex integer.
	// ['X'] = ft_print_arg_x,				//Hex integer.
	// ['c'] = ft_print_arg_c,				//Character.
	// ['C'] = ft_print_arg_c,				//Character.
	// ['%'] = ft_print_arg_percent
	// // ['f'] = printf_format_f,				//double
	// // ['e'] = printf_format_e,				//double.
	// // ['E'] = printf_format_e,				//double.
	// // ['g'] = printf_format_g,				//double.
	// // ['G'] = printf_format_g,				//double.
};

static const void (*(ptr_arg[]))(t_list_arg *) =
{
	['s'] = va_arg(*ap, char*),				//String.
	['S'] = va_arg(*ap, char*)					//String.
	['p'] = va_arg(*ap, p),				//pointer.
	['d'] = va_arg(*ap, d),				//Decimal signed integer.
	['D'] = va_arg(*ap, d),				//Decimal signed integer.
	['i'] = va_arg(*ap, d),				//Decimal signed integer.
	['o'] = va_arg(*ap, o),				//Octal integer.
	['O'] = va_arg(*ap, o),				//Octal integer.
	['u'] = va_arg(*ap, u),				//Unsigned integer.
	['U'] = va_arg(*ap, u),				//Unsigned integer.
	['x'] = va_arg(*ap, x),				//Hex integer.
	['X'] = va_arg(*ap, x),				//Hex integer.
	['c'] = va_arg(*ap, c),				//Character.
	['C'] = va_arg(*ap, c),				//Character.
	['%'] = va_arg(*ap, percent)
	// ['f'] = printf_format_f,				//double
	// ['e'] = printf_format_e,				//double.
	// ['E'] = printf_format_e,				//double.
	// ['g'] = printf_format_g,				//double.
	// ['G'] = printf_format_g,				//double.
};

static const void (*(ptr_va_arg[]))(va_list *, t_format_id *) =
{
	['']
};

static void 		ft_printstr(char *str)
{
	ft_putstr("STRING IS : '");
	ft_putstr(str);
	ft_putstr("'\n");
}

static void			ft_format_id_getinfo(t_format_id *format_id, char *str)
{
	int		newpos;

	newpos = 0;
	ft_putstr("==== 1 : ");
	ft_putchar(str[newpos]);
	ft_putstr(" ====\n");
	ft_get_parameter(format_id, &str[newpos]);
	newpos += format_id->nb_read_char;
	ft_putstr("==== 2 : ");
	ft_putchar(str[newpos]);
	ft_putstr(" ====\n");
	ft_get_flags(format_id, &str[newpos]);
	newpos += format_id->nb_read_char;
	ft_putstr("==== 3 : ");
	ft_putchar(str[newpos]);
	ft_putstr(" ====\n");
	ft_get_width_min(format_id, &str[newpos]);
	newpos += format_id->nb_read_char;
	ft_putstr("==== 4 : ");
	ft_putchar(str[newpos]);
	ft_putstr(" ====\n");
	ft_get_precision(format_id, &str[newpos]);
	newpos += format_id->nb_read_char;
	ft_putstr("==== 5 : ");
	ft_putchar(str[newpos]);
	ft_putstr(" ====\n");
	// ft_get_lenght(format_id, &str[newpos]);
	// newpos += format_id->nb_read_char;
	ft_get_arg_type(format_id, &str[newpos]);
	newpos += format_id->nb_read_char;

	format_id->nb_read_char = newpos;
}

static void			ft_init_flags(t_format_id *format_id)
{
	format_id->flags.space = 0;
	format_id->flags.plus = 0;
	format_id->flags.minus = 0;
	format_id->flags.hash = 0;
	format_id->flags.zero = 0;
}

static t_format_id	*ft_format_id_init(t_format_id *format_id)
{
	t_format_id		*new;

	new = (t_format_id*)malloc(sizeof(t_format_id));
	new->parameter = 0;
	ft_init_flags(new);
	new->width_min = 0;
	new->precision.period = 0;
	new->precision.width_max = 0;
	new->lenght = NULL;
	new->arg_type = 0;
	new->nb_read_char = 0;
	new->nb_print_char = 0;
	new->start_pos = 0;
	if (format_id)
		new->first = format_id->first;
	else
		new->first = new;
	new->next = NULL;
	return (new);
}

// struct			s_list_arg
// {
// 	int				nbr;
// 	char			type;
// 	void			*arg;
// 	size_t			len;
// 	t_list_arg		*next;
// 	t_list_arg		*first;
// };

t_list_arg			*ft_init_list_arg(t_list_arg *list_arg)
{
	if (list_arg)
	{
		(!(list_arg->next = (t_list_arg*)malloc(sizeof(t_list_arg))) ? \
			(ft_error("ft_get_args : malloc failed")) : (list_arg));
		list_arg->next->first = list_arg->first;
		list_arg->next->nbr = list_arg->nbr + 1;
		list_arg = list_arg->next;
	}
	else
	{
		(!(list_arg = (t_list_arg*)malloc(sizeof(t_list_arg))) ? \
			(ft_error("ft_get_args : malloc failed")) : (list_arg));
		list_arg->first = list_arg;
		list_arg->nbr = 1;
	}
	list_arg->type = 0;
	list_arg->arg = NULL;
	list_arg->len = 0;
	list_arg->next = NULL;
	return (list_arg);
}

// ['d'] = ft_print_arg_d,				//Decimal signed integer.
// ['D'] = ft_print_arg_d,				//Decimal signed integer.
// ['i'] = ft_print_arg_d,				//Decimal signed integer.
// ['o'] = ft_print_arg_o,				//Octal integer.
// ['O'] = ft_print_arg_o,				//Octal integer.
// ['u'] = ft_print_arg_u,				//Unsigned integer.
// ['U'] = ft_print_arg_u,				//Unsigned integer.
// ['x'] = ft_print_arg_x,				//Hex integer.
// ['X'] = ft_print_arg_x,				//Hex integer.
// // ['f'] = printf_format_f,				//double
// // ['e'] = printf_format_e,				//double.
// // ['E'] = printf_format_e,				//double.
// // ['g'] = printf_format_g,				//double.
// // ['G'] = printf_format_g,				//double.



ft_get_type(t_format_id *format_id, t_list_arg *list_arg, va_list *ap)
{
	if (format_id->precision.period == '*')
	{
		list_arg->arg->ll = va_arg(*ap, long long int);
		list_arg->tpye = 'L';
		list_arg = ft_init_list_arg(list_arg);
	}

	if (ptr_arg[format_id->arg_type])
		ptr_arg[format_id->arg_type] = ptr_va_arg[format_id->arg_type](ap)

	if (format_id->arg_type == 's'|| format_id->arg_type == 'S')
		list_arg->arg->s = va_list(*ap, char*);
	else if (format_id->arg_type == 'c' || format_id->arg_type == 'C')
		*list_arg->arg->s = va_list(*ap, char);
	else if (ft_strchr(format_id->arg_type, "dDioOuUxX"))
		list_arg->arg->ll = ;
	else if (format_id->arg_type == || format_id->arg_type == || format_id->arg_type == || format_id->arg_type == || )
		list_arg->arg->ld = ;
	else if (format_id->arg_type == 'p')
		list_arg->arg->p = va_list(*ap, void*);
	else
		(ft_error("ft_get_type : arg_type error"));
}

t_list_arg			*ft_get_args(t_format_id *format_id, va_list *ap)
{
	t_list_arg	*list_arg;

	list_arg = NULL;
	if (format_id)
	{
		while (format_id->next || format_id == format_id->first)
		{
			list_arg = ft_init_list_arg(list_arg);
			((format_id != format_id->first) ? format_id = format_id->next : 0);
			ft_get_type(format_id, list_arg, ap);
		}
	}
}


int					ft_printf(char *str, ...)
{
	int				len;
	int				pos;
	va_list			ap;
	t_format_id		*format_id;
	t_list_arg	*arg;

	pos = 0;
	len = 0;
	// va_start(ap, str);
	ft_printstr(str);
	while (str && str[pos])
	{
		if (str[pos] != '%' || str[pos + 1] == '%')
		{
			((str[pos] != '%') ? (len++) : (len += 2));
			((str[pos] != '%') ? (pos++) : (pos += 2));
		}
		else
		{
			if (!format_id)
				format_id = ft_format_id_init(format_id);
			else
				format_id->next = ft_format_id_init(format_id);
			((format_id->next) ? (format_id = format_id->next) : (format_id));
			format_id->start_pos = pos;
			ft_format_id_getinfo(format_id, &(str[pos]));


			ft_print_format_id(format_id);

			if (format_id->arg_type == 's')
				ft_print_arg_s(&ap, format_id);

			if (!format_id)
				ptr_fct[(int)format_id->arg_type](&ap, format_id);
			// *g_formats_f[format_id->arg_type](ap, format_id);
			pos += format_id->nb_read_char;
			len += format_id->nb_print_char;
		}
	}
	arg = ft_get_args(format_id);
	ft_putstr("ENDING\n");
	// ft_printstr(str);
	// va_end(ap);
	return (len);
}
