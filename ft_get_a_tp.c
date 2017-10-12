/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_a_tp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 03:19:17 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/12 14:48:15 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_get_a_tp(t_f_id *f_id, char *tmp_str)
{
	char	list[15];

	ft_strcpy(list, "sSpdDioOuUxXcC\0");
	if (tmp_str[0])
	{
		if (ft_strchr(list, tmp_str[0]))
			f_id->a_tp = tmp_str[0];
		f_id->nb_r_c = 1;
	}
}
