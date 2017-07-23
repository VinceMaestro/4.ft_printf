/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:26:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/06/19 19:08:11 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	// char	str[80] = "Hello %2$3.*d str %3$2.4s str %3$d int %%4p pointer %2$-+03.04k out%%\0";
	char	str[80] = "-%5.7s First : - Second : % 04.6s - Third : %u - Done -\n";
	void	*ptr;

	ptr = &str;
	printf(str, "1.0", "2.0", 3, "Is : ", 80);
	ft_printf(str, "1.0", "2.0", 3, "Is : ", 80);
	// ft_putstr("Should be :\n");
	// printf(str, "1.0", "2.0", "3.0", "Is : ", 80);
	return (0);
}
