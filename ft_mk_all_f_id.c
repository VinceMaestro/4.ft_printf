/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mk_all_f_id.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 16:07:07 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/17 16:07:34 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_format_id			*ft_mk_all_f_id(char *str)
{
	int				cpt;
	int				pos;
	t_format_id		*f_id;

	pos = 0;
	cpt = 1;
	f_id = NULL;
	ft_putstr(str);
	while (str && str[pos])
	{
		if (str[pos] != '%')
			pos++;
		else
		{
			if (!f_id)
				f_id = ft_init_format_id(f_id, cpt++);
			else
			{
				f_id->next = ft_init_format_id(f_id, cpt++);
				f_id = f_id->next;
			}
			f_id->start_pos = pos;
			ft_get_all_infos(f_id, &(str[pos]));
			pos += f_id->nb_read_char;
		}
	}
	f_id = f_id->first;
	return (f_id);
}
