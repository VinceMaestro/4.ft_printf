/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:03:04 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/05 16:59:06 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

// (va_list ap, t_format_id *format_id)
// (t_format_data const*)

// static void (*const g_formats_f[])(va_list, t_format_id *) =



// static void *(ptr_fct[255])(va_list *, t_format_id *) =
// {
// 	['s'] = &ft_print_arg_s,				//String.
// 	['S'] = &ft_print_arg_s					//String.
// 	['p'] = &ft_print_arg_p,				//pointer.
// 	['d'] = &ft_print_arg_d,				//Decimal signed integer.
// 	['D'] = &ft_print_arg_d,				//Decimal signed integer.
// 	['i'] = &ft_print_arg_d,				//Decimal signed integer.
// 	['o'] = &ft_print_arg_o,				//Octal integer.
// 	['O'] = &ft_print_arg_o,				//Octal integer.
// 	['u'] = &ft_print_arg_u,				//Unsigned integer.
// 	['U'] = &ft_print_arg_u,				//Unsigned integer.
// 	['x'] = &ft_print_arg_x,				//Hex integer.
// 	['X'] = &ft_print_arg_x,				//Hex integer.
// 	['c'] = &ft_print_arg_c,				//Character.
// 	['C'] = &ft_print_arg_c,				//Character.
// 	['%'] = &ft_print_arg_percent
// 	// ['f'] = &printf_format_f,				//double
// 	// ['e'] = &printf_format_e,				//double.
// 	// ['E'] = &printf_format_e,				//double.
// 	// ['g'] = &printf_format_g,				//double.
// 	// ['G'] = &printf_format_g,				//double.
// };

static void 		ft_printstr(char *str)
{
	ft_putstr("STRING IS : '");
	ft_putstr(str);
	ft_putstr("'\n");
}

static void			ft_format_id_getinfo(t_format_id *format_id, char *tmp_str)
{
	int		newpos;

	newpos = 0;
	ft_get_parameter(format_id, &tmp_str[newpos]);
	newpos += format_id->nb_read_char;
	ft_get_flags(format_id, &tmp_str[newpos]);
	newpos += format_id->nb_read_char;
	ft_get_width_min(format_id, &tmp_str[newpos]);
	newpos += format_id->nb_read_char;
	ft_get_precision(format_id, &tmp_str[newpos]);
	newpos += format_id->nb_read_char;
	ft_get_lenght(format_id, &tmp_str[newpos]);
	newpos += format_id->nb_read_char;
	ft_get_arg_type(format_id, &tmp_str[newpos]);
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

static t_format_id	ft_format_id_init(void)
{
	t_format_id		new;

	ft_init_flags(&new);
	new.width_min = 0;
	new.period = 0;
	new.width_max = 0;
	new.arg_type = 0;
	new.nb_read_char = 0;
	new.nb_print_char = 0;
	return (new);
}

int					ft_printf(char *str, ...)
{
	int			len;
	char		*tmp_str;
	va_list		ap;
	t_format_id	format_id;
	int			pos;

	pos = 0;
	len = 0;
	tmp_str = str;
	va_start(ap, str);
	ft_printstr(tmp_str);
	while (tmp_str && tmp_str[pos])
	{
		format_id = ft_format_id_init();
		if (tmp_str[pos] != '%')
		{
			pos++;
			len++;
		}
		else
		{
			ft_format_id_getinfo(&format_id, &(tmp_str[pos]));
			// ft_print_format_id(&format_id);
			if (format_id.arg_type == 's')
				ft_print_arg_s(&ap, &format_id);

			ft_print_format_id(&format_id);

			// (*ptr_fct[(int)format_id.arg_type])(&ap, &format_id);
			// *g_formats_f[format_id.arg_type](ap, &format_id);
			len += format_id.nb_print_char;
			pos += format_id.nb_read_char;
		}
	}
	ft_putstr("ENDING\n");
	// ft_printstr(tmp_str);
	va_end(ap);
	return (len);
}
