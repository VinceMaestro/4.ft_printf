/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mk_all_f_id.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 16:07:07 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/23 15:13:47 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_format_id	*updt_f_id(t_format_id *f_id, int cpt)
{
	if (!f_id)
		return (ft_init_format_id(f_id, cpt++));
	else
	{
		f_id->next = ft_init_format_id(f_id, cpt++);
		return (f_id->next);
	}
}

t_format_id			*ft_mk_all_f_id(char *str)
{
	int				cpt;
	int				pos;
	t_format_id		*f_id;

	pos = 0;
	cpt = 1;
	f_id = NULL;
	while (str && str[pos])
	{
		if (str[pos] != '%')
			pos++;
		else
		{
			f_id = updt_f_id(f_id, cpt);
			cpt++;
			f_id->start_pos = pos;
			ft_get_all_infos(f_id, &(str[pos]));
			pos += f_id->nb_read_char;
			ft_putstr("Getting all infos: pos = ");
			ft_putnbr(pos);
		}
	}
	return (f_id->first);
}
