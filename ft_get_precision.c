/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 18:37:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/27 13:46:23 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void			ft_get_period(t_format_id *f_id, char *str)
{
	int		pos;

	pos = 0;
	if (str[pos] && str[pos] == '.')
	{
		if (str[pos + 1] && str[pos + 1] == '*')
			pos++;
		f_id->precision.period = str[pos];
		pos++;
	}
	f_id->nb_read_char = pos;
}

static void			ft_get_width_max(t_format_id *f_id, char *str)
{
	int		pos;
	int		minus;

	minus = 0;
	pos = f_id->nb_read_char;
	while (str[pos] == '-' || str[pos] == '+')
	{
		str[pos] == '-' ? minus = 1 : minus;
		pos++;
	}
	if (ft_isdigit(str[pos]))
	{
		while (str[pos] == '0')
			pos++;
		if (ft_atoi(&str[pos]))
		{
			f_id->precision.width_max = ft_atoi(&str[pos]) * (minus ? -1 : 1);
			pos += ft_intlen(f_id->precision.width_max * (minus ? -1 : 1));
		}
	}
	f_id->nb_read_char = pos;
}

void				ft_get_precision(t_format_id *f_id, char *tmp_str)
{
	ft_get_period(f_id, tmp_str);
	if (f_id->precision.period == '.')
		ft_get_width_max(f_id, tmp_str);
}
