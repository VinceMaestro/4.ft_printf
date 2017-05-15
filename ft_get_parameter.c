/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_parameter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 17:02:40 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/15 19:38:17 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_get_parameter(t_format_id *f_id, char *tmp_str)
{
	int		nbr_len;
	int		save_nbr;
	int		nb_read_char;

	nbr_len = 0;
	nb_read_char = 1;
	save_nbr = ft_atoi(&tmp_str[nb_read_char]);
	if (save_nbr)
		nbr_len = ft_intlen(save_nbr);
	if (tmp_str[nbr_len + nb_read_char] == '$')
	{
		nb_read_char++;
		f_id->nb_read_char = nbr_len + nb_read_char;
	}
	else
		f_id->nb_read_char = nb_read_char;
}
