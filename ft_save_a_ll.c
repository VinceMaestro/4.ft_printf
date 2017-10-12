/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_a_ll.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:26:59 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/12 16:21:09 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void		ft_save_a_ll(t_a_lst *a_lst, t_f_id *f_id, va_list *ap)
{
	if (a_lst && f_id)
	{
		if (f_id->a_tp && (f_id->a_tp == 'd' || f_id->a_tp == 'D' \
			|| f_id->a_tp == 'i'))
		{
			// ft_putstr("-- SAVING signed i : ");
			a_lst->a.ll = va_arg(*ap, int);
			// ft_putnbr(a_lst->a.ll);
			// ft_putstr("\n");
			a_lst->a_tp = f_id->a_tp;
		}
		else
		{
			// ft_putstr("-- SAVING signed ll : ");
			a_lst->a.ll = va_arg(*ap, long long int);
			// ft_put_llnbr(a_lst->a.ll);
			// ft_putstr("\n");
			a_lst->a_tp = f_id->a_tp ? f_id->a_tp : 'L';
		}
	}
}
