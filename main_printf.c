/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:26:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/15 12:01:35 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	// char	str[80] = "Hello %2$3.*d str %3$2.4s str %3$d int %%4p pointer %2$-+03.04k out%%\0";
	char	str[80] = "-%5.7s First : - Second : % 04.6s - Third : %p - Done -\n";
	// char	*tmp;
	void	*ptr;

	ptr = &str;
	printf(str, "1.0", "2.0", ptr, "Is : ", 80);
	ft_printf(str, "1.0", "2.0", ptr, "Is : ", 80);

	// tmp = ft_itoabase(0, "0123456789abcdef");
	// ft_putstr(tmp);

	// ft_putstr("Should be :\n");
	return (0);
}
