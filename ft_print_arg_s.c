/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 19:23:01 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/03 14:43:52 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// struct			s_format_id
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

void	ft_print_arg_s(t_list_arg *arg_list, t_format_id *format_id)
{
	char	*str;

	if (arg_list && format_id)
	{
		ft_putstr("I'm in !\n");
		((format_id->precision.period == '*') ? (format_id->precision.width_max = \
			ft_arg_from_list(arg_list, format_id-> ?? )) : (format_id->precision.width_max = 0));
		str = va_arg(*ap, char*);
		if (format_id->flags.space)
			;
		if (format_id->flags.plus)
			;
		if (format_id->flags.minus)
			;
		if (format_id->flags.hash)
			;
		if (format_id->flags.zero)
			;
	}
	else
		ft_putstr("!arg_list or !format_id\n");
}
