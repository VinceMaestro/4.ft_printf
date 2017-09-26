/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_all_infos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 19:14:21 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/26 15:44:41 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void			ft_get_all_infos(t_format_id *f_id, char *str)
{
	int		newpos;

	newpos = 0;
	ft_get_parameter(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	// printf("\n--- parameter update : %i\n", newpos);
	ft_get_flags(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	// printf("\n--- flags update : %i\n", newpos);
	ft_get_width_min(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	// printf("\n--- width_min update : %i\n", newpos);
	ft_get_precision(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	// printf("\n--- precision update : %i\n", newpos);
	ft_get_lenght(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	// printf("\n--- lenght update : %i\n", newpos);
	ft_get_arg_type(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	// printf("\n--- arg_type update : %i\n", newpos);
	f_id->nb_read_char = newpos;
}
