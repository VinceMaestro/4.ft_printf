/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_a_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:31:54 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 18:43:00 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static t_ull		ft_get_max(char *str, char tp)
{
	t_ull		max;

	max = UINT_MAX;
	if ((str && str[0] == 'l') || tp == 'p')
		max = str && str[1] && str[1] == 'l' ? ULLONG_MAX : ULONG_MAX;
	else if (str && str[0] == 'h')
		max = str[1] && str[1] == 'h' ? UCHAR_MAX : USHRT_MAX;
	else if (str && (str[0] == 'j' || str[0] == 'z'))
		max = ULLONG_MAX;

	return (max);
}

static void			ft_save_unsigned(t_a_lst *a_lst, va_list *ap, t_ull max)
{
	char		*tmp_str;
	t_u_nbr		nbr;

	tmp_str = NULL;
	if (max == UINT_MAX)
	{
		nbr.ui = (int)va_arg(*ap, void*);
		tmp_str = ft_itoabase(nbr.ui, "0123456789abcdef");
	}
	else if (max == ULONG_MAX)
	{
		nbr.ul = (t_l)va_arg(*ap, void*);
		tmp_str = ft_ltoabase(nbr.ul, "0123456789abcdef");
	}
	else if (max == USHRT_MAX)
	{
		nbr.us = (t_s)va_arg(*ap, void*);
		tmp_str = ft_stoabase(nbr.us, "0123456789abcdef");
	}
	else if (max == UCHAR_MAX)
	{
		nbr.uc = (t_s)va_arg(*ap, void*);
		tmp_str = ft_stoabase(nbr.uc, "0123456789abcdef");
	}
	if (tmp_str)
	{
		a_lst->a_tp == 'X' ? tmp_str = ft_strtoupper(tmp_str) : tmp_str;
		a_lst->a.s = ft_strdup(tmp_str);
		ft_strdel(&tmp_str);
	}
}



void				ft_save_a_p(t_a_lst *a_lst, t_f_id *f_id, va_list *ap)
{
	t_ul			max;

	if (a_lst && f_id)
	{
		a_lst->a_tp = f_id->a_tp;
		max = ft_get_max(f_id->lenght, a_lst->a_tp);
		ft_save_unsigned(a_lst, ap, max);
	}
}
