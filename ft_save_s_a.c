/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_s_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:31:35 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/28 15:49:19 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void		ft_save_s_a(t_a_lst *a_lst, va_list *ap, char *str)
{
	if (str)
	{
		// ft_putstr("-- SAVING char : ");
		a_lst->arg.ll = va_arg(*ap, int);
		a_lst->arg_type = 'c';
		// ft_putchar(a_lst->arg.ll);
		// ft_putstr("\n");
	}
	else
	{
		// ft_putstr("-- SAVING string : ");
		a_lst->arg.s = va_arg(*ap, char*);
		a_lst->arg_type = 's';
		// ft_putstr(a_lst->arg.s);
		// ft_putstr("\n");
	}
}
