/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 10:58:29 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/17 17:43:47 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

void			ft_putsign(char *str, uint32_t flags, int w_min)
{
	if (flags & F_PLUS && str && *str)
	{
		if (*str == '-')
			ft_putchar('-');
		else if (w_min <= 0)
			ft_putchar(' ');
	}
}

void			ft_print_a_x(t_a_lst *a_lst, t_f_id *f_id)
{
	int			len_a;
	int			len_nb_dgt;
	int			len_w_min;

	if (a_lst && f_id)
	{
		len_a = ft_strlen(a_lst->a.s) + ((f_id->flags & F_PLUS) ? 1 : 0) + \
		((f_id->flags & F_HASH && a_lst->a.s && a_lst->a.s[0] != '0') ? 1 : 0);
		len_nb_dgt = (f_id->prec.period ? ft_abs(f_id->prec.nb_dgt) : 0) - \
			ft_strlen(a_lst->a.s) - (f_id->flags & F_HASH && \
				(a_lst->a.s && a_lst->a.s[0] != '0') ? 1 : 0);
		len_w_min = (f_id->prec.period ? f_id->w_min - \
			(ft_max(len_a, f_id->prec.nb_dgt)) : f_id->w_min - len_a);
		// if (f_id->prec.period && len_a < ft_abs(f_id->prec.nb_dgt))
		if (!(f_id->flags & F_MINUS))
		{
			ft_putsign(a_lst->a.s, f_id->flags, len_w_min);
			if (f_id->flags & F_HASH && a_lst->a.s && a_lst->a.s[0] != '0' && \
			(f_id->flags & F_ZERO && !f_id->prec.period))
				a_lst->a_tp == 'x' ? ft_putstr("0x") : ft_putstr("0X");
			ft_put_x_char((f_id->flags & F_ZERO && !f_id->prec.period) ? '0' : \
				' ', len_w_min);
			if (f_id->flags & F_HASH && a_lst->a.s && a_lst->a.s[0] != '0' && \
			!(f_id->flags & F_ZERO && !f_id->prec.period))
				a_lst->a_tp == 'x' ? ft_putstr("0x") : ft_putstr("0X");
			ft_put_x_char('0', len_nb_dgt);
			ft_putstr(a_lst->a.s);
		}
		if (f_id->flags & F_MINUS)
		{
			if (f_id->flags & F_HASH && a_lst->a.s && a_lst->a.s[0] != '0')
				a_lst->a_tp == 'x' ? ft_putstr("0x") : ft_putstr("0X");
			ft_putsign(a_lst->a.s, f_id->flags, len_w_min);
			ft_put_x_char('0', len_nb_dgt);
			ft_putstr(a_lst->a.s);
			ft_put_x_char(' ', len_w_min);
		}
		f_id->nb_p_c = len_a + ft_max(0, len_w_min) + ft_max(0, len_nb_dgt) + \
			((f_id->flags & F_HASH) && (a_lst->a.s && a_lst->a.s[0] != '0') ? 1 : 0);

		// printf("len_a = %i || len_w_min = %i || len_nb_dgt = %i || a_lst->a.s[0] = %c\n", len_a, len_w_min, len_nb_dgt, a_lst->a.s[0]);
	}
}
