/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 19:23:01 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/26 18:04:39 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_print_arg_s(t_a_lst *a_lst, t_format_id *f_id)
{
	char		*str;
	int			len;
	int			toprint;

	len = 0;
	if (a_lst && f_id)
	{
		str = a_lst->arg.s;
		// toprint = ft_min((int)ft_strlen(str), f_id->precision.width_max);
		if (f_id->precision.period)
			toprint = ft_min((int)ft_strlen(str), \
				ft_abs(f_id->precision.width_max));
		else
			toprint = (int)ft_strlen(str);
		len = ft_max(0, f_id->width_min - toprint);
		if (len > 0)
		{
			if (f_id->flags & F_MINUS)
			{
				ft_putnstr(str, toprint);
				ft_put_x_char(' ', len);
			}
			else
			{
				if (f_id->flags & F_ZERO)
					ft_put_x_char('0', len);
				else
					ft_put_x_char(' ', len);
			}
		}
		if (len <= 0 || f_id->flags & ~F_MINUS || !f_id->flags)
			ft_putnstr(str, toprint);

		f_id->nb_print_char = toprint + ft_max(len, 0);
		// if (f_id->flags.plus)
		// 	;
		// if (f_id->flags.hash)
		// 	;
		// if (f_id->flags.space)
		// 	;
	}
	else
		ft_putstr("ft_print_arg_s: !a_lst or !f_id\n");
}
