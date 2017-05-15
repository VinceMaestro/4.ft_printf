/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width_min.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 03:57:07 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/15 21:02:42 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void			ft_get_width_min(t_format_id *f_id, char *tmp_str)
{
	int		nbr_len;
	int		save_nbr;
	int		nb_read_char;

	nbr_len = 0;
	nb_read_char = 0;
	if ((save_nbr = ft_atoi(&tmp_str[nb_read_char])))
		nbr_len = ft_intlen(save_nbr);
	else if (tmp_str[nb_read_char] == '*')
	{
		nb_read_char++;
		f_id->width_min = -1;
	}
	if (!tmp_str[nbr_len + nb_read_char])
		ft_error("ft_get_width_min: Input format error");
	if (!f_id->width_min)
		f_id->width_min = ft_max(0, save_nbr);
	f_id->nb_read_char = nbr_len + nb_read_char;
}
