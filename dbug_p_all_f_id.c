/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dbug_p_all_f_id.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 16:54:05 by vpetit            #+#    #+#             */
/*   Updated: 2017/06/13 20:31:15 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	dbug_p_all_f_id(t_format_id *f_id)
{
	if (f_id)
	{
		ft_putstr("-- PRINTING FULL LIST : --\n");
		f_id = f_id->first;
		dbug_p_f_id(f_id);
		while (f_id->next)
		{
			f_id = f_id->next;
			dbug_p_f_id(f_id);
		}
		ft_putstr("-- END PRINTING LIST : --\n");
	}
}
// dbug_p_all_f_id
