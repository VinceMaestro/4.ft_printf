/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:03:04 by vpetit            #+#    #+#             */
/*   Updated: 2017/03/28 21:50:50 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void (*const g_formats_f[])(t_format_data const*) =
{
	['s'] = &printf_format_s,				//String.
	['S'] = &printf_format_s,				//String.
	['p'] = &printf_format_p,				//pointer.
	['d'] = &printf_format_d,				//Decimal signed integer.
	['D'] = &printf_format_d,				//Decimal signed integer.
	['i'] = &printf_format_d,				//Decimal signed integer.
	['o'] = &printf_format_o,				//Octal integer.
	['O'] = &printf_format_o,				//Octal integer.
	['u'] = &printf_format_u,				//Unsigned integer.
	['U'] = &printf_format_u,				//Unsigned integer.
	['x'] = &printf_format_x,				//Hex integer.
	['X'] = &printf_format_x,				//Hex integer.
	['c'] = &printf_format_c,				//Character.
	['C'] = &printf_format_c,				//Character.
	['%'] = &printf_format_percent
	// ['f'] = &printf_format_f,				//double
	// ['e'] = &printf_format_e,				//double.
	// ['E'] = &printf_format_e,				//double.
	// ['g'] = &printf_format_g,				//double.
	// ['G'] = &printf_format_g,				//double.
};

static void		ft_format_id_getall(t_format_id *format_id, char *tmp_str)
{
	ft_get_flags(format_id, tmp_str);
	ft_get_width_min(format_id, tmp_str);
	ft_get_period(format_id, tmp_str);
	if (format_id.period)
		ft_get_width_max(format_id, tmp_str);
	ft_get_arg_type(format_id, tmp_str);
}

static void		ft_format_id_init(t_format_id *format_id)
{
	format_id->flags = NULL;
	format_id->width_min = 0;
	format_id->period = 0;
	format_id->width_max = 0;
	format_id->arg_type = NULL;
	format_id->nb_read_char = 0;
	format_id->nb_print_char = 0;
}

int		ft_printf(char *str, ...)
{
	int			len;
	char		*tmp_str;
	va_list		ap;
	t_format_id	*format_id;

	len = 0;
	tmp_str = str;
	va_start(ap, str);
	while (*tmp_str)
	{
		ft_format_id_init(format_id);
		if (*tmp_str != '%' && len++)
			ft_putchar(*tmp_str++);
		else
		{
			ft_format_id_getall(format_id, tmp_str);
			g_formats_f[format_id.arg_type](ap, format_id);
			len += format_id.nb_print_char;
			*tmp_str = *tmp_str + format_id.nb_read_char + 1;
		}
	}
	va_end(ap);
	return (0);
}
