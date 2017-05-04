/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_all_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:51:10 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/04 15:57:26 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static t_list_arg		*ft_init_list_arg(t_list_arg *arg_list)
{
	if (arg_list)
	{
		(!(arg_list->next = (t_list_arg*)malloc(sizeof(t_list_arg))) ? \
			(ft_error("ft_get_all_args : malloc failed")) : (arg_list));
		arg_list->next->first = arg_list->first;
		arg_list->next->nbr = arg_list->nbr + 1;
		arg_list = arg_list->next;
	}
	else
	{
		(!(arg_list = (t_list_arg*)malloc(sizeof(t_list_arg))) ? \
			(ft_error("ft_get_all_args : malloc failed")) : (arg_list));
		arg_list->first = arg_list;
		arg_list->nbr = 1;
	}
	arg_list->arg_type = 0;
	arg_list->len = 0;
	arg_list->next = NULL;
	return (arg_list);
}

static t_list_arg	ft_get_arg(t_list_arg *arg_list, t_format_id *format_id, char *str)
{
	va_list			ap;

	if ()
	{
		while (arg_list->next && arg_list->nbr != format_id->parameter)
			arg_list = arg_list->next;
		if (arg_list->nbr == format_id->parameter)
		{
			((arg_list->arg_type && arg_list->arg_type != format_id->arg_type) \
				? ft_error("Input parameter conflict") : 0);
			va_start(ap, str);

			va_end(ap);
			return (arg_list)
		}
	}
	return (NULL);
}

static void			ft_get_type(t_format_id *format_id, t_list_arg *arg_list, char *str)
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
		ft_get_arg(arg_list, format_id, str);
		arg_list->arg.s = va_arg(*ap, char*);
		ft_putstr("String : \n");
		ft_putstr(arg_list->arg.s);
		ft_error("Done!");
	}
	else if (ft_strchr("dDioOuUxX", format_id->arg_type))
		arg_list->arg.ll = va_arg(*ap, long long int);
	else if (format_id->arg_type == 'p')
		arg_list->arg.p = va_arg(*ap, void*);
	else
		(ft_error("ft_get_type : arg_type error"));
}

t_list_arg			*ft_get_all_args(t_format_id *format_id, char *str)
{
	t_list_arg	*arg_list;

	arg_list = NULL;
	if (format_id)
	{
		if (format_id->arg_type)
		{
			arg_list = ft_init_list_arg(arg_list);
			ft_get_type(format_id, arg_list, str);
		}
		while (format_id->next)
		{
			format_id = format_id->next;
			if (format_id->arg_type)
			{
				arg_list->next = ft_init_list_arg(arg_list);
				arg_list = arg_list->next;
				ft_get_type(format_id, arg_list, str);
			}
		}
	}
	else
		ft_error("\nWTF : ft_get_all_args\n");
	return (arg_list);
}
