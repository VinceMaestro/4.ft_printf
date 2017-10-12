/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 14:46:13 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/12 17:22:26 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static void			ft_updt_p_info(t_p_inf *infos, t_a_lst *a_lst, \
// 	t_f_id *f_id)
// {
//
// }

void	ft_print_a_c(t_a_lst *a_lst, t_f_id *f_id)
{
	// t_p_inf		*infos;
	//
	// infos = ft_init_p_inf();
	// ft_updt_p_info(infos, a_lst, f_id);

	if (a_lst && f_id)
	{
		if (f_id->prec.period)
			ft_put_x_char(' ', ft_max(0, f_id->prec.nb_dgt - 1));
		ft_putchar(a_lst->a.ll);
		if (f_id->prec.period)
			ft_put_x_char(' ', -ft_min(0, f_id->prec.nb_dgt + 1));
		f_id->nb_p_c = 1;
	}
	else
		ft_error("ft_print_a_c: Should'nt hapend");
}
