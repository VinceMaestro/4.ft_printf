/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_a_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:31:35 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/19 13:43:09 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void		ft_save_a_s(t_a_lst *a_lst, t_f_id *f_id, va_list *ap)
{
	if (a_lst && f_id)
	{
		if (f_id->a_tp && (f_id->a_tp == 'c' || f_id->a_tp == 'C'))
		{
			// ft_putstr("-- SAVING char : ");
			a_lst->a.ll = (int)va_arg(*ap, void*);
			a_lst->a_tp = f_id->a_tp;
			// ft_putchar(a_lst->a.ll);
			// ft_putstr("\n");
		}
		else
		{
			// ft_putstr("-- SAVING string : ");
			a_lst->a.s = (char*)va_arg(*ap, void*);
			a_lst->a_tp = f_id->a_tp;
			// ft_putstr(a_lst->a.s);
			// ft_putstr("\n");
		}
	}
}
