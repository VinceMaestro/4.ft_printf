/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 14:50:01 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/10 17:59:53 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// static t_ull	ft_strbaselen(t_ull nbr, t_ull base_len)
// {
// 	t_ull	str_len;
// 	t_ull	tmp;
//
// 	tmp = nbr;
// 	str_len = 1;
// 	while ((tmp = tmp / base_len) > 0)
// 		str_len++;
// 	return (str_len);
// }
//
// static char		*ft_changebase(t_ull nbr, const char *base)
// {
// 	t_ull			newstr_len;
// 	t_ull			base_len;
// 	t_ull			ordre;
// 	t_ull			index;
// 	char			*str;
//
// 	base_len = (t_ull)ft_strlen(base);
// 	newstr_len = ft_strbaselen(nbr, base_len);
// 	str = ft_strnew(newstr_len);
// 	str[newstr_len] = 0;
// 	ordre = newstr_len;
// 	while (ordre > 0)
// 	{
// 		index = nbr / (t_ull)ft_llpower(base_len, ordre - 1);
// 		str[newstr_len - ordre] = base[index];
// 		nbr = nbr % (t_ull)ft_llpower(base_len, ordre - 1);
// 		ordre--;
// 	}
// 	return (str);
// }
//
// char			*ft_itoabase(t_ull nbr, const char *base)
// {
// 	char		*str;
// 	t_ull		tmp;
// 	t_ull		hello;
//
// 	if (base && *base)
// 	{
// 		if (nbr)
// 		{
// 			hello = (t_ull)nbr;
// 			tmp = nbr;
// 			str = ft_changebase(tmp, base);
// 		}
// 		else
// 		{
// 			str = ft_strnew(1);
// 			str[0] = base[0];
// 		}
// 		return (str);
// 	}
// 	else
// 		return (NULL);
// }

char			*ft_itoabase(int nbr, const char *base)
{
	char	*str;
	t_ui	cp_nbr;
	int		i;
	int		base_len;

	str = NULL;
	if (!nbr || !base || !*base)
		return (strdup("0"));
	cp_nbr = (t_ui)nbr;
	base_len = ft_strlen(base);
	i = 0;
	while (cp_nbr)
	{
		cp_nbr /= base_len;
		i++;
	}
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = 0;
	cp_nbr = (t_ui)nbr;
	while (--i >= 0)
	{
		str[i] = base[cp_nbr % base_len];
		cp_nbr /= base_len;
	}
	return (str);
}
