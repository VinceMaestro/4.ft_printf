/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_null.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 19:14:47 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/23 13:57:02 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_print_arg_null(t_format_id *f_id, char *str)
{
	int		len;

	len = 0;
	if (str && f_id)
	{
		(f_id->width_min ? len = f_id->width_min - 1 : len);
		ft_put_x_char(' ', len);
		f_id->nb_print_char += ft_max(len, 0);
	}
	else
		ft_error("ft_print_arg_null: Shouldn't happend");
}
