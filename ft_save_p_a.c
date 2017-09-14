/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_p_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:31:54 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/14 17:42:23 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void		ft_save_p_a(t_a_lst *a_lst, va_list *ap)
{
	size_t		ptr;
	char		*str;

	ptr = (size_t)va_arg(*ap, void*);
	ft_putstr("-- SAVING pointer : ");
	str = ft_itoabase(ptr, "0123456789abcdef");
	ft_putstr("-- SAVING pointer : ");
	a_lst->arg.s = str;
	a_lst->arg_type = 'p';
	ft_putstr(a_lst->arg.s);
	ft_putstr("\n");
}
