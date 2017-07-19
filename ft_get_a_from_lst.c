/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_a_from_lst.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 19:17:36 by vpetit            #+#    #+#             */
/*   Updated: 2017/06/13 20:38:21 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_a_lst			*ft_get_a_from_lst(t_a_lst *a_lst, int nbr)
{
	if (a_lst && nbr)
	{
		if (a_lst->nbr > nbr)
			a_lst = a_lst->first;
		while (a_lst->next && a_lst->nbr != nbr)
			a_lst = a_lst->next;
		if (a_lst->nbr == nbr)
		 	return (a_lst);
	}
	else
		ft_error("ft_get_a_from_lst\n");
	return (NULL);
}
