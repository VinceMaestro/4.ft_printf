/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:03:04 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/15 19:50:10 by vpetit           ###   ########.fr       */
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

static void			ft_parse_str_infos(t_format_id *f_id, char *str)
{
	int		newpos;

	newpos = 0;
	ft_get_parameter(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	ft_get_flags(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	ft_get_width_min(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	ft_get_precision(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	ft_get_arg_type(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;

	f_id->nb_read_char = newpos;
}

t_format_id			*ft_parse_all(char *str)
{
	int				cpt;
	int				pos;
	t_format_id		*f_id;

	pos = 0;
	cpt = 1;
	f_id = NULL;
	while (str && str[pos])
	{
		if (str[pos] != '%' || str[pos + 1] == '%')
			((str[pos] != '%') ? (pos++) : (pos += 2));
		else
		{
			if (!f_id)
			{
				ft_putstr("HERE FIRST CREATTION\n");
				f_id = ft_format_id_init(f_id, cpt++);
			}
			else
			{
				ft_putstr("HERE NEW ELEM\n");
				f_id->next = ft_format_id_init(f_id, cpt++);
				f_id = f_id->next;
			}
			f_id->start_pos = pos;
			ft_parse_str_infos(f_id, &(str[pos]));
			pos += f_id->nb_read_char;
		}
	}
	f_id = f_id->first;
	return (f_id);
}

int					ft_printf(char *str, ...)
{
	va_list			ap;
	int				len;
	t_format_id		*f_id;
	t_a_lst			*a_lst;

	ft_printstr(str);
	ft_putstr("PARSING : START\n");
	f_id = ft_parse_all(str);
	ft_putstr("PARSING : SUCESS\n");

	// ft_print_all_f_id(f_id);

	ft_putstr("Fetching Arguments : ");

	va_start(ap, str);
	a_lst = ft_get_all_args(f_id, &ap);
	va_end(ap);

	ft_putstr("\nSucess\n");

	len = ft_print_all(f_id, a_lst, str);

	// len = 0;

	// ft_printstr(str);

	ft_putstr("ENDING\n");


	return (len);
}
