/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 15:14:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/24 14:46:59 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static		void (*(g_ft_ptr_fct[]))(t_a_lst *, t_f_id *) =
{
	['s'] = ft_print_a_s,
	['S'] = ft_print_a_s,
	['p'] = ft_print_a_p,
	['d'] = ft_print_a_i,
	['D'] = ft_print_a_i,
	['i'] = ft_print_a_i,
	['o'] = ft_print_a_o,
	['O'] = ft_print_a_o,
	['u'] = ft_print_a_u,
	['U'] = ft_print_a_u,
	['x'] = ft_print_a_x,
	['X'] = ft_print_a_x,
	['c'] = ft_print_a_c,
	['C'] = ft_print_a_c
};

t_a_lst		*ft_print_arg(t_a_lst *a_lst, t_f_id *f_id, char *str)
{
	if (f_id)
	{
		if (!f_id->a_tp)
			ft_print_a_null(f_id, str);
		else if (a_lst)
		{
			g_ft_ptr_fct[(int)f_id->a_tp](a_lst, f_id);
			a_lst = a_lst->next;
		}
	}
	return (a_lst);
}
