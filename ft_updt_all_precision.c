/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_updt_all_precision.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 20:16:36 by vpetit            #+#    #+#             */
/*   Updated: 2017/08/31 10:58:15 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_updt_all_precision(t_format_id *f_id, t_a_lst *a_lst)
{
	while (f_id && a_lst)
	{
		if (f_id->precision.period && f_id->precision.period == '*')
		{
			f_id->precision.width_max = a_lst->arg.ll;
			a_lst = a_lst->next;
		}
		a_lst ? a_lst = a_lst->next : NULL;
		f_id = f_id->next;
	}
}