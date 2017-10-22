/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 14:46:13 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 13:00:44 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_updt_p_info(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	if (infos && a_lst && f_id)
	{
		infos->len_a = 1;
		if (a_lst->a_tp == 'C')
		{
			infos->len_a = f_id->prec.period && f_id->prec.nb_dgt ? \
				ft_min(ft_strlen(a_lst->a.s), ft_abs(f_id->prec.nb_dgt)) : \
				ft_strlen(a_lst->a.s);
		}
		infos->first_c = "";
		infos->nbr_pad_w_min = ft_max((f_id->w_min - infos->len_a), 0);
		infos->nbr_pad_dgt = 0;
		infos->pad_rt = f_id->flags & F_MINUS ? 1 : 0;
		infos->pad_w_min = ' ';
	}
	else
		ft_error("ft_print_a_o: ft_updt_p_info: input error");
}

static void		ft_p_left(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	if (a_lst->a_tp == 'c')
		ft_putchar((int)a_lst->a.ll);
	else
		ft_putnstr(a_lst->a.s, infos->len_a);
	ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);
	f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + infos->len_a);
}

static void		ft_p(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);
	if (a_lst->a_tp == 'c')
		ft_putchar((int)a_lst->a.ll);
	else
		ft_putnstr(a_lst->a.s, infos->len_a);
	f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + infos->len_a);
}

void			ft_print_a_c(t_a_lst *a_lst, t_f_id *f_id)
{
	t_p_inf		infos;

	if (a_lst && f_id)
	{
		ft_updt_p_info(&infos, a_lst, f_id);
		infos.pad_rt ? ft_p_left(&infos, a_lst, f_id) : \
			ft_p(&infos, a_lst, f_id);
	}
	else
		ft_error("ft_print_a_c: Should'nt hapend");
}
