/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:26:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/02 14:10:45 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	char	str[80] = "Hello %2$-+03.02s str %1$2.4s str %3$d int %%4p pointer %2$-+00.04 k out%%\0";
	void	*ptr;

	ptr = &str;
	// ft_printf(str, "Wo", "are", 15, ptr);
	printf(str, "Wo", "are", 15, ptr);
	return (0);
}
