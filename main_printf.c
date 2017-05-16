/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:26:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/16 19:05:54 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	// char	str[80] = "Hello %2$3.*d str %3$2.4s str %3$d int %%4p pointer %2$-+03.04k out%%\0";
	char	str[80] = "%3$3.5lls First : - Second : %1$zzs - Third : %s - Done - \n";
	void	*ptr;

	ptr = &str;
	ft_printf(str, "1.0", "2.0", "3.0", "Is : ", 80);
	// printf(str, "1.0", "2.0", 3, "Is : ", 80);
	return (0);
}
