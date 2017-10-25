/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_a_ll_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 14:05:06 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/24 14:36:41 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static void		ft_save_i1(t_a_lst *a_lst, va_list *ap, t_ull max)
{
	t_u_nbr		nbr;
	char		*str;

	str = NULL;
	if (max == UINT_MAX)
	{
		nbr.ui = (t_ui)va_arg(*ap, void*);
		if (a_lst->a_tp == 'O' || a_lst->a_tp == 'o')
			str = ft_ltoabase(nbr.ui, "01234567");
		else
			a_lst->a.ll = nbr.ui;
	}
	else if (max == ULONG_MAX)
	{
		nbr.ul = (t_ul)va_arg(*ap, void*);
		if (a_lst->a_tp == 'O' || a_lst->a_tp == 'o')
			str = ft_ltoabase(nbr.ul, "01234567");
		else
			a_lst->a.ll = nbr.ul;
	}
	if (str)
	{
		a_lst->a.s = ft_strdup(str);
		ft_strdel(&str);
	}
}

static void		ft_save_i2(t_a_lst *a_lst, va_list *ap, t_ull max)
{
	t_u_nbr		nbr;
	char		*str;

	str = NULL;
	if (max == USHRT_MAX)
	{
		nbr.us = (t_us)va_arg(*ap, void*);
		if (a_lst->a_tp == 'O' || a_lst->a_tp == 'o')
			str = ft_ltoabase(nbr.us, "01234567");
		else
			a_lst->a.ll = nbr.us;
	}
	else if (max == UCHAR_MAX)
	{
		nbr.uc = (t_uchar)va_arg(*ap, void*);
		if (a_lst->a_tp == 'O' || a_lst->a_tp == 'o')
			str = ft_ltoabase(nbr.uc, "01234567");
		else
			a_lst->a.ll = nbr.uc;
	}
	if (str)
	{
		a_lst->a.s = ft_strdup(str);
		ft_strdel(&str);
	}
}

void			ft_save_a_ll_unsigned(t_a_lst *a_lst, va_list *ap, t_ull max)
{
	if (max == UINT_MAX || max == ULONG_MAX)
		ft_save_i1(a_lst, ap, max);
	else if (max == USHRT_MAX || max == UCHAR_MAX)
		ft_save_i2(a_lst, ap, max);
}
