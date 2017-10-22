/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 19:23:01 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 12:45:25 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_p_s(t_a_lst *a_lst, t_f_id *f_id)
{
	int			len;
	int			toprint;

	len = 0;
	if (f_id->prec.period && f_id->prec.nb_dgt)
		toprint = ft_min(ft_strlen(a_lst->a.s), ft_abs(f_id->prec.nb_dgt));
	else
		toprint = ft_strlen(a_lst->a.s);
	len = ft_max(0, f_id->w_min - toprint);
	if (len > 0)
	{
		if (f_id->flags & F_MINUS)
		{
			ft_putn_ustr(a_lst->a.s, toprint);
			ft_put_x_char(' ', len);
		}
		else
		{
			if (f_id->flags & F_ZERO)
				ft_put_x_char('0', len);
			else
				ft_put_x_char(' ', len);
		}
	}
	if (len <= 0 || f_id->flags & ~F_MINUS || !f_id->flags)
		ft_putn_ustr(a_lst->a.s, toprint);
	f_id->nb_p_c = toprint + ft_max(len, 0);
}

void			ft_print_a_s(t_a_lst *a_lst, t_f_id *f_id)
{
	if (a_lst && f_id && ((ft_strchr("sSC", a_lst->a_tp) && a_lst->a.s) || \
		(a_lst->a_tp == 'c' && a_lst->a.ll)))
	{
		ft_p_s(a_lst, f_id);
	}
	else if (a_lst && f_id)
	{
		ft_putstr("(null)");
		f_id->nb_p_c = 6;
	}
}
