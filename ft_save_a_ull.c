/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_a_ull.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:32:41 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/19 13:43:43 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void		ft_save_a_ull(t_a_lst *a_lst, t_f_id *f_id, va_list *ap)
{
	if (a_lst && f_id)
	{
		// ft_putstr("-- SAVING unsigned ll : ");
		a_lst->a.ull = (t_ul)va_arg(*ap, void*);
		// ft_putnbr(a_lst->a.ull);
		// ft_putstr("\n");
		a_lst->a_tp = (f_id->a_tp ? f_id->a_tp : 'U');
	}
}
