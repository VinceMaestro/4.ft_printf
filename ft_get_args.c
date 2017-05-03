/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:51:10 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/03 17:51:54 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static t_list_arg		*ft_init_list_arg(t_list_arg *arg_list)
{
	if (arg_list)
	{
		(!(arg_list->next = (t_list_arg*)malloc(sizeof(t_list_arg))) ? \
			(ft_error("ft_get_args : malloc failed")) : (arg_list));
		arg_list->next->first = arg_list->first;
		arg_list->next->nbr = arg_list->nbr + 1;
		arg_list = arg_list->next;
	}
	else
	{
		(!(arg_list = (t_list_arg*)malloc(sizeof(t_list_arg))) ? \
			(ft_error("ft_get_args : malloc failed")) : (arg_list));
		arg_list->first = arg_list;
		arg_list->nbr = 1;
	}
	arg_list->arg_type = 0;
	arg_list->len = 0;
	arg_list->next = NULL;
	return (arg_list);
}

static void				ft_get_type(t_format_id *format_id, t_list_arg *arg_list, va_list *ap)
{
	if (format_id->precision.period == '*')
	{
		arg_list->arg.ll = va_arg(*ap, long long int);
		arg_list->arg_type = 'L';
		arg_list = ft_init_list_arg(arg_list);
	}
	// if (ptr_arg[format_id->arg_type])
	// 	va_arg(*ap, ptr_arg[format_id->arg_type]) = ptr_va_arg[format_id->arg_type](ap);
	if (ft_strchr("sScC", format_id->arg_type))
	{
		arg_list->arg.s = va_arg(*ap, char*);
		ft_putstr("Get arg: string back, it's : \n");
		ft_putstr(arg_list->arg.s);
	}
	else if (ft_strchr("dDioOuUxX", format_id->arg_type))
		arg_list->arg.ll = va_arg(*ap, long long int);
	else if (format_id->arg_type == 'p')
		arg_list->arg.p = va_arg(*ap, void*);
	else
		(ft_error("ft_get_type : arg_type error"));
}

t_list_arg				*ft_get_args(t_format_id *format_id, va_list *ap)
{
	t_list_arg	*arg_list;

	arg_list = NULL;
	if (format_id)
	{
		arg_list = ft_init_list_arg(arg_list);
		ft_get_type(format_id, arg_list, ap);
		while (format_id->next)
		{
			format_id = format_id->next;
			arg_list = ft_init_list_arg(arg_list);
			ft_get_type(format_id, arg_list, ap);
		}
	}
	else
		ft_error("\nWTF : ft_get_args\n");
	return (arg_list);
}
