/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width_min.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 03:57:07 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/04 23:02:17 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void			ft_get_width_min(t_format_id *format_id, char *tmp_str)
{
	int		pos;
	char	*first;
	char	*last;

	pos = 1;
	last = NULL;
	first = NULL;
	while (tmp_str[pos] && tmp_str[pos] != '.' && tmp_str[pos] != format_id->arg_type && !last)
	{
		if (!first && ft_isdigit(tmp_str[pos]))
		{
			first = &(tmp_str[pos]);
			if (tmp_str[pos] == '0' && format_id->flags.zero)
				first = &tmp_str[pos + 1];
		}
		else if (first && !ft_isdigit(tmp_str[pos]))
			last = &tmp_str[pos];
		pos++;
	}
	if (first)
		format_id->width_min = ft_atoi(first);
}
