/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_f.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 12:10:25 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/15 13:10:24 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long	float_to_ll(t_union arg, size_t len, int order_start_bit)
{
	double		tmp;
	double		test;
	long long	ret;

	if (order_start_bit - len < 0 || !len || order_start_bit > 64)
		ft_error("ft_bit_to_ll -> float_to_ll: len > maxlen double or == 0\n");
	else
	{
		ret = 0;
		tmp = arg.d;
		test = ft_set_float_bit_up(order_start_bit);
		while (len)
		{
			ret +=
			tmp & test ?
		}
	}
}

static		long long (*(ft_ptr_fct[]))(t_union , size_t, int) =
{
	['f'] = float_to_ll
	// ['e'] = float_to_ll,				//double.
	// ['E'] = float_to_ll,				//double.
	// ['g'] = float_to_ll,				//double.
	// ['G'] = float_to_ll
}

long long	ft_bit_to_ll(t_union arg, size_t len, const char type, \
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

void			ft_print_arg_f(t_a_lst *a_lst, t_format_id *f_id)
{
	if ()
	{
		a_lst->arg.d
		f_id->nb_print_char =
	}
	else
		ft_putstr("ft_print_arg_f: !a_lst or !f_id\n");
}
