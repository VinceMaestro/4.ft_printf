/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_o.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 15:08:39 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/12 17:22:34 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static long long	get_value(long long nbr, long long cpt, long long maxoctpow)
{
	long long	ret;

	ret = 0;
	while (nbr)
	{
		while (cpt && cpt * ft_llpower(8, maxoctpow) > nbr)
			cpt--;
		ret += cpt * ft_llpower(10, maxoctpow);
		nbr -= cpt * ft_llpower(8, maxoctpow);
		maxoctpow--;
		cpt = 7;
	}
	return (ret);
}

static long long	ft_int_to_oct(long long nbr)
{
	long long	maxoctpow;
	long long	ret;
	long long	cpt;

	maxoctpow = 10;
	cpt = 4;
	if (!nbr)
		return (0);
	while (cpt * ft_llpower(8, maxoctpow) > nbr && cpt--)
	{
		if (cpt < 1)
		{
			cpt = 7;
			maxoctpow--;
		}
	}
	ret = get_value(nbr, cpt, maxoctpow);
	return (ret);
}

static void			ft_updt_p_info(t_p_inf *infos, long long oct, \
	t_a_lst *a_lst, t_f_id *f_id)
{
	if (infos && a_lst && f_id)
	{
		infos->len_a = ft_llintlen(oct);

		infos->nbr_pad_w_min = f_id->w_min - \
			ft_max(ft_abs(f_id->prec.nb_dgt), infos->len_a);

		infos->nbr_pad_dgt = ft_abs(f_id->prec.nb_dgt) - \
			infos->len_a;

		infos->pad_rt = f_id->prec.nb_dgt < -1 ? 1 : 0;

		infos->pad_dgt = f_id->prec.nb_dgt >= 0 ? '0' : ' ';

		infos->first_c = (f_id->flags & F_HASH && \
			(ft_abs(f_id->prec.nb_dgt) - infos->len_a < 1) ? "0" : 0);

		infos->sign = (f_id->flags & F_PLUS && oct > 0 ? '+' : 0);
	}
	else
		ft_error("ft_print_a_o: ft_init_p_inf: input error");
}

void				ft_print_a_o(t_a_lst *a_lst, t_f_id *f_id)
{
	long long	oct;
	t_p_inf		*infos;

	oct = ft_int_to_oct(a_lst->a.ll);
	infos = ft_init_p_inf();
	ft_updt_p_info(infos, oct, a_lst, f_id);
	infos->sign ? write(1, &infos->sign, 1) : 0;
	if (!infos->pad_rt)
	{
		ft_put_x_char(infos->pad_dgt, infos->nbr_pad_w_min);
		ft_put_x_char('0', infos->nbr_pad_dgt);
		*infos->first_c ? write(1, infos->first_c, 1) : 0;
		ft_put_llnbr(oct);
	}
	else
	{
		*infos->first_c ? write(1, infos->first_c, 1) : 0;
		ft_put_llnbr(oct);
		ft_put_x_char(' ', infos->nbr_pad_dgt);
		ft_put_x_char(infos->pad_dgt, infos->nbr_pad_w_min);
	}
	f_id->nb_p_c = infos->len_a + infos->nbr_pad_w_min + \
		infos->nbr_pad_dgt + (*infos->first_c ? 1 : 0) + \
			(infos->sign ? 1 : 0);
}