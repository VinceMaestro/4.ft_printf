/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_llnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 14:45:52 by vpetit            #+#    #+#             */
/*   Updated: 2017/08/30 14:47:40 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static int	ft_put_llnbr_neg(long long nbr)
{
	char	buff;

	(nbr % 10 != nbr) ? (ft_put_llnbr_neg(nbr / 10)) : (write(1, "-", 1));
	buff = '0' + nbr % 10;
	write(1, &buff, 1);
	return (0);
}

int			ft_put_llnbr(long long nbr)
{
	long long	buff;

	buff = '0';
	if (nbr < 0)
		return (ft_put_llnbr_neg(-nbr));
	(nbr % 10 != nbr) ? (ft_put_llnbr(nbr / 10)) : buff;
	buff = '0' + nbr % 10;
	write(1, &buff, 1);
	return (0);
}
