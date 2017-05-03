/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_all_format_id.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 16:54:05 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/03 17:20:47 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_all_format_id(t_format_id *format_id)
{
	if (format_id)
	{
		ft_putstr("-- PRINTING FULL LIST : --\n");
		format_id = format_id->first;
		ft_print_format_id(format_id);
		while (format_id->next)
		{
			format_id = format_id->next;
			ft_print_format_id(format_id);
		}
		ft_putstr("-- END PRINTING LIST : --\n");
	}
}
