/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_all_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:51:10 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/15 19:33:49 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static t_a_lst	*ft_init_a_lst(t_a_lst *a_lst)
{
	if (a_lst)
	{
		(!(a_lst->next = (t_a_lst*)malloc(sizeof(t_a_lst))) ? \
			(ft_error("ft_get_all_args : malloc failed")) : (a_lst));
		a_lst->next->first = a_lst->first;
		a_lst->next->nbr = a_lst->nbr + 1;
		a_lst = a_lst->next;
	}
	else
	{
		(!(a_lst = (t_a_lst*)malloc(sizeof(t_a_lst))) ? \
			(ft_error("ft_get_all_args : malloc failed")) : (a_lst));
		a_lst->first = a_lst;
		a_lst->nbr = 1;
	}
	a_lst->arg_type = 0;
	a_lst->len = 0;
	a_lst->next = NULL;
	return (a_lst);
}

static t_a_lst	*ft_get_arg(t_a_lst *a_lst, t_format_id *f_id)
{
	if (f_id && a_lst)
	{
		while (a_lst->next && a_lst->nbr != f_id->parameter)
			a_lst = a_lst->next;
		if (a_lst->nbr == f_id->parameter) ///////HEEEEEERRRREEEE
		{
			((a_lst->arg_type && a_lst->arg_type != f_id->arg_type) \
				? ft_error("Input parameter conflict") : 0);
			return (a_lst);
		}
	}
	return (NULL);
}

static void			ft_get_type(t_format_id *f_id, t_a_lst *a_lst, va_list *ap)
{
	if (f_id->precision.period == '*')
	{
		a_lst->arg.ll = va_arg(*ap, long long int);
		a_lst->arg_type = 'L';
		a_lst = ft_init_a_lst(a_lst);
	}
	// if (ptr_arg[f_id->arg_type])
	// 	va_arg(*ap, ptr_arg[f_id->arg_type]) = ptr_va_arg[f_id->arg_type](ap);
	if (ft_strchr("sScC", f_id->arg_type))
	{
		ft_get_arg(a_lst, f_id);
		a_lst->arg.s = va_arg(*ap, char*);
		ft_putstr("String : \n");
		ft_putstr(a_lst->arg.s);
	}
	else if (ft_strchr("dDioOuUxX", f_id->arg_type))
		a_lst->arg.ll = va_arg(*ap, long long int);
	else if (f_id->arg_type == 'p')
		a_lst->arg.p = va_arg(*ap, void*);
	else
		(ft_error("ft_get_type : arg_type error"));
}

t_a_lst			*ft_get_all_args(t_format_id *f_id, va_list *ap)
{
	t_a_lst	*a_lst;

	a_lst = NULL;
	if (f_id)
	{
		if (f_id->arg_type)
		{
			a_lst = ft_init_a_lst(a_lst);
			ft_get_type(f_id, a_lst, ap);
		}
		while (f_id->next)
		{
			f_id = f_id->next;
			if (f_id->arg_type)
			{
				a_lst->next = ft_init_a_lst(a_lst);
				a_lst = a_lst->next;
				ft_get_type(f_id, a_lst, ap);
			}
		}
	}
	else
		ft_error("\nWTF : ft_get_all_args\n");
	return (a_lst);
}
