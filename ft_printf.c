/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:03:04 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/02 13:39:18 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	format_id = format_id->first;
	arg_list = ft_get_args(format_id, &ap);
	ft_putstr("\nAfterall----------\n");
	ft_putstr("ENDING\n");
	ft_print_all_arg(arg_list);
	// ft_printstr(str);
	va_end(ap);
	return (len);
}
