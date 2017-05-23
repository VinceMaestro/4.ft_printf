/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arg_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 03:19:17 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/23 10:24:34 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_get_arg_type(t_format_id *f_id, char *tmp_str)
{
	char	list[15];

	ft_strcpy(list, "sSpdDioOuUxXcC\0");	// BONUS : b,r,k
	if (tmp_str[0])
	{
		if (ft_strchr(list, tmp_str[0]) || tmp_str[0] == '%')
			f_id->arg_type = tmp_str[0];
	}
	f_id->nb_read_char = 0;
	if (tmp_str[0] && f_id->arg_type)
		f_id->nb_read_char = 1;
}
