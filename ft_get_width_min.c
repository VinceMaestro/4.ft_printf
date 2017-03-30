/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width_min.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 03:57:07 by vpetit            #+#    #+#             */
/*   Updated: 2017/03/30 06:51:34 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void			ft_get_width_min(t_format_id *format_id, char *tmp_str)
{
	int		pos;
	char	*first;
	char	*last;
	// char	*nbr_cpy;

	pos = 1;
	last = NULL;
	while (tmp_str[pos] && tmp_str[pos] != '.' && tmp_str[pos] != format_id->arg_type && !last)
	{
		if (!first && ft_isdigit(tmp_str[pos]))
		{
			first = &(tmp_str[pos]);
			if (tmp_str[pos] == '0' && ft_strchr(format_id->flags, '0'))
				first = &(tmp_str[pos + 1]);
		}
		else if (first && !ft_isdigit(tmp_str[pos]))
			last = &(tmp_str[pos]);
		pos++;
	}
	if (first)
	{
		ft_putstr("HELLO\n");
		if (!last)
			last = &tmp_str[pos];
		// ft_putnbr(last - first);
		// nbr_cpy = (char*)malloc(sizeof(char) * (last - first));
		// ft_strncpy(nbr_cpy, last, last - first);
		// format_id->width_min = ft_atoi(nbr_cpy);
	}
}
