/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:03:04 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 13:03:31 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					ft_printf(char *str, ...)
{
	int				len;
	va_list			ap;
	t_f_id			*f_id;
	t_a_lst			*a_lst;

	f_id = ft_mk_all_f_id(str);
	va_start(ap, str);
	a_lst = ft_mk_all_a_lst(f_id, &ap);
	va_end(ap);
	ft_updt_all_prec(f_id, a_lst);
	len = ft_print_all(f_id, a_lst, str);
	// ft_free_unions
	return (len);
}
