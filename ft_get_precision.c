/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 18:37:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/06 17:44:19 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



static void			ft_get_period(t_format_id *format_id, char *tmp_str)
{
	int		pos;

	pos = 0;
	if (tmp_str[pos] && tmp_str[pos] == '.')
	{
		if (tmp_str[pos + 1] && tmp_str[pos + 1] == '*')
			pos++;
		format_id->precision.period = tmp_str[pos];
		pos++;
	}
	format_id->nb_read_char = pos;
}

static void			ft_get_width_max(t_format_id *format_id, char *tmp_str)
{
	int		pos;

	pos = format_id->nb_read_char;
	if (format_id->precision.period == '*')
		format_id->precision.width_max = -1;
	else if (ft_isdigit(tmp_str[pos]))
	{
		format_id->precision.width_max = ft_atoi(&tmp_str[pos]);
		pos += ft_intlen(format_id->precision.width_max);
		format_id->nb_read_char = pos;
	}
}

void				ft_get_precision(t_format_id *format_id, char *tmp_str)
{
	ft_get_period(format_id, tmp_str);
	if (format_id->precision.period)
		ft_get_width_max(format_id, tmp_str);
}
