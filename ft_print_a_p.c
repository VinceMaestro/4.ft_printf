/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 14:46:34 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/12 14:50:46 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_a_p(t_a_lst *a_lst, t_f_id *f_id)
{
	if (a_lst && f_id && a_lst->a.s)
	{
		ft_putstr("0x");
		ft_putstr(a_lst->a.s);
		f_id->nb_p_c = ft_strlen(a_lst->a.s) + 2;
	}
	else
		ft_error("ft_print_a_p: Should'nt hapend");
}
