/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:26:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/04 18:50:46 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	char	str[80] = "Hello %2$3.*d str %3$2.4d str %3$d int %%4p pointer %2$-+03.04k out%%\0";
	void	*ptr;

	ptr = &str;
	// ft_printf(str, 2, 15, 16, "Is : ", 80);
	printf(str, 2, 15, 16);
	return (0);
}
