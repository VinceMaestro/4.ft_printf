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

// void	ft_print_a_p(t_a_lst *a_lst, t_f_id *f_id)
// {
// 	if (a_lst && f_id && a_lst->a.s)
// 	{
// 		ft_putstr("0x");
// 		ft_putstr(a_lst->a.s);
// 		f_id->nb_p_c = ft_strlen(a_lst->a.s) + 2;
// 	}
// 	else
// 		ft_error("ft_print_a_p: Should'nt hapend");
// }



static void			ft_updt_p_info(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	if (infos && a_lst && f_id)
	{
		infos->len_a = ((a_lst->a.s) || \
		(!f_id->w_min && !f_id->prec.period)) ? ft_strlen(a_lst->a.s) : 0;
		infos->first_c = "0x";
		// if (infos->first_c[0] != '\0' && a_lst->a_tp == 'X')
		// 	infos->first_c = "0X";
		infos->nbr_pad_w_min = ft_max(f_id->w_min - ft_strlen(infos->first_c) -\
			ft_max(f_id->prec.period ? ft_abs(f_id->prec.nb_dgt) : 0, \
			infos->len_a), 0);
		infos->nbr_pad_dgt = ft_max(0, (f_id->prec.period ? \
			ft_abs(f_id->prec.nb_dgt) : 0) - infos->len_a);
		infos->pad_rt = f_id->flags & F_MINUS ? 1 : 0;
		infos->pad_w_min = (f_id->flags & F_ZERO && !(f_id->flags & F_MINUS) &&\
			!f_id->prec.period) ? '0' : ' ';
		infos->pad_dgt = ((f_id->prec.period && f_id->prec.nb_dgt > 0) || \
			(!infos->first_c || !infos->first_c[0])) ? '0' : '\0';
	}
	else
		ft_error("ft_print_a_o: ft_updt_p_info: input error");
}

static void			ft_p_left(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	ft_putstr(infos->first_c);
	ft_put_x_char(infos->pad_dgt, infos->nbr_pad_dgt);
	if (infos->len_a || ((a_lst->a.s && a_lst->a.s[0] != '0') || \
		(!f_id->w_min && !f_id->prec.period)))
		ft_putstr(a_lst->a.s);
	ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);
	f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + \
	ft_max(0, infos->nbr_pad_dgt) + ft_strlen(infos->first_c) + infos->len_a);
}

static void			ft_p(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	if (infos->pad_w_min == '0')
		ft_putstr(infos->first_c);
	ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);
	if (infos->pad_w_min == ' ')
		ft_putstr(infos->first_c);
	ft_put_x_char(infos->pad_dgt, infos->nbr_pad_dgt);
	if (infos->len_a || ((a_lst->a.s && a_lst->a.s[0] != '0') || \
		(!f_id->w_min && !f_id->prec.period)))
		ft_putstr(a_lst->a.s);
	f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + \
	ft_max(0, infos->nbr_pad_dgt) + ft_strlen(infos->first_c) + infos->len_a);
}

void			ft_print_a_p(t_a_lst *a_lst, t_f_id *f_id)
{
	t_p_inf		infos;

	if (a_lst && f_id)
	{
		ft_updt_p_info(&infos, a_lst, f_id);
		// dbug_infos(&infos);
		infos.pad_rt ? ft_p_left(&infos, a_lst, f_id) : \
			ft_p(&infos, a_lst, f_id);
	}
	else
		ft_error("ft_print_a_p: Should'nt hapend");
}
