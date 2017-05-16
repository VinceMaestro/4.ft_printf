/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mk_all_a_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:51:10 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/16 21:33:22 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static void		ft_save_ll_a(t_a_lst *a_lst, va_list *ap)
{
	a_lst->arg.ll = va_arg(*ap, long long int);
	a_lst->arg_type = 'L';
	a_lst->next = ft_init_a_lst(a_lst);
}

static void		ft_save_s_a(t_a_lst *a_lst, va_list *ap)
{
	a_lst->arg.s = va_arg(*ap, char*);
	a_lst->arg_type = 's';
}

static void		ft_save_i_a(t_a_lst *a_lst, va_list *ap)
{
	a_lst->arg.ll = va_arg(*ap, long long int);
	a_lst->arg_type = 'i';
}
static void		ft_save_p_a(t_a_lst *a_lst, va_list *ap)
{
	a_lst->arg.p = va_arg(*ap, void*);
	a_lst->arg_type = 'p';
}

t_a_lst			*ft_mk_all_a_lst(t_format_id *f_id, va_list *ap)
{
	t_a_lst		*a_lst;

	a_lst = NULL;
	// Rajouter le first case
	while (f_id)
	{
		if (f_id->arg_type)
		{
			a_lst = ft_new_a_lst_elem(a_lst);
			if (f_id->precision.period == '*')
			{
				ft_save_ll_a(a_lst, ap);
				a_lst = ft_new_a_lst_elem(a_lst);
			}
			if (ft_strchr("sScC", f_id->arg_type))
				ft_save_s_a(a_lst, ap);
			else if (ft_strchr("dDioOuUxX", f_id->arg_type))
				ft_save_i_a(a_lst, ap);
			else if (f_id->arg_type == 'p')
				ft_save_p_a(a_lst, ap);
		}
		if (f_id->next)
			f_id = f_id->next;
	}
	return (a_lst);
}
