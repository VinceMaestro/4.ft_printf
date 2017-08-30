/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llintlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 17:31:46 by vpetit            #+#    #+#             */
/*   Updated: 2017/08/30 17:32:41 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_llintlen(long long nbr)
{
	size_t	len;

	len = 1;
	nbr < 0 ? len++ : len;
	while (nbr && nbr != nbr % 10)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}
