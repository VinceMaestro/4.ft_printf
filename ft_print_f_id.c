/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_f_id.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 17:41:48 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/15 19:45:01 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_format_id(t_format_id *f_id)
{
	ft_putstr("============\n");
	if (f_id->arg_type)
		ft_putstr("    VALID   \n");
	else
		ft_putstr("   INVALID  \n");
	ft_putstr("===========================\n");
	ft_putstr("f_id->parameter = ");
	ft_putnbr(f_id->parameter);
	ft_putstr("\nf_id->flags.space = ");
	ft_putnbr(f_id->flags.space);
	ft_putstr("\nf_id->flags.plus = ");
	ft_putnbr(f_id->flags.plus);
	ft_putstr("\nf_id->flags.minus = ");
	ft_putnbr(f_id->flags.minus);
	ft_putstr("\nf_id->flags.hash = ");
	ft_putnbr(f_id->flags.hash);
	ft_putstr("\nf_id->flags.zero = ");
	ft_putnbr(f_id->flags.zero);
	ft_putstr("\nf_id->width_min = ");
	ft_putnbr(f_id->width_min);
	ft_putstr("\nf_id->precision.period = ");
	ft_putchar(f_id->precision.period);
	ft_putstr("\nf_id->precision.width_max = ");
	ft_putnbr(f_id->precision.width_max);
	ft_putstr("\nf_id->lenght = ");
	ft_putstr(f_id->lenght);
	ft_putstr("\nf_id->arg_type = ");
	ft_putchar(f_id->arg_type);
	ft_putstr("\nf_id->nb_read_char = ");
	ft_putnbr(f_id->nb_read_char);
	ft_putstr("\nf_id->nb_print_char = ");
	ft_putnbr(f_id->nb_print_char);
	ft_putstr("\nf_id->start_pos = ");
	ft_putnbr(f_id->start_pos);
	ft_putstr("\n===========================\n");
}
