/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lenght.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 17:16:55 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/23 17:20:48 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void			ft_get_lenght(t_f_id *f_id, char *str)
{
	f_id->nb_r_c = 0;
	if (ft_strchr("hlzj", str[0]))
	{
		f_id->nb_r_c++;
		if (!(f_id->lenght = (char*)malloc(sizeof(char) * 3)))
			f_id->err = -1;
		f_id->lenght[0] = str[0];
		f_id->lenght[1] = 0;
		if ((str[1] == 'h' || str[1] == 'l') && str[0] == str[1])
		{
			f_id->lenght[1] = str[1];
			f_id->nb_r_c++;
		}
		f_id->lenght[2] = 0;
	}
}
