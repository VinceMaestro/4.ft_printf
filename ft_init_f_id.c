/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_f_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 13:00:05 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/23 17:25:08 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

t_f_id			*ft_init_f_id(t_f_id *f_id, int nbr)
{
	t_f_id		*new;

	new = (t_f_id*)malloc(sizeof(t_f_id));
	if (!new)
		return (NULL);
	new->param = nbr;
	new->flags = 0;
	new->w_min = 0;
	new->prec.period = 0;
	new->prec.nb_dgt = -1;
	new->lenght = NULL;
	new->a_tp = 0;
	new->nb_r_c = 0;
	new->nb_p_c = 0;
	new->start_pos = 0;
	new->err = 0;
	if (f_id)
		new->first = f_id->first;
	else
		new->first = new;
	new->next = NULL;
	return (new);
}
