/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:03:04 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/04 14:49:22 by vpetit           ###   ########.fr       */
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
	ft_get_parameter(format_id, &str[newpos]);
	newpos += format_id->nb_read_char;
	ft_get_flags(format_id, &str[newpos]);
	newpos += format_id->nb_read_char;
	ft_get_width_min(format_id, &str[newpos]);
	newpos += format_id->nb_read_char;
	ft_get_precision(format_id, &str[newpos]);
	newpos += format_id->nb_read_char;
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
	int				cpt;
	t_format_id		*format_id;
	t_list_arg		*arg_list;

	pos = 0;
	cpt = 1;

	ft_printstr(str);
	format_id = NULL;
	ft_putstr("PARSING : START\n");
	while (str && str[pos])
	{
		if (str[pos] != '%' || str[pos + 1] == '%')
			((str[pos] != '%') ? (pos++) : (pos += 2));
		else
		{
			if (!format_id)
			{
				ft_putstr("HERE FIRST CREATTION\n");
				format_id = ft_format_id_init(format_id, cpt++);
			}
			else
			{
				ft_putstr("HERE NEW ELEM\n");
				format_id->next = ft_format_id_init(format_id, cpt++);
				format_id = format_id->next;
			}
			format_id->start_pos = pos;
			ft_parse_str_infos(format_id, &(str[pos]));
			pos += format_id->nb_read_char;
		}
	}
	// ft_print_all_format_id(format_id);
	ft_putstr("PARSING : SUCESS\n");
	format_id = format_id->first;
	ft_print_all_format_id(format_id);

	ft_putstr("Fetching Arguments : ");

	arg_list = ft_get_args(format_id, str);

	ft_putstr("Sucess\n");

	len = ft_print_all(format_id, arg_list, str);
	// ft_printstr(str);

	ft_putstr("ENDING\n");


	return (len);
}
