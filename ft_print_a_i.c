/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 16:04:19 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/19 14:49:51 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

// static void		ft_updt_p_info(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
// {
// 	if (infos && a_lst && f_id)
// 	{
// 		infos->len_a = ft_llintlen(a_lst->a.ll);
//
// 		infos->pad_rt = (f_id->flags & F_MINUS) ? 1 : 0;
//
// 		infos->sign = ((f_id->flags & F_PLUS) && (a_lst->a.ll >= 0) ? '+' : 0);
//
// 		infos->first_c = (f_id->flags & F_HASH && \
// 			(ft_abs(f_id->prec.nb_dgt) - infos->len_a < 1) ? "0" : "");
//
// 		infos->nbr_pad_dgt = ft_max(0, f_id->prec.nb_dgt - \
// 			infos->len_a); // nbr of digits to appear : '0'
//
// 		infos->nbr_pad_w_min = ft_max(0, f_id->w_min - (infos->sign ? 1 : 0) -
// 			(*infos->first_c ? 1 : 0) - infos->nbr_pad_dgt - infos->len_a);
//
// 		infos->nbr_pad_dgt = ft_max(0, infos->nbr_pad_dgt - \
// 			(infos->sign ? 1 : 0));
//
// 		infos->nbr_pad_w_min = (f_id->flags & F_SPACE) && \
// 			!(f_id->flags & F_PLUS) ? ft_max(infos->nbr_pad_w_min, 1) \
// 				: infos->nbr_pad_w_min; //field size min : ' '
//
// 		infos->pad_w_min = ' ';
//
// 		infos->pad_dgt = '0';
//
// 	}
// 	else
// 		ft_error("ft_print_a_o: ft_init_p_inf: input error");
// }



static void			ft_updt_p_info(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	if (infos)
	{
		infos->len_a = ft_lintlen(a_lst->a.ll) - (a_lst->a.ll < 0 ? 1 : 0);

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

		infos->pad_w_min = (f_id->flags & F_ZERO && !(f_id->flags & F_MINUS)) ? \
			'0' : ' ';

		// if ((f_id->flags & F_ZERO && !(f_id->flags & F_MINUS)))
		// {
		// 	infos->nbr_pad_dgt += infos->nbr_pad_w_min;
		// 	infos->nbr_pad_w_min = 0;
		// }

		infos->pad_dgt = (f_id->prec.nb_dgt > 0 || \
			!infos->first_c[0] ) ? '0' : '\0';
	}
	else
		ft_error("ft_print_a_o: ft_init_p_inf: input error");
}

static void		ft_p_left(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	ft_putstr(infos->first_c);
	ft_put_x_char(infos->pad_dgt, infos->nbr_pad_dgt);

	if ((f_id->w_min || a_lst->a.ll) || (!f_id->w_min && a_lst->a.ll == 0) || \
		infos->first_c[0] == '+')
		ft_put_llnbr(ft_abs(a_lst->a.ll));
	ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);

	f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + \
	ft_max(0, infos->nbr_pad_dgt) + ft_strlen(infos->first_c) + infos->len_a);
}

static void		ft_p(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	if (infos->pad_w_min == '0')
		ft_putstr(infos->first_c);

	// if (!f_id->flags & F_ZERO)
	ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);

	if (infos->pad_w_min == ' ')
		ft_putstr(infos->first_c);

	// if (f_id->flags & F_ZERO)
	// 	ft_put_x_cha	r(infos->pad_w_min, infos->nbr_pad_w_min);
	ft_put_x_char(infos->pad_dgt, infos->nbr_pad_dgt);

	if ((f_id->w_min || a_lst->a.ll) || (!f_id->w_min && a_lst->a.ll == 0) || \
		infos->first_c[0] == '+')
		ft_put_llnbr(ft_abs(a_lst->a.ll));

	f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + \
	ft_max(0, infos->nbr_pad_dgt) + ft_strlen(infos->first_c) + infos->len_a);
}


void	ft_print_a_i(t_a_lst *a_lst, t_f_id *f_id)
{
	t_p_inf		*infos;

	infos = ft_init_p_inf();
	ft_updt_p_info(infos, a_lst, f_id);


	if ((a_lst->a.ll != 0 || f_id->prec.nb_dgt) || (!f_id->w_min && a_lst->a.ll == 0))
		infos->pad_rt ? ft_p_left(infos, a_lst, f_id) : ft_p(infos, a_lst, f_id);


	//
	// if (!infos->pad_rt)
	// {
	// 	ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);
	// 	ft_put_x_char(infos->pad_dgt, infos->nbr_pad_dgt);
	// 	*infos->first_c ? write(1, infos->first_c, 1) : 0;
	// 	infos->sign ? write(1, &infos->sign, 1) : 0;
	// 	a_lst->a_tp == 'i' || a_lst->a_tp == 'd' ? ft_putnbr(a_lst->a.ll) : \
	// 		ft_put_llnbr(ft_abs(a_lst->a.ll));
	// }
	// else
	// {
	// 	ft_put_x_char(infos->pad_dgt, infos->nbr_pad_dgt);
	// 	*infos->first_c ? write(1, infos->first_c, 1) : 0;
	// 	infos->sign ? write(1, &infos->sign, 1) : 0;
	// 	a_lst->a_tp == 'i' || a_lst->a_tp == 'd' ? ft_putnbr(a_lst->a.ll) : \
	// 		ft_put_llnbr(ft_abs(a_lst->a.ll));
	// 	if (f_id->prec.nb_dgt >= 0)
	// 		ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);
	// 	else
	// 		ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);
	// }
	// f_id->nb_p_c = infos->len_a + infos->nbr_pad_dgt + (*infos->first_c ? 1 : 0) + \
	// 		(infos->sign ? 1 : 0) + infos->nbr_pad_w_min; //+ infos->nbr_pad_dgt;
}
