/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 14:50:01 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/14 18:11:56 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_strbaselen(size_t nbr, size_t base_len)
{
	size_t	str_len;
	size_t	tmp;

	tmp = nbr;
	str_len = 1;
	while ((tmp = tmp / base_len) > 0)
		str_len++;
	return (str_len);
}

static char		*ft_changebase(size_t nbr, const char *base)
{
	size_t			newstr_len;
	size_t			base_len;
	size_t			ordre;
	size_t			index;
	char			*str;

	base_len = ft_strlen(base);
	newstr_len = ft_strbaselen(nbr, base_len);
	str = ft_strnew(newstr_len);
	str[newstr_len] = 0;
	ordre = newstr_len;
	ft_putstr("---  1  ---\n");
	while (ordre > 0)
	{
		ft_putstr("---  2  ---\n");
		index = nbr / (size_t)ft_llpower(base_len, ordre - 1);
		ft_putstr("---  2.0  ---\n");
		str[newstr_len - ordre] = base[index];
		ft_putstr("---  2.1  ---\n");
		nbr = nbr % (size_t)ft_llpower(base_len, ordre - 1);
		ft_putstr("---  2.2  ---\n");
		ordre--;
	}
	ft_putstr("---  3  ---\n");
	return (str);
}

char			*ft_itoabase(size_t nbr, const char *base)
{
	char		*str;
	size_t		tmp;

	if (base && *base)
	{
		if (nbr)
		{
			tmp = nbr;
			str = ft_changebase(tmp, base);
		}
		else
		{
			str = ft_strnew(1);
			str[0] = base[0];
		}
		return (str);
	}
	else
		return (NULL);
}
