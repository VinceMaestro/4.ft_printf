/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mk_all_a_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:51:10 by vpetit            #+#    #+#             */
/*   Updated: 2017/08/30 15:09:50 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static void		ft_save_p_a(t_a_lst *a_lst, va_list *ap)
{
	ft_putstr("-- SAVING pointer : ");
	a_lst->arg.p = va_arg(*ap, void*);
	ft_putstr(a_lst->arg.p);
	ft_putstr("\n");
	a_lst->arg_type = 'p';
}

static void		ft_save_s_a(t_a_lst *a_lst, va_list *ap)
{
	ft_putstr("-- SAVING string : ");
	a_lst->arg.s = va_arg(*ap, char*);
	a_lst->arg_type = 's';
}

static void		ft_save_i_a(t_a_lst *a_lst, va_list *ap)
{
	ft_putstr("-- SAVING signed i : ");
	a_lst->arg.ll = va_arg(*ap, int);
	ft_putnbr(a_lst->arg.ll);
	ft_putstr("\n");
	a_lst->arg_type = 'i';
}

static void		ft_save_ll_a(t_a_lst *a_lst, va_list *ap)
{
	ft_putstr("-- SAVING signed ll : ");
	a_lst->arg.ll = va_arg(*ap, long long int);
	ft_put_llnbr(a_lst->arg.ll);
	ft_putstr("\n");
	a_lst->arg_type = 'L';
}

static void		ft_save_ull_a(t_a_lst *a_lst, va_list *ap)
{
	ft_putstr("-- SAVING unsigned ll : ");
	a_lst->arg.ll = va_arg(*ap, unsigned long long);
	ft_putnbr(a_lst->arg.ull);
	ft_putstr("\n");
	a_lst->arg_type = 'U';
}

t_a_lst			*ft_mk_all_a_lst(t_format_id *f_id, va_list *ap)
{
	t_a_lst		*a_lst;
	int			stop;

	a_lst = NULL;
	stop = 0;
	// Rajouter le first case
	while (f_id && !stop)
	{
		if (f_id->arg_type)
		{
			a_lst = ft_new_a_lst_elem(a_lst);
			if (f_id->precision.period == '*')
			{
				ft_save_ll_a(a_lst, ap);
				a_lst = ft_new_a_lst_elem(a_lst);
			}
			if (ft_strchr("dDi", f_id->arg_type))
				ft_save_i_a(a_lst, ap);
			else if (f_id->arg_type == 'p')
				ft_save_p_a(a_lst, ap);
			else if (ft_strchr("sScC", f_id->arg_type))
				ft_save_s_a(a_lst, ap);
			else if (ft_strchr("uU", f_id->arg_type))
				ft_save_ull_a(a_lst, ap);
			else if (ft_strchr("oOxX", f_id->arg_type))
				ft_save_ll_a(a_lst, ap);

		}
		((!f_id->next && stop++) ? f_id : (f_id = f_id->next));
	}
	return (a_lst->first);
}
