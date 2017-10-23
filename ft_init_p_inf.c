/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_p_inf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 14:32:42 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 12:24:17 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void		ft_init_p_inf(t_p_inf *infos)
{
	// infos = NEW(t_p_inf);
	*infos = (t_p_inf){
		.len_a = 0,
		.nbr_pad_w_min = 0,
		.nbr_pad_dgt = 0,
		.pad_rt = 0,
		.pad_w_min = 0,
		.pad_dgt = 0,
		.first_c = NULL,
	};
}
