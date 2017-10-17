/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:26:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/17 12:34:53 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	// char	str[80] = "abcde";
	// char	*tmp;

	// tmp = ft_strtoupper(str);

	// ft_printf(str);

	ft_printf("%#x", 0);
	printf("%#x", 0);


	// ToDo : arg_p arg_s arg_u arg_x arg_c arg_null

	// Doing: arg_i

	// Done : arg_o //exept len modifier


	// char		base[80] = "0123456789abcdef";
	// int			base_len;
	// int			nbr;
	//
	// base_len = ft_strlen(base);
	// nbr =	15 * base_len * base_len * base_len * base_len +\
	// 		0 * base_len * base_len * base_len +\
	// 		0 * base_len * base_len +\
	// 		0 * base_len +\
	// 		0;
	// str = ft_itoabase(nbr, base);
	// ft_putstr(str);


	return (0);
}
