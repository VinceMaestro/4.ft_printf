/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_format_id.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 13:00:05 by vpetit            #+#    #+#             */
/*   Updated: 2017/06/13 21:18:24 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

t_format_id			*ft_init_format_id(t_format_id *f_id, int nbr)
{
	t_format_id		*new;

	new = (t_format_id*)malloc(sizeof(t_format_id));
	new->parameter = nbr;
	new->flags = 0;
	new->width_min = 0;
	new->precision.period = 0;
	new->precision.width_max = -1;
	new->lenght = NULL;
	new->arg_type = 0;
	new->nb_read_char = 0;
	new->nb_print_char = 0;
	new->start_pos = 0;
	if (f_id)
		new->first = f_id->first;
	else
		new->first = new;
	new->next = NULL;
	return (new);
}
