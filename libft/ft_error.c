/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 14:01:29 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/24 14:32:57 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_error(const char *msg)
{
	ft_putstr_fd("error : ", 2);
	if (msg && *msg)
		ft_putstr_fd(msg, 2);
	ft_putchar('\n');
	exit(1);
}
