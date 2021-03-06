/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:47:12 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 18:57:48 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_save_flag(t_f_id *f_id, char c)
{
	if (c == '#')
		f_id->flags = f_id->flags | F_HASH;
	else if (c == '0')
		f_id->flags = f_id->flags | F_ZERO;
	else if (c == '-')
		f_id->flags = f_id->flags | F_MINUS;
	else if (c == ' ')
		f_id->flags = f_id->flags | F_SPACE;
	else if (c == '+')
		f_id->flags = f_id->flags | F_PLUS;
	else
		return (0);
	return (1);
}

void			ft_get_flags(t_f_id *f_id, char *tmp_str)
{
	char		*list;
	int			pos;
	int			i;
	int			save;

	pos = 0;
	save = 1;
	list = ft_strdup("#0- +");
	while (save)
	{
		i = 0;
		save = 0;
		while (list[i])
		{
			if (tmp_str[pos] == list[i])
			{
				ft_save_flag(f_id, tmp_str[pos]);
				save = 1;
				pos++;
			}
			i++;
		}
		f_id->nb_r_c = pos;
	}
	ft_strdel(&list);
}
