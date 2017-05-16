/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:03:04 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/16 21:40:22 by vpetit           ###   ########.fr       */
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

t_format_id			*ft_get_f_id_from_str(char *str)
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
				f_id = ft_init_format_id(f_id, cpt++);
			}
			else
			{
				ft_putstr("HERE NEW ELEM\n");
				f_id->next = ft_init_format_id(f_id, cpt++);
				f_id = f_id->next;
			}
			f_id->start_pos = pos;
			ft_get_all_infos(f_id, &(str[pos]));
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
	f_id = ft_get_f_id_from_str(str);
	ft_putstr("PARSING : SUCESS\n");

	// ft_print_all_f_id(f_id); // for debugg

	ft_putstr("Fetching Arguments : ");

	va_start(ap, str);
	a_lst = ft_mk_all_a_lst(f_id, &ap);
	va_end(ap);

	ft_putstr("\nSucess\n");

	len = ft_print_all(f_id, a_lst, str);

	// len = 0;

	// ft_printstr(str);

	ft_putstr("ENDING\n");


	return (len);
}
