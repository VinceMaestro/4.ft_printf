/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_a_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 19:20:50 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/16 19:28:38 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

t_a_lst			*ft_init_a_lst(t_a_lst *a_lst)
{
	if (a_lst)
	{
		(!(a_lst->next = (t_a_lst*)malloc(sizeof(t_a_lst))) ? \
			(ft_error("ft_init_a_lst : malloc failed")) : (a_lst));
		a_lst->next->first = a_lst->first;
		a_lst->next->nbr = a_lst->nbr + 1;
		a_lst = a_lst->next;
	}
	else
	{
		(!(a_lst = (t_a_lst*)malloc(sizeof(t_a_lst))) ? \
			(ft_error("ft_init_a_lst : malloc failed")) : (a_lst));
		a_lst->first = a_lst;
		a_lst->nbr = 1;
	}
	a_lst->arg_type = 0;
	a_lst->len = 0;
	a_lst->next = NULL;
	return (a_lst);
}
