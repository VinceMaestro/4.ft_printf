/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 18:37:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/23 15:30:18 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void			ft_get_period(t_format_id *f_id, char *tmp_str)
{
	int		pos;

	pos = 0;
	if (tmp_str[pos] && tmp_str[pos] == '.')
	{
		if (tmp_str[pos + 1] && tmp_str[pos + 1] == '*')
			pos++;
		f_id->precision.period = tmp_str[pos];
		pos++;
	}
	f_id->nb_read_char = pos;
}

static void			ft_get_width_max(t_format_id *f_id, char *tmp_str)
{
	int		pos;

	pos = f_id->nb_read_char;
	ft_putstr("WTFFFFFFFFFFFFF\n");
	ft_putstr("pos = ");
	ft_putnbr(pos);
	if (ft_isdigit(tmp_str[pos]))
	{
		ft_putnbr(f_id->precision.width_max);
		while (tmp_str[pos] == '0')
			pos++;
		if (ft_atoi(&tmp_str[pos]))
		{
			f_id->precision.width_max = ft_atoi(&tmp_str[pos]);
			pos += ft_intlen(f_id->precision.width_max);
		}
		f_id->nb_read_char = pos;
		ft_putstr(" || pos = ");
		ft_putnbr(pos);
		ft_putstr(" \n");
	}
}

void				ft_get_precision(t_format_id *f_id, char *tmp_str)
{
	ft_get_period(f_id, tmp_str);
	if (f_id->precision.period == '.')
		ft_get_width_max(f_id, tmp_str);
}
