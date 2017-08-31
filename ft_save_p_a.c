/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_p_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:31:54 by vpetit            #+#    #+#             */
/*   Updated: 2017/08/31 14:37:10 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void		ft_save_p_a(t_a_lst *a_lst, va_list *ap)
{
	unsigned long long	ptr;
	char				*str;

	ft_putstr("-- SAVING pointer : ");
	ptr = (unsigned long long)va_arg(*ap, void*);
	str = ft_itoabase(ptr, "0123456789abcdef");
	a_lst->arg.s = str;
	a_lst->arg_type = 'p';
	ft_putstr(a_lst->arg.s);
	ft_putstr("\n");
}
