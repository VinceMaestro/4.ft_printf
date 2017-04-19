/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:41:09 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/19 18:42:47 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void	ft_error(char *msg)
{
	ft_putstr_fd("error : ", 2);
	if (*msg)
		ft_putstr_fd(msg, 2);
	ft_putchar('\n');
	exit(1);
}
