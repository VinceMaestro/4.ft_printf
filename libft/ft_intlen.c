/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 18:22:56 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/05 18:30:29 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_intlen(int nbr)
{
	size_t	len;

	len = 0;
	if (nbr)
	{
		len++;
		nbr < 0 ? len ++ : len;
		while (nbr && nbr != nbr % 10)
		{
			len++;
			nbr = nbr / 10;
		}
	}
	return (len);
}