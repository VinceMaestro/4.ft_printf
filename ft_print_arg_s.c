/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 19:23:01 by vpetit            #+#    #+#             */
/*   Updated: 2017/06/19 19:17:10 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// struct			s_f_id
// {
// 	int			parameter;
// 	uint32_t		flags;
// 	int			width_min;
// 	t_precision	precision;
// 	char		*lenght;
// 	char		arg_type;
// 	int			nb_read_char;
// 	int			nb_print_char;
// 	int			start_pos;
// 	t_format_id	*first;
// 	t_format_id	*next;
// };

void			ft_print_arg_s(t_a_lst *a_lst, t_format_id *f_id)
{
	char		*str;
	int			len;

	len = 0;
	if (a_lst && f_id)
	{
		str = a_lst->arg.s;
		(f_id->width_min ? len = f_id->width_min - ft_strlen(str) : len);
		if (len > 0)
		{
			if (f_id->flags & F_MINUS)
			{
				ft_putstr(str);
				ft_p_x_char(' ', len);
			}
			else
			{
				if (f_id->flags & F_ZERO)
					ft_p_x_char('0', len);
				else
					ft_p_x_char(' ', len);
			}
		}
		if (len <= 0 || f_id->flags & ~F_MINUS || !f_id->flags)
			ft_putstr(str);
		f_id->nb_print_char = ft_strlen(str) + ft_max(len, 0);
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



//
// if (f_id->flags & (F_MINUS | F_ZERO))
// 	;
// else if (f_id->flags & F_MINUS)
// 	;
// else if (f_id->flags & ~F_MINUS)
// 	;
