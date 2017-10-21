/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 14:25:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 18:19:43 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_free_all_f_id(t_f_id *f_id)
{
	t_f_id		*next;

	while (f_id)
	{
		next = f_id->next;
		ft_strdel(&f_id->lenght);
		f_id->first = NULL;
		f_id->next = NULL;
		f_id = next;
	}
}

static void		ft_free_all_a_lst(t_a_lst *a_lst)
{
	t_a_lst		*next;

	while (a_lst)
	{
		next = a_lst->next;
		if (ft_strchr("sSxX", a_lst->a_tp))
			ft_strdel(&a_lst->a.s);
		a_lst->first = NULL;
		a_lst->next = NULL;
		a_lst = next;
	}
}

void			ft_free_all(t_a_lst *a_lst, t_f_id *f_id)
{
	ft_free_all_a_lst(a_lst);
	ft_free_all_f_id(f_id);
}
