/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_null.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 19:14:47 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/20 17:12:20 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void			ft_updt_p_info(t_p_inf *infos, t_f_id *f_id)
{
	if (infos && f_id)
	{
		infos->len_a = 1;
		infos->first_c = "";
		infos->nbr_pad_w_min = ft_max((f_id->w_min - infos->len_a), 0);
		infos->nbr_pad_dgt = 0;
		infos->pad_rt = f_id->flags & F_MINUS ? 1 : 0;
		infos->pad_w_min = ' ';
	}
	else
		ft_error("ft_print_a_o: ft_init_p_inf: input error");
}

static void		ft_p_left(t_p_inf *infos, t_f_id *f_id, \
		char *str)
{
	if (infos && f_id)
	{
		ft_putchar(str[f_id->nb_r_c - 1]);
		ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);

		f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + infos->len_a);
	}
}

static void		ft_p(t_p_inf *infos, t_f_id *f_id, char *str)
{
	if (infos && f_id)
	{
		ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);
		ft_putchar(str[f_id->nb_r_c - 1]);

		f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + infos->len_a);
	}
}

void	ft_print_a_null(t_f_id *f_id, char *str)
{
	t_p_inf		*infos;

	if (f_id)
	{
		infos = ft_init_p_inf();
		ft_updt_p_info(infos, f_id);

		if (!f_id->prec.period || !f_id->w_min || \
			(f_id->prec.period && f_id->prec.nb_dgt))
			infos->pad_rt ? ft_p_left(infos, f_id, str) : \
				ft_p(infos, f_id, str);
	}
	else
		ft_error("ft_print_a_c: Should'nt hapend");
}
