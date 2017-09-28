/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:26:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/28 16:20:38 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	// char	str[80] = "Hello %2$3.*d str %3$2.4s str %3$d int %%4p pointer %2$-+03.04k out%%\0";
	char	str[80] = "-% 7.-5i First : - Second : % 04.6s - Third : %p - Done -\n";
	void	*ptr;

	ptr = &str;
	printf(str, 9999, "2.0", ptr, "Is : ", 80);
	ft_printf(str, 9999, "2.0", ptr, "Is : ", 80);

	// ToDo : arg_p arg_s arg_u arg_x arg_c arg_null

	// Doing: arg_i

	// Done : arg_o //exept len modifier

	return (0);
}
