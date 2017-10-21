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

t_p_inf			*ft_init_p_inf(void)
{
	t_p_inf		*infos;

	infos = NULL;
	if (!(infos = (t_p_inf*)malloc(sizeof(t_p_inf))))
		ft_error("ft_print_a_o: ft_init_p_inf: input error");
	else
	{
		infos->len_a = 0;
		infos->nbr_pad_w_min = 0;
		infos->nbr_pad_dgt = 0;
		infos->pad_rt = 0;
	}
	return (infos);
}
