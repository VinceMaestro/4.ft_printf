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
	int			len;

	len = 0;
	if (a_lst && f_id)
	{
		(f_id->width_min ? len = f_id->width_min - ft_strlen(str) : len);
		if (f_id->precision.period == '*')
		{
			ft_putstr("=== 1.3.1 ===\n");
			f_id->precision.width_max = a_lst->arg.ll;
			(!a_lst->next ? ft_error("print_arg_s : missing arg") : 0);
			a_lst = a_lst->next;
		}
		str = a_lst->arg.s;
		if (!f_id->flags.minus && len > 0)
		{
			if (f_id->flags.zero)
				ft_p_x_char('0', f_id->width_min - ft_strlen(str));
			else
				ft_p_x_char(' ', f_id->width_min - ft_strlen(str));
		}
		else if (f_id->flags.minus && len > 0)
		{
			ft_putstr(str);
			ft_p_x_char(' ', f_id->width_min - ft_strlen(str));
		}
		else
			ft_putstr(str);
		f_id->nb_print_char += ft_strlen(str) + ft_max(len, 0);
		// if (f_id->flags.plus)
		// 	;
		// if (f_id->flags.hash)
		// 	;
		// if (f_id->flags.space)
		// 	;
	}
	else
		ft_putstr("!a_lst or !f_id\n");
}
