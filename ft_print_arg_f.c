/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_f.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 12:10:25 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/15 17:00:59 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long		double_to_ll(double nbr, char c)
{
	double		tmp;
	double		test;
	long long	ret;
	int			order_start_bit;

	// c == 'i' : order_start_bit = 64 : NULL; ====>>>> HERERERER
	ret = 0;
	if (order_start_bit - len < 0 || !len || order_start_bit > 64)
		ft_error("ft_bit_to_ll -> double_to_ll: len > maxlen double or == 0\n");
	else
	{
		tmp = nbr;
		// test = 1 << order_start_bit;
		while (order_start_bit)
		{
			// tmp & test ?
			tmp & 1 << order_start_bit ? ret += 1 << (order_start_bit - len) : ;
			order_start_bit--;
		}
	}
	return (ret);
}

static		long long (*(ft_ptr_fct[]))(t_union , size_t, int) =
{
	['f'] = double_to_ll
	// ['e'] = double_to_ll,				//double.
	// ['E'] = double_to_ll,				//double.
	// ['g'] = double_to_ll,				//double.
	// ['G'] = double_to_ll
}

long long		ft_bit_to_ll(t_union arg, size_t len, const char type, \
	int order_start_bit)
{
	long long	conv_value;

	if (!type || !arg)
		ft_error("ft_bit_to_ll: input error\n");
	else
	{
		conv_value = ft_ptr_fct[(int)type](arg, len, order_start_bit);
		return (conv_value);
	}
	return (NULL);
}

ft_putdouble(double nbr)
{
	long long	int_part;
	long long	float_part;

	(t_union arg, size_t len, int order_start_bit)
	int_part = double_to_ll(nbr, 11, 'f', 63);
	float_part = double_to_ll(nbr, 11, 'f', 63);
	nbr & 1 << 63 ? int_part = -int_part : int_part;
	ft_put_llnbr(int_part);
	ft_putchar('.');
	ft_put_llnbr(float_part);
}

void			ft_print_arg_f(t_a_lst *a_lst, t_format_id *f_id)
{
	long long	int_part;
	long long	float_part;

	if (a_lst && f_id)
	{
		// int_part = ft_bit_to_ll(a_lst->arg, 11, 'f', 63);
		// float_part = ft_bit_to_ll(a_lst->arg, 11, 'f', 63);
		// a_lst->arg.d & 1 << 63 ? int_part = -int_part : int_part;
		// ft_put_llnbr(int_part);
		// ft_putchar('.');
		// ft_put_llnbr(float_part);
		ft_putdouble(a_lst.d);
		f_id->nb_print_char =

	}
	else
		ft_putstr("ft_print_arg_f: !a_lst or !f_id\n");
}
