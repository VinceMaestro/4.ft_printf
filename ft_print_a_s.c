/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 19:23:01 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/17 17:44:33 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_print_a_s(t_a_lst *a_lst, t_f_id *f_id)
{
	char		*str;
	int			len;
	int			toprint;

	len = 0;
	if (a_lst && f_id && a_lst->a.s)
	{
		str = a_lst->a.s;
		// toprint = ft_min((int)ft_strlen(str), f_id->prec.nb_dgt);
		if (f_id->prec.period)
			toprint = ft_min((int)ft_strlen(str), \
				ft_abs(f_id->prec.nb_dgt));
		else
			toprint = (int)ft_strlen(str);
		len = ft_max(0, f_id->w_min - toprint);
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

		f_id->nb_p_c = toprint + ft_max(len, 0);
		// if (f_id->flags.plus)
		// 	;
		// if (f_id->flags.hash)
		// 	;
		// if (f_id->flags.space)
		// 	;
	}
	else if (a_lst && f_id)
		{
			ft_putstr("(null)");
			f_id->nb_p_c = 6;
		}
}
