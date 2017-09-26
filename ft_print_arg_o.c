/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_o.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 15:08:39 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/26 18:32:58 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

static long long	get_value(long long nbr, long long cpt, long long maxoctpow)
{
	long long	ret;

	ret = 0;
	while (nbr)
	{
		while (cpt && cpt * ft_llpower(8, maxoctpow) > nbr)
			cpt--;
		ret += cpt * ft_llpower(10, maxoctpow);
		nbr -= cpt * ft_llpower(8, maxoctpow);
		maxoctpow--;
		cpt = 7;
	}
	return (ret);
}

static long long	ft_int_to_oct(long long nbr)
{
	long long	maxoctpow;
	long long	ret;
	long long	cpt;

	maxoctpow = 10;
	cpt = 4;
	if (!nbr)
		return (0);
	while (cpt * ft_llpower(8, maxoctpow) > nbr && cpt--)
	{
		if (cpt < 1)
		{
			cpt = 7;
			maxoctpow--;
		}
	}
	ret = get_value(nbr, cpt, maxoctpow);
	return (ret);
}

void				ft_print_arg_o(t_a_lst *a_lst, t_format_id *f_id)
{
	long long	oct;
	char		pad_char;
	char		first_char;
	char		signed_c;
	char		pad_right;

	oct = ft_int_to_oct(a_lst->arg.ll);
	signed_c = 0 + (f_id->flags & F_PLUS && oct > 0 ? '+' : 0);
	first_char = 0 + (f_id->flags & F_HASH && (f_id->precision.width_max - \
		ft_llintlen(oct) < 1) ? '0' : 0);
	pad_right = (f_id->flags & F_MINUS ? 1 : 0);
	pad_char = ' ' + (!(f_id->flags & F_MINUS) && (f_id->precision.width_max <=\
		0) && (f_id->flags & F_ZERO) ? 16 : 0);
	write(1, &signed_c, 1);
	pad_right ? write(1, &first_char, 1) : 0;
	pad_right ? ft_put_llnbr(oct) : ft_put_x_char(pad_char, \
		f_id->width_min - ft_max(f_id->precision.width_max, \
			ft_llintlen(oct)));
	pad_right ? 0 : write(1, &first_char, 1);
	ft_put_x_char('0', f_id->precision.width_max - ft_llintlen(oct));
	pad_right ? ft_put_x_char(pad_char, \
		f_id->width_min - ft_max(f_id->precision.width_max, \
			ft_llintlen(oct))) : ft_put_llnbr(oct);
	f_id->nb_print_char = ft_max(f_id->precision.width_max, \
		ft_llintlen(oct)) + (signed_c ? 1 : 0) + \
			(first_char ? 1 : 0) + ft_max(0, f_id->width_min - \
				f_id->precision.width_max);
}
