/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:03:04 by vpetit            #+#    #+#             */
/*   Updated: 2017/03/30 06:52:52 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// (va_list ap, t_format_id *format_id)
// (t_format_data const*)

// static void * (*const g_formats_f[255])(va_list, t_format_id *) =
// {
// 	['s'] = &ft_print_arg_s,				//String.
// 	['S'] = &ft_print_arg_s,				//String.
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

static void			ft_format_id_getinfo(t_format_id *format_id, char *tmp_str)
{
	ft_get_arg_type(format_id, tmp_str);
	ft_get_flags(format_id, tmp_str);
	ft_get_width_min(format_id, tmp_str);
	// ft_get_period(format_id, tmp_str);
	// if (format_id.period)
	// 	ft_get_width_max(format_id, tmp_str);
}

static t_format_id	*ft_format_id_init(t_format_id *format_id)
{
	int		i;

	i = 0;
	while (i < 4)
		format_id->flags[i++] = 0;
	format_id->width_min = 0;
	format_id->period = 0;
	format_id->width_max = 0;
	format_id->arg_type = 0;
	format_id->nb_read_char = 0;
	format_id->nb_print_char = 0;
	return (format_id);
}

int					ft_printf(char *str, ...)
{
	int			len;
	char		*tmp_str;
	va_list		ap;
	t_format_id	*format_id;
	int			pos;

	pos = 0;
	len = 0;
	tmp_str = str;
	va_start(ap, str);
	while (tmp_str && tmp_str[pos])
	{
		format_id = ft_format_id_init(format_id);
		if (tmp_str[pos] != '%')
		{
			// ft_putchar(tmp_str[pos]);
			pos++;
			len++;
		}
		else
		{
			ft_format_id_getinfo(format_id, &(tmp_str[pos]));
			// ft_putstr(format_id->flags);
			// g_formats_f[format_id->arg_type](ap, format_id);
			// len += format_id.nb_print_char;
			pos += format_id->nb_read_char;
		}
		ft_putstr("Once\n");
	}
	va_end(ap);
	return (0);
}
