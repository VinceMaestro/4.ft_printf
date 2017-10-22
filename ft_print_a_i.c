/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 16:04:19 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 13:06:33 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static void		ft_updt_p_info(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	int		tmp;

	if (infos)
	{
		tmp = a_lst->a.ll < 0 ? 1 : 0;
		infos->len_a = (a_lst->a.ll || (!f_id->w_min && !f_id->prec.period)) ?\
			ft_llintlen(a_lst->a.ll) - tmp : 0;
		if (f_id->flags & F_PLUS && a_lst->a.ll >= 0)
			infos->first_c = "+";
		else if (f_id->flags & F_SPACE && a_lst->a.ll >= 0)
			infos->first_c = " ";
		else if (a_lst->a.ll < 0)
			infos->first_c = "-";
		else
			infos->first_c = "";
		infos->nbr_pad_w_min = ft_max(f_id->w_min - ft_strlen(infos->first_c) -\
			ft_max(ft_abs(f_id->prec.nb_dgt), infos->len_a), 0);
		infos->nbr_pad_dgt = ft_max(0, ft_abs(f_id->prec.nb_dgt) - \
			infos->len_a);
		infos->pad_rt = f_id->flags & F_MINUS ? 1 : 0;
		infos->pad_w_min = (f_id->flags & F_ZERO && !(f_id->flags & F_MINUS) &&\
		!f_id->prec.period) ? '0' : ' ';
		infos->pad_dgt = (f_id->prec.nb_dgt > 0 || \
			!infos->first_c[0]) ? '0' : '\0';
	}
	else
		ft_error("ft_print_a_o: ft_updt_p_info: input error");
}

static void		ft_p_left(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	ft_putstr(infos->first_c);
	ft_put_x_char(infos->pad_dgt, infos->nbr_pad_dgt);
	if (a_lst->a.ll || (!f_id->w_min && !f_id->prec.period))
		a_lst->a.ll == LLONG_MIN ? ft_putstr("9223372036854775808") : \
			ft_put_llnbr(ft_abs(a_lst->a.ll));
	ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);
	f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + \
	ft_max(0, infos->nbr_pad_dgt) + ft_strlen(infos->first_c) + infos->len_a);
}

static void		ft_p(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	if (infos->pad_w_min == '0')
		ft_putstr(infos->first_c);
	ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);
	if (infos->pad_w_min == ' ')
		ft_putstr(infos->first_c);
	ft_put_x_char(infos->pad_dgt, infos->nbr_pad_dgt);
	if (a_lst->a.ll || (!f_id->w_min && !f_id->prec.period))
		a_lst->a.ll == LLONG_MIN ? ft_putstr("9223372036854775808") : \
			ft_put_llnbr(ft_abs(a_lst->a.ll));
	f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + \
	ft_max(0, infos->nbr_pad_dgt) + ft_strlen(infos->first_c) + infos->len_a);
}

void			ft_print_a_i(t_a_lst *a_lst, t_f_id *f_id)
{
	t_p_inf		infos;

	if (a_lst && f_id)
	{
		// infos = ft_init_p_inf();
		ft_updt_p_info(&infos, a_lst, f_id);
		infos.pad_rt ? ft_p_left(&infos, a_lst, f_id) : \
			ft_p(&infos, a_lst, f_id);
	}
}
