/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_all_infos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 19:14:21 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/12 15:00:30 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void			ft_mk_new_f_id(t_f_id *f_id, char *str)
{
	int		newpos;

	newpos = 0;
	ft_get_param(f_id, &str[newpos]);
	newpos += f_id->nb_r_c;
	// printf("\n--- param update : %i\n", newpos);
	ft_get_flags(f_id, &str[newpos]);
	newpos += f_id->nb_r_c;
	// printf("\n--- flags update : %i\n", newpos);
	ft_get_w_min(f_id, &str[newpos]);
	newpos += f_id->nb_r_c;
	// printf("\n--- w_min update : %i\n", newpos);
	ft_get_prec(f_id, &str[newpos]);
	newpos += f_id->nb_r_c;
	// printf("\n--- prec update : %i\n", newpos);
	ft_get_lenght(f_id, &str[newpos]);
	newpos += f_id->nb_r_c;
	// printf("\n--- lenght update : %i\n", newpos);
	ft_get_a_tp(f_id, &str[newpos]);
	newpos += f_id->nb_r_c;
	// printf("\n--- a_tp update : %i\n", newpos);
	f_id->nb_r_c = newpos;
}
