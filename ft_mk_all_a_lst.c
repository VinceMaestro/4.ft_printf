/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mk_all_a_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:51:10 by vpetit            #+#    #+#             */
/*   Updated: 2017/08/31 12:47:18 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_save_arg(t_format_id *f_id, t_a_lst *a_lst, va_list *ap)
{
	if (ft_strchr("dDioOxX", f_id->arg_type))
		ft_save_ll_a(a_lst, ap, ft_strchr("dDi", f_id->arg_type));
	else if (f_id->arg_type == 'p')
		ft_save_p_a(a_lst, ap);
	else if (ft_strchr("sScC", f_id->arg_type))
		ft_save_s_a(a_lst, ap, ft_strchr("cC", f_id->arg_type));
	else if (ft_strchr("uU", f_id->arg_type))
		ft_save_ull_a(a_lst, ap);
}

t_a_lst			*ft_mk_all_a_lst(t_format_id *f_id, va_list *ap)
{
	t_a_lst		*a_lst;
	int			stop;

	a_lst = NULL;
	stop = 0;
	while (f_id && !stop)
	{
		if (f_id->arg_type)
		{
			a_lst = ft_new_a_lst_elem(a_lst);
			if (f_id->precision.period == '*')
			{
				ft_save_ll_a(a_lst, ap, NULL);
				a_lst = ft_new_a_lst_elem(a_lst);
			}
			ft_save_arg(f_id, a_lst, ap);
		}
		((!f_id->next && stop++) ? f_id : (f_id = f_id->next));
	}
	return (a_lst->first);
}