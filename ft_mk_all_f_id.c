/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mk_all_f_id.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 16:07:07 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/24 16:01:27 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_f_id	*updt_f_id(t_f_id *f_id, int cpt)
{
	if (!f_id)
		return (ft_init_f_id(f_id, cpt++));
	else
	{
		f_id->next = ft_init_f_id(f_id, cpt++);
		return (f_id->next);
	}
}

t_f_id			*ft_mk_all_f_id(char *str)
{
	int				cpt;
	int				pos;
	t_f_id			*f_id;

	pos = 0;
	cpt = 1;
	f_id = NULL;
	while (str && str[pos])
	{
		if (str[pos] != '%')
			pos++;
		else
		{
			if (!(f_id = updt_f_id(f_id, cpt)))
				return (NULL);
			cpt++;
			f_id->start_pos = pos;
			ft_mk_new_f_id(f_id, &(str[pos]));
			pos += f_id->nb_r_c;
		}
	}
	return (f_id ? f_id->first : NULL);
}
