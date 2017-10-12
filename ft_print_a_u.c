/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 14:46:44 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/12 17:08:43 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_a_u(t_a_lst *a_lst, t_f_id *f_id)
{
	if (a_lst && f_id)
	{
		ft_put_ullnbr(a_lst->a.ull);
		f_id->nb_p_c = ft_ullintlen(a_lst->a.ull);
	}
	else
		ft_error("ft_print_a_u : Should not happend\n");
}
