/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 19:23:01 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/02 18:56:32 by vpetit           ###   ########.fr       */
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
	// char	*new_str;

	ft_putstr("I'm in !\n");
	((format_id->precision.period == '*') ? (format_id->precision.width_max = \
		va_arg(*ap, int)) : (format_id->precision.width_max = 0));
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
	if (!ap)
		ft_putstr("!ap\n");
	if (!format_id)
		ft_putstr("!format_id\n");
}
