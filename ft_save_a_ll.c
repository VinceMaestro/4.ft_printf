/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_a_ll.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:26:59 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/19 18:02:23 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

#include <stdio.h>

static t_ull		ft_get_max(char *str, char tp)
{
	t_ull		max;

	max = INT_MAX;
	if (str && *str)
	{
		if (str[0] == 'l' || tp == 'D')
		max = str[1] && str[1] == 'l' ? LLONG_MAX : LONG_MAX;
		else if (str[0] == 'z')
			max = ULONG_MAX;
		else if (str[0] == 'h')
			max = str[1] && (str[1] == 'h') ? CHAR_MAX : \
				SHRT_MAX;
		else if (str[0] == 'j')
			max = LLONG_MAX;
	}
	return (max);
}

static t_ll			ft_get_min(char *str, char tp)
{
	t_ll		min;

	min = INT_MIN;
	if (str && *str)
	{
		if (str[0] == 'l' || tp == 'D')
			min = str[1] && str[1] == 'l' ? LLONG_MIN : LONG_MIN;
		else if (str[0] == 'z')
			min = 0;
		else if (str[0] == 'h')
			min = str[1] && (str[1] == 'h') ? CHAR_MIN : \
				SHRT_MIN;
		else if (str[0] == 'j')
			min = LLONG_MIN;
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

		if ((int)max == INT_MAX)
		{
			// printf("Saving int\n");
			nbr.i = (int)va_arg(*ap, void*);
			a_lst->a.ll = nbr.i;
		}
		else if ((t_l)max == LONG_MAX || (t_ul)max == ULONG_MAX)
		{
			// printf("Saving long\n");
			nbr.l = (t_l)va_arg(*ap, void*);
			a_lst->a.ll = nbr.l;
		}
		else if ((t_ll)max == LLONG_MAX)
		{
			// printf("Saving lomg long\n");
			nbr.ll = (t_ll)va_arg(*ap, void*);
			a_lst->a.ll = nbr.ll;
		}
		else if ((short)max == SHRT_MAX)
		{
			// printf("Saving short\n");
			nbr.s = (t_s)va_arg(*ap, void*);
			a_lst->a.ll = nbr.s;
		}
		else if ((char)max == CHAR_MAX)
		{
			// printf("Saving char\n");
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