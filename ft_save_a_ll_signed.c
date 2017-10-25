/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_a_ll_signed.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 14:08:04 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/24 14:30:49 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static void		ft_save_i1(t_a_lst *a_lst, va_list *ap, t_ull max)
{
	t_u_nbr		nbr;

	if (max == INT_MAX)
	{
		nbr.i = (int)va_arg(*ap, void*);
		a_lst->a.ll = nbr.i;
	}
	else if (max == LONG_MAX)
	{
		nbr.l = (t_l)va_arg(*ap, void*);
		a_lst->a.ll = nbr.l;
	}
	else if (max == LLONG_MAX)
	{
		nbr.ll = (t_ll)va_arg(*ap, void*);
		a_lst->a.ll = nbr.ll;
	}
}

static void		ft_save_i2(t_a_lst *a_lst, va_list *ap, t_ull max)
{
	t_u_nbr		nbr;

	if (max == SHRT_MAX)
	{
		nbr.s = (t_s)va_arg(*ap, void*);
		a_lst->a.ll = nbr.s;
	}
	else if (max == CHAR_MAX)
	{
		nbr.c = (char)va_arg(*ap, void*);
		a_lst->a.ll = nbr.c;
	}
}

void			ft_save_a_ll_signed(t_a_lst *a_lst, va_list *ap, t_ull max)
{
	if (max == INT_MAX || max == LONG_MAX || max == LLONG_MAX)
		ft_save_i1(a_lst, ap, max);
	else if (max == SHRT_MAX || max == CHAR_MAX)
		ft_save_i2(a_lst, ap, max);
}
