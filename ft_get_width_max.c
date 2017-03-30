/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width_max.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 18:10:52 by vpetit            #+#    #+#             */
/*   Updated: 2017/03/30 19:24:01 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_get_width_max(t_format_id *format_id, char *tmp_str)
{
	int		pos;
	int		first;

	pos = 1;
	while (tmp_str[pos] != format_id->period)
		pos++;
	pos++;
	if (!ft_isdigit(tmp_str[pos]))
		ft_error("ft_get_width_max : Input error");
	first = pos;
	while (ft_isdigit(tmp_str[pos]))
		pos++;
	format_id->width_max = ft_atoi(&tmp_str[first]);
}
