/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_null.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 19:14:47 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/12 14:50:32 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_print_a_null(t_f_id *f_id, char *str)
{
	int		len;

	len = 0;
	if (str && f_id)
	{
		if (f_id->flags & F_MINUS && str[f_id->nb_r_c - 1])
		{
			ft_putchar(str[f_id->nb_r_c - 1]);
			f_id->nb_r_c += 1;
			f_id->nb_p_c += 1;
		}
		(f_id->w_min ? len = f_id->w_min - 1 : len);
		ft_put_x_char(' ', len);
		f_id->nb_p_c += ft_max(len, 0);
	}
	else
		ft_error("ft_print_a_null: Shouldn't happend");
}
