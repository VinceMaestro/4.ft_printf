/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:03:04 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/26 20:04:39 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

// gcc main_printf.c libftprintf.a ./libft/libft.a -I libft

static void (*(ptr_fct[]))(va_list *, t_format_id *) =
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

// static const void (*(ptr_arg[]))(va_list *ap) =
// {
// 	['s'] = char*,				//String.
// 	['S'] = char*,					//String.
// 	['p'] = void*,				//pointer.
// 	['d'] = long long int,				//Decimal signed integer.
// 	['D'] = long long int,				//Decimal signed integer.
// 	['i'] = long long int,				//Decimal signed integer.
// 	['o'] = long long int,				//Octal integer.
// 	['O'] = long long int,				//Octal integer.
// 	['u'] = long long int,				//Unsigned integer.
// 	['U'] = long long int,				//Unsigned integer.
// 	['x'] = long long int,				//Hex integer.
// 	['X'] = long long int,				//Hex integer.
// 	['c'] = char,				//Character.
// 	['C'] = char				//Character.
// 	// ['f'] = printf_format_f,				//double
// 	// ['e'] = printf_format_e,				//double.
// 	// ['E'] = printf_format_e,				//double.
// 	// ['g'] = printf_format_g,				//double.
// 	// ['G'] = printf_format_g,				//double.
// };
//
//
//
// static const void (*(ptr_va_arg[]))(t_list_arg *list_arg) =
// {
// 	['s'] = list_arg->arg->s,
// 	['S'] = list_arg->arg->s,
// 	['p'] = list_arg->arg->p,
// 	['d'] = list_arg->arg->ll,
// 	['D'] = list_arg->arg->ll,
// 	['i'] = list_arg->arg->ll,
// 	['o'] = list_arg->arg->ll,
// 	['O'] = list_arg->arg->ll,
// 	['u'] = list_arg->arg->ll,
// 	['U'] = list_arg->arg->ll,
// 	['x'] = list_arg->arg->ll,
// 	['X'] = list_arg->arg->ll,
// 	['c'] = list_arg->arg->c,
// 	['C'] = list_arg->arg->c
// };

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

static t_list_arg		*ft_init_list_arg(t_list_arg *arg_list)
{
	if (arg_list)
	{
		(!(arg_list->next = (t_list_arg*)malloc(sizeof(t_list_arg))) ? \
			(ft_error("ft_get_args : malloc failed")) : (arg_list));
		arg_list->next->first = arg_list->first;
		arg_list->next->nbr = arg_list->nbr + 1;
		arg_list = arg_list->next;
	}
	else
	{
		(!(arg_list = (t_list_arg*)malloc(sizeof(t_list_arg))) ? \
			(ft_error("ft_get_args : malloc failed")) : (arg_list));
		arg_list->first = arg_list;
		arg_list->nbr = 1;
	}
	arg_list->arg_type = 0;
	arg_list->arg = NULL;
	arg_list->len = 0;
	arg_list->next = NULL;
	return (arg_list);
}


static void			ft_get_type(t_format_id *format_id, t_list_arg *arg_list, va_list *ap)
{
	ft_putstr("\n--------- 1 ----------\n");
	if (format_id->precision.period == '*')
	{
		ft_putstr("\n--------- 1.0 ----------\n");
		arg_list->arg->ll = va_arg(*ap, long long int);
		arg_list->arg_type = 'L';
		arg_list = ft_init_list_arg(arg_list);
	}
	// if (ptr_arg[format_id->arg_type])
	// 	va_arg(*ap, ptr_arg[format_id->arg_type]) = ptr_va_arg[format_id->arg_type](ap);
	if (ft_strchr("sScC", format_id->arg_type))
	{
		arg_list->arg->s = va_arg(*ap, char*);
		ft_putstr("\n--------- 1.1 ----------\n");
	}
	else if (ft_strchr("dDioOuUxX", format_id->arg_type))
	{
		arg_list->arg->ll = va_arg(*ap, long long int);
		ft_putstr("\n--------- 1.2 ----------\n");
	}

	else if (format_id->arg_type == 'p')
	{
		arg_list->arg->p = va_arg(*ap, void*);
		ft_putstr("\n--------- 1.3 ----------\n");
	}
	else
		(ft_error("ft_get_type : arg_type error"));
}

static t_list_arg		*ft_get_args(t_format_id *format_id, va_list *ap)
{
	t_list_arg	*arg_list;

	arg_list = NULL;
	if (format_id)
	{
		arg_list = ft_init_list_arg(arg_list);
		ft_get_type(format_id, arg_list, ap);
		ft_putstr("\n--------- 1 ----------\n");
		while (format_id->next)
		{
			ft_putstr("\nNOT  WTF\n");
			format_id = format_id->next;
			arg_list = ft_init_list_arg(arg_list);
			ft_get_type(format_id, arg_list, ap);
		}
	}
	else
		ft_putstr("\nWTF\n");
	return (arg_list);
}

static void			ft_print_all_arg(t_list_arg *arg_list)
{
	int			done;

	done = 0;
	ft_putstr("BeforeAfterLife\n");
	if (arg_list)
	{
		ft_putstr("AfterLife\n");
		while (arg_list->next || (arg_list->first == arg_list && !done))
		{
			if (!done)
				arg_list = arg_list->next;
			else
				 done++;
			if (ft_strchr("dDioOuUxX", arg_list->arg_type))
				ft_putnbr(arg_list->arg->ll);
			else if (ft_strchr("sScC", arg_list->arg_type))
				ft_putstr(arg_list->arg->s);
			else if (arg_list->arg_type == 'p')
				ft_putstr("Pointer here\n");
			else
				ft_putstr("Autre chose ici\n");
		}
	}
}

int					ft_printf(char *str, ...)
{
	int				len;
	int				pos;
	va_list			ap;
	t_format_id		*format_id;
	t_list_arg		*arg_list;

	pos = 0;
	len = 0;
	va_start(ap, str);
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
	ft_putstr("\nAfterall----------\n");
	arg_list = ft_get_args(format_id, &ap);
	ft_putstr("\nAfterall----------\n");
	ft_putstr("ENDING\n");
	ft_print_all_arg(arg_list);
	// ft_printstr(str);
	va_end(ap);
	return (len);
}
