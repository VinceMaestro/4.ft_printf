/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format_id.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 17:41:48 by vpetit            #+#    #+#             */
/*   Updated: 2017/03/30 18:18:25 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_format_id(t_format_id *format_id)
{
	ft_putstr("===========================\n");
	ft_putstr("format_id->flags = ");
	ft_putstr(format_id->flags);
	ft_putstr("\nformat_id->width_min = ");
	ft_putnbr(format_id->width_min);
	ft_putstr("\nformat_id->period = ");
	ft_putchar(format_id->period);
	ft_putstr("\nformat_id->width_max = ");
	ft_putnbr(format_id->width_max);
	ft_putstr("\nformat_id->arg_type = ");
	ft_putchar(format_id->arg_type);
	ft_putstr("\nformat_id->nb_read_char = ");
	ft_putnbr(format_id->nb_read_char);
	ft_putstr("\nformat_id->nb_print_char = ");
	ft_putnbr(format_id->nb_print_char);
	ft_putstr("\n===========================\n");
}
