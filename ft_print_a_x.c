/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 10:58:29 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/17 17:43:47 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

#include <stdio.h>

void			ft_putsign(char *str, uint32_t flags, int w_min)
{
	if (flags & F_PLUS && str && *str)
	{
		if (*str == '-')
			ft_putchar('-');
		else if (w_min <= 0)
			ft_putchar(' ');
	}
}

static void			ft_updt_p_info(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	if (infos && a_lst && f_id)
	{
		infos->len_a = ft_strlen(a_lst->a.s);

		infos->first_c = (f_id->flags & F_HASH && a_lst->a.s && \
			a_lst->a.s[0] != '0') ? "0x" : "";

		if (infos->first_c[0] != '\0' && a_lst->a_tp == 'X')
			infos->first_c = "0X";

		infos->nbr_pad_w_min = ft_max(f_id->w_min - ft_strlen(infos->first_c) -\
			ft_max(ft_abs(f_id->prec.nb_dgt), infos->len_a), 0);

		infos->nbr_pad_dgt = ft_max(0, ft_abs(f_id->prec.nb_dgt) - \
			infos->len_a);

		infos->pad_rt = f_id->flags & F_MINUS ? 1 : 0;

		infos->pad_w_min = (f_id->flags & F_ZERO && !(f_id->flags & F_MINUS)) ? \
			'0' : ' ';


		if ((f_id->flags & F_ZERO && !(f_id->flags & F_MINUS)))
		{
			infos->nbr_pad_dgt += infos->nbr_pad_w_min;
			infos->nbr_pad_w_min = 0;
		}


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

	if ((f_id->w_min || a_lst->a.s[0] != '0') || (!f_id->w_min && a_lst->a.s[0] == '0'))
		ft_putstr(a_lst->a.s);
	ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);

	f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + \
	ft_max(0, infos->nbr_pad_dgt) + ft_strlen(infos->first_c) + infos->len_a);
}

static void		ft_p(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	// if (!f_id->flags & F_ZERO)
		ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);
	ft_putstr(infos->first_c);
	// if (f_id->flags & F_ZERO)
	// 	ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);
	ft_put_x_char(infos->pad_dgt, infos->nbr_pad_dgt);


	if ((f_id->w_min || a_lst->a.s[0] != '0') || (!f_id->w_min && a_lst->a.s[0] == '0'))
		ft_putstr(a_lst->a.s);

	f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + \
	ft_max(0, infos->nbr_pad_dgt) + ft_strlen(infos->first_c) + infos->len_a);
}


void			ft_print_a_x(t_a_lst *a_lst, t_f_id *f_id)
{
	t_p_inf		*infos;

	if (a_lst && f_id)
	{
		infos = ft_init_p_inf();
		ft_updt_p_info(infos, a_lst, f_id);


		if ((a_lst->a.s[0] != '0' || !f_id->prec.period) || (!f_id->w_min && a_lst->a.s[0] == '0'))
			infos->pad_rt ? ft_p_left(infos, a_lst, f_id) : ft_p(infos, a_lst, f_id);



	}
}
