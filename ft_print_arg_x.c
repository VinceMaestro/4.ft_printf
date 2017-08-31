/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 10:58:29 by vpetit            #+#    #+#             */
/*   Updated: 2017/08/31 10:58:30 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_find_max_quartet(unsigned long long nbr)
{
	int					bit;

	bit = 31;
	while (!(nbr & (1 << bit)) && (bit >= 0))
		bit--;
	return (bit / 4);
}

static int		ft_quartet_to_hex(unsigned long long nbr, int quartet)
{
	unsigned long long	hex_nbr;
	int					bit;

	hex_nbr = 0;
	bit = 3;
	if (quartet > 0 && quartet <= 8)
	{
		while (bit >= 0)
		{
			((nbr & (1 << (quartet * 4 + bit - 4))) ? \
				(hex_nbr += ft_power(2, bit)) : hex_nbr);
			bit--;
		}
	}
	return (hex_nbr);
}

static void		ft_p_int_to_hex(int hex_nbr)
{
	if (hex_nbr < 16 && hex_nbr >= 0)
		hex_nbr > 9 ? ft_putchar(87 + hex_nbr) : ft_putchar(48 + hex_nbr);
}

void						ft_print_arg_x(t_a_lst *a_lst, t_format_id *f_id)
{
    unsigned long long		nbr;
	int						quartet;
	int						hex_nbr;

    nbr = (unsigned long long)a_lst->arg.ll;

	quartet = ft_find_max_quartet(nbr);
	f_id->nb_print_char += quartet;
	ft_putstr("0x");
	while (quartet > 0)
	{
		hex_nbr = ft_quartet_to_hex(nbr, quartet);
		ft_p_int_to_hex(hex_nbr);
		quartet--;
	}
}
