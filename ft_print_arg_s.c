/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 19:23:01 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/17 16:36:55 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// struct			s_f_id
// {
// 	int			parameter;
// 	t_flags		flags;
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
	t_a_lst	*ptr;

	if (a_lst && f_id)
	{
		// a_lst = ft_get_a_from_lst(a_lst, f_id->parameter);
		str = a_lst->arg.s;
		ft_putstr(str);
		if (f_id->precision.period == '*')
		{
			ft_putstr("=== 1.3.1 ===\n");
			ptr = ft_get_a_from_lst(a_lst, f_id->parameter + 1);
			((ptr) ? (f_id->precision.width_max = ptr->arg.ll) : 0);
		}
		if (f_id->flags.space)
			;
		if (f_id->flags.plus)
			;
		if (f_id->flags.minus)
			;
		if (f_id->flags.hash)
			;
		if (f_id->flags.zero)
			;
	}
	else
		ft_putstr("!a_lst or !f_id\n");
}
