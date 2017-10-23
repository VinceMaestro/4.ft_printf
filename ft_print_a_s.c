/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 19:23:01 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 12:45:25 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static void		ft_updt_p_info(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
// {
// 	if (infos && a_lst && f_id)
// 	{
// 		infos->first_c = "";
// 		infos->len_a = f_id->prec.period ? ft_min(ft_strlen(a_lst->a.s), \
// 			ft_abs(f_id->prec.nb_dgt)) : ft_strlen(a_lst->a.s);
// 		infos->nbr_pad_w_min = ft_max(f_id->w_min -\
// 			ft_max(f_id->prec.period ? ft_abs(f_id->prec.nb_dgt) : 0, \
// 			infos->len_a), 0);
// 		infos->nbr_pad_dgt = ft_max(0, (f_id->prec.period ? \
// 			ft_abs(f_id->prec.nb_dgt) : 0) - infos->len_a);
// 		infos->pad_rt = f_id->flags & F_MINUS ? 1 : 0;
// 		infos->pad_w_min = (f_id->flags & F_ZERO && !(f_id->flags & F_MINUS) &&\
// 			!f_id->prec.period) ? '0' : ' ';
// 		infos->pad_dgt = ((f_id->prec.period && f_id->prec.nb_dgt > 0) || \
// 			(!infos->first_c || !infos->first_c[0])) ? '0' : '\0';
// 	}
// 	else
// 		ft_error("ft_print_a_o: ft_updt_p_info: input error");
// }
//
// static void		ft_p_left(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
// {
// 	ft_putstr(infos->first_c);
// 	ft_put_x_char(infos->pad_dgt, infos->nbr_pad_dgt);
// 	if (infos->len_a && ((a_lst->a.s && a_lst->a.s[0] != '0') || \
// 		(!f_id->w_min && !f_id->prec.period)))
// 		ft_putstr(a_lst->a.s);
// 	ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);
// 	f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + \
// 	ft_max(0, infos->nbr_pad_dgt) + infos->len_a);
// }
//
// static void		ft_p(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
// {
// 	if (infos->pad_w_min == '0')
// 		ft_putstr(infos->first_c);
// 	ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);
// 	if (infos->pad_w_min == ' ')
// 		ft_putstr(infos->first_c);
// 	ft_put_x_char(infos->pad_dgt, infos->nbr_pad_dgt);
// 	if (infos->len_a && ((a_lst->a.s && a_lst->a.s[0] != '0') || \
// 		(!f_id->w_min && !f_id->prec.period)))
// 		ft_putstr(a_lst->a.s);
// 	f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + \
// 	ft_max(0, infos->nbr_pad_dgt) + infos->len_a);
// }
//
// void			ft_print_a_s(t_a_lst *a_lst, t_f_id *f_id)
// {
// 	t_p_inf		infos;
//
// 	if (a_lst && f_id && a_lst->a.s)
// 	{
// 		ft_updt_p_info(&infos, a_lst, f_id);
// 		dbug_infos(&infos);
// 		infos.pad_rt ? ft_p_left(&infos, a_lst, f_id) : \
// 			ft_p(&infos, a_lst, f_id);
// 	}
// 	else if (a_lst && f_id)
// 	{
// 		ft_putstr("(null)");
// 		f_id->nb_p_c = 6;
// 	}
// }






static void		ft_p_s(t_a_lst *a_lst, t_f_id *f_id)
{
	int			len;
	int			toprint;

	len = 0;
	if (f_id->prec.period)
		toprint = ft_min(ft_strlen(a_lst->a.s), ft_abs(f_id->prec.nb_dgt));
	else
		toprint = ft_strlen(a_lst->a.s);
	len = ft_max(0, f_id->w_min - toprint);
	if (len > 0)
	{
		if (f_id->flags & F_MINUS)
		{
			ft_putn_ustr(a_lst->a.s, toprint);
			ft_put_x_char(' ', len);
		}
		else
		{
			if (f_id->flags & F_ZERO)
				ft_put_x_char('0', len);
			else
				ft_put_x_char(' ', len);
		}
	}
	if (len <= 0 || f_id->flags & ~F_MINUS || !f_id->flags)
		ft_putn_ustr(a_lst->a.s, toprint);
	f_id->nb_p_c = toprint + ft_max(len, 0);
}

void			ft_print_a_s(t_a_lst *a_lst, t_f_id *f_id)
{
	if (a_lst && f_id && a_lst->a.s)
	{
		ft_p_s(a_lst, f_id);
	}
	else if (a_lst && f_id)
	{
		ft_putstr("(null)");
		f_id->nb_p_c = 6;
	}
}
