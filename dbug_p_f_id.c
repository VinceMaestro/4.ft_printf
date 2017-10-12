/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dbug_p_f_id.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 17:41:48 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/12 17:21:52 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	dbug_p_f_id(t_f_id *f_id)
{
	ft_putstr("============\n");
	if (f_id->a_tp)
		ft_putstr("    VALID   \n");
	else
		ft_putstr("   INVALID  \n");
	ft_putstr("===========================\n");
	ft_putstr("f_id->param = ");
	ft_putnbr(f_id->param);
	ft_putstr("\nf_id->flags & F_SPACE = ");
	ft_putnbr(f_id->flags & F_SPACE);
	ft_putstr("\nf_id->flags & F_PLUS = ");
	ft_putnbr(f_id->flags & F_PLUS);
	ft_putstr("\nf_id->flags & F_MINUS = ");
	ft_putnbr(f_id->flags & F_MINUS);
	ft_putstr("\nf_id->flags & F_HASH = ");
	ft_putnbr(f_id->flags & F_HASH);
	ft_putstr("\nf_id->flags & F_ZERO = ");
	ft_putnbr(f_id->flags & F_ZERO);
	ft_putstr("\nf_id->w_min = ");
	ft_putnbr(f_id->w_min);
	ft_putstr("\nf_id->prec.period = ");
	ft_putchar(f_id->prec.period);
	ft_putstr("\nf_id->prec.nb_dgt = ");
	ft_putnbr(f_id->prec.nb_dgt);
	ft_putstr("\nf_id->lenght = ");
	ft_putstr(f_id->lenght);
	ft_putstr("\nf_id->a_tp = ");
	ft_putchar(f_id->a_tp);
	ft_putstr("\nf_id->nb_r_c = ");
	ft_putnbr(f_id->nb_r_c);
	ft_putstr("\nf_id->nb_p_c = ");
	ft_putnbr(f_id->nb_p_c);
	ft_putstr("\nf_id->start_pos = ");
	ft_putnbr(f_id->start_pos);
	ft_putstr("\n===========================\n");
}
