/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_w_min.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 03:57:07 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/24 13:38:19 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_get_w_min(t_f_id *f_id, char *tmp_str)
{
	int		nbr_len;
	int		save_nbr;
	int		nb_r_c;

	save_nbr = 0;
	nbr_len = 0;
	nb_r_c = 0;
	while (tmp_str && tmp_str[nb_r_c] == '0')
		nb_r_c++;
	if (tmp_str && (save_nbr = ft_atoi(&tmp_str[nb_r_c])))
		nbr_len = ft_intlen(save_nbr);
	if (!f_id->w_min)
		f_id->w_min = ft_max(0, save_nbr);
	f_id->nb_r_c = nbr_len + nb_r_c;
}
