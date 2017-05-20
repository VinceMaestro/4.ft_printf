/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:53:42 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/17 16:25:12 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ptr_fct[(int)f_id->arg_type](&ap, f_id);

int					ft_print_all(t_format_id *f_id ,t_a_lst *a_lst, char *str)
{
	int		len;
	int		pos;

	len = 0;
	pos = -1;
	while (str[++pos])
	{
		while (str[pos] && (!f_id || pos < f_id->start_pos))
		{
			ft_putchar(str[pos++]);
			len++;
		}
		if (str[pos])
		{
			if (f_id->arg_type)
			{
				a_lst = ft_p_arg_w_tp(f_id, a_lst);
				len += f_id->nb_print_char;
			}
			pos += f_id->nb_read_char - 1;
			f_id = f_id->next;
		}
	}
	return (len);
}
