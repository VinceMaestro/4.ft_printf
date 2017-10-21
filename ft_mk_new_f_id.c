/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mk_new_f_id.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 19:14:21 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 12:17:59 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_mk_new_f_id(t_f_id *f_id, char *str)
{
	int		newpos;

	newpos = 0;
	ft_get_param(f_id, &str[newpos]);
	newpos += f_id->nb_r_c;
	ft_get_flags(f_id, &str[newpos]);
	newpos += f_id->nb_r_c;
	ft_get_w_min(f_id, &str[newpos]);
	newpos += f_id->nb_r_c;
	ft_get_prec(f_id, &str[newpos]);
	newpos += f_id->nb_r_c;
	ft_get_lenght(f_id, &str[newpos]);
	newpos += f_id->nb_r_c;
	ft_get_a_tp(f_id, &str[newpos]);
	newpos += f_id->nb_r_c;
	f_id->nb_r_c = newpos;
}
