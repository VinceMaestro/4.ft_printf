/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width_min.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 03:57:07 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/05 18:52:07 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

// void			ft_get_width_min(t_format_id *format_id, char *tmp_str)
// {
// 	int		pos;
// 	char	*first;
// 	char	*last;
//
// 	pos = 0;
// 	last = NULL;
// 	first = NULL;
// 	while (tmp_str[pos] && tmp_str[pos] != '.' && tmp_str[pos] != format_id->arg_type && !last)
// 	{
// 		if (!first && ft_isdigit(tmp_str[pos]))
// 		{
// 			first = &(tmp_str[pos]);
// 			if (tmp_str[pos] == '0' && format_id->flags.zero)
// 				first = &tmp_str[pos + 1];
// 		}
// 		else if (first && !ft_isdigit(tmp_str[pos]))
// 			last = &tmp_str[pos];
// 		pos++;
// 	}
// 	if (first)
// 		format_id->width_min = ft_atoi(first);
// }

void			ft_get_width_min(t_formatid *format_id, char *tmp_str)
{
	int		nbr_len;
	int		save_nbr;
	int		nb_read_char;

	nbr_len = 0;
	nb_read_char = 0;
	if ((save_nbr = ft_atoi(&tmp_str[nb_read_char])))
		nbr_len = ft_intlen(save_nbr);
	else if (tmp_str[nb_read_char] == '*')
	{
		nb_read_char++;
		format_id->width_min = -1;
	}
	if (!tmp_str[nbr_len + nb_read_char])
		ft_error("ft_get_width_min: Input format error", "usage");
	if (!format_id->width_min)
		format_id->width_min = ft_max(0, save_nbr);
	format_id->nb_read_char = nbr_len + nb_read_char;
}
