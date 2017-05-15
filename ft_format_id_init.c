/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_id_init.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 13:00:05 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/15 19:36:33 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static void			ft_init_flags(t_format_id *f_id)
{
	f_id->flags.space = 0;
	f_id->flags.plus = 0;
	f_id->flags.minus = 0;
	f_id->flags.hash = 0;
	f_id->flags.zero = 0;
}

t_format_id			*ft_format_id_init(t_format_id *f_id, int nbr)
{
	t_format_id		*new;

	new = (t_format_id*)malloc(sizeof(t_format_id));
	new->parameter = nbr;
	ft_init_flags(new);
	new->width_min = 0;
	new->precision.period = 0;
	new->precision.width_max = 0;
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
