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
	t_u_nbr		nbr;

	if (a_lst && f_id)
	{
		if (f_id->a_tp && (f_id->a_tp == 'c' || f_id->a_tp == 'C'))
		{
			nbr.uc = (t_uchar)va_arg(*ap, void*);
			a_lst->a.ll = nbr.i;
			a_lst->a_tp = f_id->a_tp;
		}
		else
		{
			a_lst->a.s = (char*)va_arg(*ap, void*);
			a_lst->a_tp = f_id->a_tp;
		}
	}
}
