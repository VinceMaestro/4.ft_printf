/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arg_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 03:19:17 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/05 18:32:03 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_get_arg_type(t_format_id *format_id, char *tmp_str)
{
	int		end;
	char	list[15];
	int		pos;

	pos = 1;
	ft_strcpy(list, "sSpdDioOuUxXcC\0");	// BONUS : b,r,k
	end = 0;
	while (!end && tmp_str[pos])
	{
		if (ft_strchr(list, tmp_str[pos]) || tmp_str[pos] == '%')
		{
			format_id->arg_type = tmp_str[pos];
			end = 1;
		}
		pos++;
	}
	if (!format_id->arg_type)
		ft_error("ft_get_arg_type: Input format error", "usage");
	format_id->nb_read_char = pos;
}
