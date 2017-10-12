/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 16:04:19 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/12 17:22:30 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static void		ft_updt_p_info(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	if (infos && a_lst && f_id)
	{
		infos->len_a = ft_llintlen(a_lst->a.ll);

		infos->pad_rt = ((f_id->flags & F_MINUS) || \
			(f_id->prec.nb_dgt < 0) ? 1 : 0);

		infos->sign = ((f_id->flags & F_PLUS) && (a_lst->a.ll > 0) ? '+' : 0);

		infos->first_c = (f_id->flags & F_HASH && \
			(ft_abs(f_id->prec.nb_dgt) - infos->len_a < 1) ? '0' : 0);

		infos->nbr_pad_c2 = ft_max(0, f_id->prec.nb_dgt - \
			infos->len_a); // nbr of digits to appear : '0'

		infos->nbr_pad_c1 = ft_max(0, f_id->w_min - (infos->sign ? 1 : 0) -
			(infos->first_c ? 1 : 0) - infos->nbr_pad_c2 - infos->len_a);

		infos->nbr_pad_c2 = ft_max(0, infos->nbr_pad_c2 - \
			(infos->sign ? 1 : 0));

		infos->nbr_pad_c1 = (f_id->flags & F_SPACE) && \
			!(f_id->flags & F_PLUS) ? ft_max(infos->nbr_pad_c1, 1) \
				: infos->nbr_pad_c1; //field size min : ' '

		// ft_putnbr(infos->nbr_pad_c1);

		infos->pad_c1 = ' ';

		infos->pad_c2 = '0';

		// infos->pad_c2 = ((!(f_id->flags & F_MINUS) &&
		// 	!(f_id->prec.nb_dgt) && (f_id->flags & F_ZERO || \
		// 		f_id->prec.nb_dgt < f_id->w_min)) ? '0' : ' ');

		// infos->pad_c2 =

	}
	else
		ft_error("ft_print_a_o: ft_init_p_inf: input error");
}

void	ft_print_a_i(t_a_lst *a_lst, t_f_id *f_id)
{
	t_p_inf		*infos;

	infos = ft_init_p_inf();
	ft_updt_p_info(infos, a_lst, f_id);

	if (!infos->pad_rt)
	{
		ft_put_x_char(infos->pad_c1, infos->nbr_pad_c1);
		ft_put_x_char(infos->pad_c2, infos->nbr_pad_c2);
		infos->first_c ? write(1, &infos->first_c, 1) : 0;
		infos->sign ? write(1, &infos->sign, 1) : 0;
		ft_put_llnbr(a_lst->a.ll);
	}
	else
	{
		ft_put_x_char(infos->pad_c2, infos->nbr_pad_c2);
		infos->first_c ? write(1, &infos->first_c, 1) : 0;
		infos->sign ? write(1, &infos->sign, 1) : 0;
		ft_put_llnbr(a_lst->a.ll);
		if (f_id->prec.nb_dgt >= 0)
			ft_put_x_char(infos->pad_c1, infos->nbr_pad_c1);
		else
			ft_put_x_char(infos->pad_c1, infos->nbr_pad_c1);
	}
	f_id->nb_p_c = infos->len_a + infos->nbr_pad_c2 + (infos->first_c ? 1 : 0) + \
			(infos->sign ? 1 : 0) + infos->nbr_pad_c1; //+ infos->nbr_pad_c2;
}
