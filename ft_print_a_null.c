/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_null.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 19:14:47 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/20 12:44:18 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

static void			ft_updt_p_info(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id)
{
	if (infos && a_lst && f_id)
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

static void		ft_p_left(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id, \
		char *str)
{
	if (infos && a_lst && f_id)
	{
		printf("Here 3\n");
		ft_putchar(str[f_id->nb_r_c]);
		ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);

		f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + infos->len_a);
	}
}

static void		ft_p(t_p_inf *infos, t_a_lst *a_lst, t_f_id *f_id, char *str)
{
	if (infos && a_lst && f_id)
	{
		printf("Here 2\n");
		ft_put_x_char(infos->pad_w_min, infos->nbr_pad_w_min);
		ft_putchar(str[f_id->nb_r_c]);

		f_id->nb_p_c = (ft_max(0, infos->nbr_pad_w_min) + infos->len_a);
	}
}

void	ft_print_a_null(t_a_lst *a_lst, t_f_id *f_id, char *str)
{
	t_p_inf		*infos;

	if (a_lst && f_id)
	{
		infos = ft_init_p_inf();
		ft_updt_p_info(infos, a_lst, f_id);

		printf("Here 1\n");

		if ((a_lst->a.ll || !f_id->prec.period) || \
			(!f_id->w_min && !a_lst->a.ll) || \
			(f_id->prec.period && f_id->prec.nb_dgt))
			infos->pad_rt ? ft_p_left(infos, a_lst, f_id, str) : \
			ft_p(infos, a_lst, f_id, str);
	}
	else
		ft_error("ft_print_a_c: Should'nt hapend");
}



// void			ft_print_a_null(t_f_id *f_id, char *str)
// {
// 	int		len;
//
// 	len = 0;
// 	if (str && f_id)
// 	{
// 		if (f_id->flags & F_MINUS && str[f_id->nb_r_c - 1])
// 		{
// 			ft_putchar(str[f_id->nb_r_c - 1]);
// 			f_id->nb_r_c += 1;
// 			f_id->nb_p_c += 1;
// 		}
// 		(f_id->w_min ? len = f_id->w_min - 1 : len);
// 		ft_put_x_char(' ', len);
// 		f_id->nb_p_c += ft_max(len, 0);
// 	}
// 	else
// 		ft_error("ft_print_a_null: Shouldn't happend");
// }
