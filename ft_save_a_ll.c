/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_a_ll.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:26:59 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/19 15:29:37 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static t_ull		ft_get_max(char *str, char tp)
{
	t_ull		max;

	max = (t_ull)INT_MAX;
	if (str && *str)
	{
		if (str[0] == 'l' || tp == 'D')
		max = str[1] && str[1] == 'l' ? (t_ull)LLONG_MAX : (t_ull)LONG_MAX;
		else if (str[0] == 'z')
			max = (t_ull)ULONG_MAX;
		else if (str[0] == 'h')
			max = str[1] && (str[1] == 'h') ? (t_ull)CHAR_MAX : \
				(t_ull)SHRT_MAX;
		else if (str[0] == 'j')
			max = INT_MAX;
	}
	return (max);
}

static t_ll			ft_get_min(char *str, char tp)
{
	t_ll		min;

	min = (t_ll)INT_MIN;
	if (str && *str)
	{
		if (str[0] == 'l' || tp == 'D')
			min = str[1] && str[1] == 'l' ? (t_ll)LLONG_MIN : (t_ll)LONG_MIN;
		else if (str[0] == 'z')
			min = 0;
		else if (str[0] == 'h')
			min = str[1] && (str[1] == 'h') ? (t_ll)CHAR_MIN : \
				(t_ll)SHRT_MIN;
		else if (str[0] == 'j')
			min = INT_MIN;
	}
	return (min);
}


void		ft_save_a_ll(t_a_lst *a_lst, t_f_id *f_id, va_list *ap)
{
	t_ull		max;
	t_ll		min;
	t_u_nbr		nbr;

	if (a_lst && f_id)
	{
		a_lst->a_tp = f_id->a_tp;

		max = ft_get_max(f_id->lenght, a_lst->a_tp);
		min = ft_get_min(f_id->lenght, a_lst->a_tp);

		if (max == INT_MAX)
		{
			nbr.i = (int)va_arg(*ap, void*);
			a_lst->a.ll = nbr.i;
		}
		else if (max == LONG_MAX || max == ULONG_MAX)
		{
			nbr.l = (t_l)va_arg(*ap, void*);
			a_lst->a.ll = nbr.l;
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



		// if (f_id->a_tp && (f_id->a_tp == 'd' || f_id->a_tp == 'i'))
		// {
		// 	// ft_putstr("-- SAVING signed i : ");
		// 	a_lst->a.ll = (int)va_arg(*ap, void*);
		// 	// ft_putnbr(a_lst->a.ll);
		// 	// ft_putstr("\n");
		// 	a_lst->a_tp = f_id->a_tp;
		// }
		// else
		// {
		// 	// ft_putstr("-- SAVING signed ll : ");
		// 	a_lst->a.ll = (t_l)va_arg(*ap, void*);
		// 	// ft_put_llnbr(a_lst->a.ll);
		// 	// ft_putstr("\n");
		// 	a_lst->a_tp = f_id->a_tp ? f_id->a_tp : 'L';
		// }
	}
}
