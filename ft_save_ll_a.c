/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_ll_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:26:59 by vpetit            #+#    #+#             */
/*   Updated: 2017/08/31 11:31:48 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void		ft_save_ll_a(t_a_lst *a_lst, va_list *ap, char *str)
{
	if (str)
	{
		ft_putstr("-- SAVING signed i : ");
		a_lst->arg.ll = va_arg(*ap, int);
		ft_putnbr(a_lst->arg.ll);
		ft_putstr("\n");
		a_lst->arg_type = 'i';
	}
	else
	{
		ft_putstr("-- SAVING signed ll : ");
		a_lst->arg.ll = va_arg(*ap, long long int);
		ft_put_llnbr(a_lst->arg.ll);
		ft_putstr("\n");
		a_lst->arg_type = 'L';
	}
}
