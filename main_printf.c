/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:26:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/10 17:58:08 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	char		base[80] = "0123456789abcdef";
	char		*str;
	int			nbr;
	int			base_len;

	base_len = ft_strlen(base);
	nbr =	1 * base_len * base_len * base_len * base_len +\
			1 * base_len * base_len * base_len +\
			1 * base_len * base_len +\
			1 * base_len +\
			1;
	str = ft_itoabase(nbr, base);
	ft_putstr(str);

	// char str[80] = "%*c";

	// ft_printf(str, 1, 42);
	// printf(str, 1, 42);


	// ToDo : arg_p arg_s arg_u arg_x arg_c arg_null

	// Doing: arg_i

	// Done : arg_o //exept len modifier

	return (0);
}
