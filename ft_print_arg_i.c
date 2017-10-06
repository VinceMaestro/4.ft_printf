/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_i.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 16:04:19 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/29 16:52:41 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static void			ft_updt_p_info(t_p_inf *infos, t_a_lst *a_lst, \
	t_format_id *f_id)
{
	if (infos && a_lst && f_id)
	{
		infos->len_arg = ft_llintlen(a_lst->arg.ll);

		infos->pad_rt = ((f_id->flags & F_MINUS) || \
			(f_id->precision.width_max < 0) ? 1 : 0);

		infos->sign = ((f_id->flags & F_PLUS) && (a_lst->arg.ll > 0) ? '+' : 0);

		infos->first_c = (f_id->flags & F_HASH && \
			(ft_abs(f_id->precision.width_max) - infos->len_arg < 1) ? '0' : 0);

		infos->nbr_pad_c2 = ft_max(0, f_id->precision.width_max - \
			infos->len_arg); // nbr of digits to appear : '0'

		infos->nbr_pad_c1 = ft_max(0, f_id->width_min - (infos->sign ? 1 : 0) -
			(infos->first_c ? 1 : 0) - infos->nbr_pad_c2 - infos->len_arg);

		infos->nbr_pad_c2 = ft_max(0, infos->nbr_pad_c2 - \
			(infos->sign ? 1 : 0));

		infos->nbr_pad_c1 = (f_id->flags & F_SPACE) && \
			!(f_id->flags & F_PLUS) ? ft_max(infos->nbr_pad_c1, 1) \
				: infos->nbr_pad_c1; //field size min : ' '

		// ft_putnbr(infos->nbr_pad_c1);

		infos->pad_c1 = ' ';

		infos->pad_c2 = '0';

		// infos->pad_c2 = ((!(f_id->flags & F_MINUS) &&
		// 	!(f_id->precision.width_max) && (f_id->flags & F_ZERO || \
		// 		f_id->precision.width_max < f_id->width_min)) ? '0' : ' ');

		// infos->pad_c2 =

	}
	else
		ft_error("ft_print_arg_o: ft_init_p_inf: input error");
}


void	ft_print_arg_i(t_a_lst *a_lst, t_format_id *f_id)
{
	t_p_inf		*infos;

	if (a_lst->arg_type != 'L' && a_lst->arg_type != 'i')
		ft_error("ft_print_arg_i : Should not happend\n");

	infos = ft_init_p_inf();
	ft_updt_p_info(infos, a_lst, f_id);

	if (!infos->pad_rt)
	{
		ft_put_x_char(infos->pad_c1, infos->nbr_pad_c1);
		ft_put_x_char(infos->pad_c2, infos->nbr_pad_c2);
		infos->first_c ? write(1, &infos->first_c, 1) : 0;
		infos->sign ? write(1, &infos->sign, 1) : 0;
		ft_put_llnbr(a_lst->arg.ll);
	}
	else
	{
		ft_put_x_char(infos->pad_c2, infos->nbr_pad_c2);
		infos->first_c ? write(1, &infos->first_c, 1) : 0;
		infos->sign ? write(1, &infos->sign, 1) : 0;
		ft_put_llnbr(a_lst->arg.ll);
		if (f_id->precision.width_max >= 0)
			ft_put_x_char(infos->pad_c1, infos->nbr_pad_c1);
		else
			ft_put_x_char(infos->pad_c1, infos->nbr_pad_c1);
	}
	f_id->nb_print_char = infos->len_arg + infos->nbr_pad_c2 + (infos->first_c ? 1 : 0) + \
			(infos->sign ? 1 : 0) + infos->nbr_pad_c1; //+ infos->nbr_pad_c2;
}
