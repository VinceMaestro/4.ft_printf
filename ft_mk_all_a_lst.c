/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mk_all_a_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:51:10 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 18:18:19 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_save_a(t_a_lst *a_lst, t_f_id *f_id, va_list *ap)
{
	if (ft_strchr("dDiuUoO", f_id->a_tp))
		ft_save_a_ll(a_lst, f_id, ap);
	else if (ft_strchr("pxX", f_id->a_tp))
		ft_save_a_p(a_lst, f_id, ap);
	else if (ft_strchr("sScC", f_id->a_tp))
		ft_save_a_s(a_lst, f_id, ap);
}

t_a_lst			*ft_mk_all_a_lst(t_f_id *f_id, va_list *ap)
{
	t_a_lst		*a_lst;
	int			stop;

	a_lst = NULL;
	stop = 0;
	while (f_id && !stop)
	{
		if (f_id->a_tp)
		{
			a_lst = ft_mk_new_a_lst(a_lst);
			if (f_id->prec.period && (f_id->prec.period == '*'))
			{
				ft_save_a_ll(a_lst, f_id, ap);
				a_lst = ft_mk_new_a_lst(a_lst);
			}
			ft_save_a(a_lst, f_id, ap);
		}
		((!f_id->next && stop++) ? f_id : (f_id = f_id->next));
	}
	return (a_lst ? a_lst->first : a_lst);
}
