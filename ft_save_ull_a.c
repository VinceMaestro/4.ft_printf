/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_ull_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:32:41 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/10 13:25:06 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void		ft_save_ull_a(t_a_lst *a_lst, t_format_id *f_id, va_list *ap)
{
	if (a_lst && f_id)
	{
		// ft_putstr("-- SAVING unsigned ll : ");
		a_lst->arg.ull = va_arg(*ap, unsigned long long);
		// ft_putnbr(a_lst->arg.ull);
		// ft_putstr("\n");
		a_lst->arg_type = (f_id->arg_type ? f_id->arg_type : 'U');
	}
}
