/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:53:42 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/23 15:39:32 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					ft_print_all(t_a_lst *a_lst, t_f_id *f_id, char *str)
{
	int		len;
	int		pos;
	int		max;

	len = 0;
	pos = 0;
	max = ft_strlen(str);
	while (str && str[pos] && pos < max)
	{
		while (str[pos] && (!f_id || pos < f_id->start_pos) && pos < max)
		{
			ft_putchar(str[pos++]);
			len++;
		}
		if (str[pos] && pos == f_id->start_pos && pos < max)
		{
			a_lst = ft_print_arg(a_lst, f_id, &str[pos]);
			len += f_id->nb_p_c;
			pos += f_id->nb_r_c;
			f_id = f_id->next;
		}
	}
	return (len);
}
