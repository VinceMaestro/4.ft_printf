/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 14:50:01 by vpetit            #+#    #+#             */
/*   Updated: 2017/08/31 16:53:47 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoabase(long long nbr, const char *base)
{
	char				*str;
	unsigned long long	base_len;
	int					ordre;
	long long			tmp;
	int					extra;

	if (nbr && base_len)
	{
		tmp = nbr;
		ordre = 1;
		tmp >= 0 ? extra = 0 : extra = 1;
		base_len = ft_strlen(base);
		while ((tmp = tmp / base_len) > 0)
			ordre++;
		tmp = nbr;
		str = ft_strnew(ordre + extra);
		str[ordre + extra] = 0;
		nbr < 0 ? str[0] = '-' : NULL;

		while (--ordre >= 0)
		{
			str[i] = base[tmp / ft_power(base_len, ordre)];
			tmp = tmp % ft_power(base_len, ordre);
		}
		return (str)
	}
	else
		return (NULL);
}
