/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format_id.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 17:41:48 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/06 17:44:55 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_format_id(t_format_id *format_id)
{
	ft_putstr("===========================\n");
	ft_putstr("format_id->parameter = ");
	ft_putnbr(format_id->parameter);
	ft_putstr("\nformat_id->flags.space = ");
	ft_putnbr(format_id->flags.space);
	ft_putstr("\nformat_id->flags.plus = ");
	ft_putnbr(format_id->flags.plus);
	ft_putstr("\nformat_id->flags.minus = ");
	ft_putnbr(format_id->flags.minus);
	ft_putstr("\nformat_id->flags.hash = ");
	ft_putnbr(format_id->flags.hash);
	ft_putstr("\nformat_id->flags.zero = ");
	ft_putnbr(format_id->flags.zero);
	ft_putstr("\nformat_id->width_min = ");
	ft_putnbr(format_id->width_min);
	ft_putstr("\nformat_id->precision.period = ");
	ft_putchar(format_id->precision.period);
	ft_putstr("\nformat_id->precision.width_max = ");
	ft_putnbr(format_id->precision.width_max);
	ft_putstr("\nformat_id->lenght = ");
	ft_putstr(format_id->lenght);
	ft_putstr("\nformat_id->arg_type = ");
	ft_putchar(format_id->arg_type);
	ft_putstr("\nformat_id->nb_read_char = ");
	ft_putnbr(format_id->nb_read_char);
	ft_putstr("\nformat_id->nb_print_char = ");
	ft_putnbr(format_id->nb_print_char);
	ft_putstr("\nformat_id->start_pos = ");
	ft_putnbr(format_id->start_pos);
	ft_putstr("\n===========================\n");
}
