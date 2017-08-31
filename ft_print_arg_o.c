/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_o.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 15:08:39 by vpetit            #+#    #+#             */
/*   Updated: 2017/08/31 11:15:45 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

	oct = ft_int_to_oct(a_lst->arg.ll);
	ft_put_llnbr(oct);
	f_id->nb_print_char = ft_llintlen(oct);
}
