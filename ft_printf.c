/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:03:04 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/03 14:38:42 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// gcc main_printf.c libftprintf.a ./libft/libft.a -I libft

static void 		ft_printstr(char *str)
{
	ft_putstr("STRING IS : '");
	ft_putstr(str);
	ft_putstr("'\n");
}

static void			ft_parse_str_infos(t_format_id *format_id, char *str)
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
	va_start(ap, str);
	ft_printstr(str);
	while (str && str[pos])
	{
		if (str[pos] != '%' || str[pos + 1] == '%')
			((str[pos] != '%') ? (pos++) : (pos += 2));
		else
		{
			if (!format_id)
				format_id = ft_format_id_init(format_id);
			else
				format_id->next = ft_format_id_init(format_id);
			((format_id->next) ? (format_id = format_id->next) : (format_id));
			format_id->start_pos = pos;
			ft_parse_str_infos(format_id, &(str[pos]));

			ft_print_format_id(format_id);

			// *g_formats_f[format_id->arg_type](ap, format_id);
			pos += format_id->nb_read_char;
		}
	}
	ft_putstr("\nAfterall----------\n");
	format_id = format_id->first;
	arg_list = ft_get_args(format_id, &ap);
	ft_putstr("\nAfterall----------\n");
	if (format_id->arg_type == 's')
		ft_print_arg_s(arg_list, format_id);
	ft_putstr("ENDING\n");
	len = ft_print_all(format_id, arg_list, str);
	// ft_printstr(str);
	va_end(ap);
	return (len);
}
