/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_a_ll.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:26:59 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 13:13:24 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static t_ull	ft_get_max(char *str, char tp)
{
	t_ull		max;

	max = 0;
	if (ft_strchr("dDi", tp))
	{
		max = INT_MAX;
		if ((str && str[0] == 'l') || tp == 'D')
			max = str && str[1] && str[1] == 'l' ? LLONG_MAX : LONG_MAX;
		else if (str && str[0] == 'h')
			max = str && str[1] && (str[1] == 'h') ? CHAR_MAX : SHRT_MAX;
		else if (str && (str[0] == 'j' || str[0] == 'z'))
			max = LLONG_MAX;
	}
	else
	{
		max = UINT_MAX;
		if ((str && str[0] == 'l') || tp == 'O' || tp == 'U')
			max = str && str[1] && str[1] == 'l' ? ULLONG_MAX : ULONG_MAX;
		else if (str && str[0] == 'h')
			max = str && str[1] && (str[1] == 'h') ? UCHAR_MAX : USHRT_MAX;
		else if (str && (str[0] == 'j' || str[0] == 'z'))
			max = ULLONG_MAX;
	}
	return (max);
}

static t_ll		ft_get_min(char *str, char tp)
{
	t_ll		min;

	if (ft_strchr("dDi", tp))
	{
		min = INT_MIN;
		if ((str && str[0] == 'l') || tp == 'D')
			min = str && str[1] && str[1] == 'l' ? LLONG_MIN : LONG_MIN;
		else if (str && str[0] == 'h')
			min = str && str[1] && (str[1] == 'h') ? CHAR_MIN : SHRT_MIN;
		else if (str && (str[0] == 'j' || str[0] == 'z'))
			min = LLONG_MIN;
	}
	else
		min = 0;
	return (min);
}

static void		ft_save_signed(t_a_lst *a_lst, va_list *ap, t_ull max)
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
	else if (max == SHRT_MAX)
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

static void		ft_save_unsigned(t_a_lst *a_lst, va_list *ap, t_ull max)
{
	t_u_nbr		nbr;

	if (max == UINT_MAX)
	{
		nbr.ui = (t_ui)va_arg(*ap, void*);
		a_lst->a.ll = a_lst->a_tp == 'o' ? ft_l_to_oct(nbr.ui) : nbr.ui;
	}
	else if (max == ULONG_MAX)
	{
		nbr.ul = (t_ul)va_arg(*ap, void*);
		a_lst->a.ll = a_lst->a_tp == 'O' ? ft_l_to_oct(nbr.ul) : nbr.ul;
	}
	else if (max == USHRT_MAX)
	{
		nbr.us = (t_us)va_arg(*ap, void*);
		a_lst->a.ll = nbr.us;
	}
	else if (max == UCHAR_MAX)
	{
		nbr.uc = (t_uchar)va_arg(*ap, void*);
		a_lst->a.ll = nbr.uc;
	}
}

void			ft_save_a_ll(t_a_lst *a_lst, t_f_id *f_id, va_list *ap)
{
	t_ull		max;
	t_ll		min;

	if (a_lst && f_id)
	{
		a_lst->a_tp = f_id->a_tp;
		max = ft_get_max(f_id->lenght, a_lst->a_tp);
		min = ft_get_min(f_id->lenght, a_lst->a_tp);
		if (min)
			ft_save_signed(a_lst, ap, max);
		else
			ft_save_unsigned(a_lst, ap, max);
	}
}
