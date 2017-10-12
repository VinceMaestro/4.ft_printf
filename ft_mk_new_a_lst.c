/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mk_new_a_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 20:37:14 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/12 14:58:14 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_a_lst			*ft_mk_new_a_lst(t_a_lst *a_lst)
{
	if (a_lst)
	{
		a_lst->next = ft_init_a_lst(a_lst);
		a_lst = a_lst->next;
	}
	else
		a_lst = ft_init_a_lst(a_lst);
	return (a_lst);
}
