/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:26:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/03 14:36:25 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	char	str[80] = "Hello %2$-+03.02s str %1$2.4s str %d int %%4p pointer %2$-+03.04k out%%\0";
	void	*ptr;

	ptr = &str;
	// ft_printf(str, "Wo", "are", 15, ptr);
	printf(str, "Wo", "are", 15, ptr);
	return (0);
}
