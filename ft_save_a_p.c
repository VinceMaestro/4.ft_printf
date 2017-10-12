/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_a_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:31:54 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/12 16:47:41 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

#include <stdio.h>

static t_ull		ft_get_max(char *str)
{
	t_ull		max;

	max = (t_ull)INT_MAX;
	if (str && *str)
	{
		if (str[0] == 'l')
			max = (t_ull)ULONG_MAX;
		else if (str[0] == 'h')
			max = str[1] && (str[1] == 'h') ? (t_ull)UCHAR_MAX : \
				(t_ull)USHRT_MAX;
	}
	return (max);
}

static t_ll			ft_get_min(char *str)
{
	t_ll		min;

	min = (t_ll)INT_MIN;
	if (str && *str)
	{
		if (str[0] == 'l' || str[0] == 'h')
			min = 0;
	}
	return (min);
}

static char			*ft_get_str(t_a_lst *a_lst, t_f_id *f_id, va_list *ap)
{
	char		*tmp_str;
	// size_t		ptr;
	t_ul		max;
	t_ui		ptr;
	t_ll		min;

	tmp_str = NULL;
	max = ft_get_max(f_id->lenght);
	min = ft_get_min(f_id->lenght);
	ptr = (t_ui)va_arg(*ap, void*);

	if (min && max == INT_MAX)
		tmp_str = ft_itoabase((t_l)ptr, "0123456789abcdef");
	else if (min || max == ULONG_MAX)
		tmp_str = ft_ltoabase((t_l)ptr, "0123456789abcdef");

	// else if (max == UCHAR_MAX)
	// 	tmp_str = a_lst->a_tp == 'X' ? ft_uctoabase((t_uchar)ptr, \
	// 	"0123456789ABCDEF") : ft_uctoabase((t_uchar)ptr, "0123456789abcdef");
	// else if (max == USHRT_MAX)
	// 	tmp_str = a_lst->a_tp == 'X' ? ft_ustoabase((t_us)ptr, \
	// 	"0123456789ABCDEF") : ft_ustoabase((t_us)ptr, "0123456789abcdef");
	return ((a_lst->a_tp == 'X') ? tmp_str = ft_strtoupper(tmp_str) : tmp_str);
}

void				ft_save_a_p(t_a_lst *a_lst, t_f_id *f_id, va_list *ap)
{
	char				*str;

	if (a_lst && f_id)
	{
		// ft_putstr("-- SAVING pointer : ");
		a_lst->a_tp = f_id->a_tp;
		str = ft_get_str(a_lst, f_id, ap);
		a_lst->a.s = str;
		// ft_putstr(a_lst->a.s);
		// ft_putstr("\n");
	}
}
