/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:26:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/03 15:46:04 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	// char	str[80] = "-% 7.-5i First : - Second : % 04.6s - Third : %p - Done -\n";
	// void	*ptr;
	//
	// ptr = &str;
	// printf(str, 9999, "2.0", ptr, "Is : ", 80);
	// ft_printf(str, 9999, "2.0", ptr, "Is : ", 80);

	// char	str[80] = "Hello %5 %\n";
		ft_printf("%lx", 4294967296);
		printf("%lx", 4294967296);

	// ft_printf("%x", 42);

	// ToDo : arg_p arg_s arg_u arg_x arg_c arg_null

	// Doing: arg_i

	// Done : arg_o //exept len modifier

	return (0);
}
