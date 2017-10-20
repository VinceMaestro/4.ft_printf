/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_prec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 18:37:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/20 18:30:53 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void			ft_get_period(t_f_id *f_id, char *str)
{
	int		pos;

	pos = 0;
	if (str[pos] && str[pos] == '.')
	{
		if (str[pos + 1] && str[pos + 1] == '*')
			pos++;
		f_id->prec.period = str[pos];
		pos++;
	}
	f_id->nb_r_c = pos;
}

static void			ft_get_nb_dgt(t_f_id *f_id, char *str)
{
	int		pos;
	int		minus;

	minus = 0;
	pos = f_id->nb_r_c;
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
			f_id->prec.nb_dgt = ft_atoi(&str[pos]) * (minus ? -1 : 1);
			pos += ft_intlen(f_id->prec.nb_dgt * (minus ? -1 : 1));
		}
		else
			f_id->prec.nb_dgt = 0;
	}
	else
		f_id->prec.nb_dgt = 0;
	f_id->nb_r_c = pos;
}

void				ft_get_prec(t_f_id *f_id, char *tmp_str)
{
	ft_get_period(f_id, tmp_str);
	if (f_id->prec.period == '.')
		ft_get_nb_dgt(f_id, tmp_str);
}
