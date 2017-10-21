/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_updt_all_prec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 20:16:36 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 18:17:37 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_updt_all_prec(t_a_lst *a_lst, t_f_id *f_id)
{
	while (f_id && a_lst)
	{
		if (f_id->prec.period && f_id->prec.period == '*')
		{
			f_id->prec.nb_dgt = a_lst->a.ll;
			a_lst = a_lst->next;
		}
		a_lst ? a_lst = a_lst->next : NULL;
		f_id = f_id->next;
	}
}
