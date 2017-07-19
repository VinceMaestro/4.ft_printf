/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_all_infos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 19:14:21 by vpetit            #+#    #+#             */
/*   Updated: 2017/06/13 21:18:54 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_get_all_infos(t_format_id *f_id, char *str)
{
	int		newpos;

	newpos = 0;
	ft_get_parameter(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	ft_get_flags(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	ft_get_width_min(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	ft_get_precision(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	ft_get_lenght(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	ft_get_arg_type(f_id, &str[newpos]);
	newpos += f_id->nb_read_char;
	f_id->nb_read_char = newpos;
}
