/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_a_ll.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:26:59 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/24 16:27:42 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_ull	ft_get_max(char *str, char tp)
{
	t_ull		max;

	max = 0;
	if (ft_strchr("dDiI", tp))
	{
		max = INT_MAX;
		if ((str && str[0] == 'l') || tp == 'D' || tp == 'I')
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

	if (ft_strchr("dDiI", tp))
	{
		min = INT_MIN;
		if ((str && str[0] == 'l') || tp == 'D' || tp == 'I')
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

void			ft_save_a_ll(t_a_lst *a_lst, t_f_id *f_id, va_list *ap)
{
	t_ull		max;
	t_ll		min;

	if (a_lst && f_id)
	{
		a_lst->a_tp = f_id->lenght && f_id->lenght[0] == 'l' ? \
			ft_toupper(f_id->a_tp) : f_id->a_tp;
		max = ft_get_max(f_id->lenght, a_lst->a_tp);
		min = ft_get_min(f_id->lenght, a_lst->a_tp);
		if (min)
			ft_save_a_ll_signed(a_lst, ap, max);
		else
			ft_save_a_ll_unsigned(a_lst, ap, max);
	}
}
