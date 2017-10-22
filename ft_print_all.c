/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:53:42 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 18:18:24 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					ft_print_all(t_a_lst *a_lst, t_f_id *f_id, char *str)
{
	int		len;
	int		pos;

	len = 0;
	pos = 0;
	while (str[pos])
	{
		while (str[pos] && (!f_id || pos < f_id->start_pos))
		{
			// ft_putstr("char: | ");
			ft_putchar(str[pos++]);
			// ft_putstr(" |\n");
			len++;
		}
		if (str[pos] && pos == f_id->start_pos)
		{
			a_lst = ft_print_arg(a_lst, f_id, &str[pos]);
			len += f_id->nb_p_c;
			pos += f_id->nb_r_c;
			f_id = f_id->next;
		}
	}
	return (len);
}
