/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 17:02:40 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/12 14:48:48 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_get_param(t_f_id *f_id, char *tmp_str)
{
	int		nbr_len;
	int		save_nbr;
	int		nb_r_c;

	nbr_len = 0;
	nb_r_c = 1;
	if (tmp_str && tmp_str[nb_r_c])
	{
		save_nbr = ft_atoi(&tmp_str[nb_r_c]);
		if (save_nbr)
			nbr_len = ft_intlen(save_nbr);
		if (tmp_str[nbr_len + nb_r_c] == '$')
		{
			nb_r_c++;
			f_id->nb_r_c = nbr_len + nb_r_c;
		}
		else
			f_id->nb_r_c = nb_r_c;
	}
	else
		f_id->nb_r_c = 0;
}
