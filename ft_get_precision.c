/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 18:37:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/05 18:55:17 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_get_precision(t_format_id *format_id, char *tmp_str)
{
	int		pos;

	pos = 0;
	if (tmp_str[pos] && (tmp_str[pos] == '.' || tmp_str[pos] == '*'))
	{
		if (tmp_str[pos] == '.' || tmp_str[pos] == '*')
			format_id->period = tmp_str[pos];
		pos++;
	}
}

void			ft_get_width_max(t_format_id *format_id, char *tmp_str)
{
	int		pos;
	int		first;

	pos = 1;
	while (tmp_str[pos] != format_id->period)
		pos++;
	pos++;
	if (!ft_isdigit(tmp_str[pos]))
		ft_error("ft_get_width_max: Input format error", "usage");
	first = pos;
	while (ft_isdigit(tmp_str[pos]))
		pos++;
	format_id->width_max = ft_atoi(&tmp_str[first]);
}
