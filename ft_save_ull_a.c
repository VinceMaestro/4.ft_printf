/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_ull_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:32:41 by vpetit            #+#    #+#             */
/*   Updated: 2017/08/31 14:14:41 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void		ft_save_ull_a(t_a_lst *a_lst, va_list *ap)
{
	ft_putstr("-- SAVING unsigned ll : ");
	a_lst->arg.ull = va_arg(*ap, unsigned long long);
	ft_putnbr(a_lst->arg.ull);
	ft_putstr("\n");
	a_lst->arg_type = 'U';
}
