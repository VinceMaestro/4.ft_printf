/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_seek_err.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 17:29:47 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/23 17:33:18 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static int		ft_seek_err_f_id(t_f_id *f_id)
{
	while (f_id)
	{
		if (f_id->err == -1)
			return (1);
		f_id = f_id->next;
	}
	return (0);
}

static int		ft_seek_err_a_lst(t_a_lst *a_lst)
{
	while (a_lst)
	{
		if (a_lst->err == -1)
			return (1);
		a_lst = a_lst->next;
	}
	return (0);
}

int				ft_seek_err(t_a_lst *a_lst, t_f_id *f_id)
{
	int		ret;

	ret = 0;
	ret	+= ft_seek_err_a_lst(a_lst);
	ret	+= ft_seek_err_f_id(f_id);
	return (ret);
}
