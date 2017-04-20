/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:26:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/20 15:07:40 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	char	str[42] = "Hello %2$-+03.02srld!\nWhat %1$2.4s you?%%\0";

	ft_printf(str, "Wo", "are");
	// printf("Hello %2$-3.02srld!\nWhat %2$2.4s you?%%%1$2.4s", "Wo", "are");
	return (0);
}
