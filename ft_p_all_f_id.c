/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_all_f_id.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:53:42 by vpetit            #+#    #+#             */
/*   Updated: 2017/06/13 21:07:05 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					ft_p_all_f_id(t_format_id *f_id ,t_a_lst *a_lst, char *str)
{
	int		len;
	int		pos;

	len = 0;
	pos = 0;
	while (str[pos] && a_lst)
	{
		while (str[pos] && (!f_id || pos < f_id->start_pos))
		{
			ft_putchar(str[pos++]);
			len++;
		}
		if (str[pos])
		{
			a_lst = ft_p_f_id(f_id, a_lst); // ex ft_p_arg_w_tp
			len += f_id->nb_print_char;
			pos += f_id->nb_read_char;
			f_id = f_id->next;


			// if (f_id->arg_type)
			// {
			// 	a_lst = ft_p_arg_w_tp(f_id, a_lst);
			// 	len += f_id->nb_print_char;
			// }
			// pos += f_id->nb_read_char;
			// f_id = f_id->next;
		}
	}
	return (len);
}
