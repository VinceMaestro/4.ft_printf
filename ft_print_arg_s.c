/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 19:23:01 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/03 17:50:29 by vpetit           ###   ########.fr       */
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

static t_list_arg	*ft_arg_from_list(t_list_arg *arg_list, int nbr)
{
	if (arg_list && nbr)
	{
		if (arg_list->nbr > nbr)
			arg_list = arg_list->first;
		while (arg_list->next && arg_list->nbr != nbr)
			arg_list = arg_list->next;
		if (arg_list->nbr != nbr)
		 	return (arg_list);
	}
	else
		ft_error("ft_arg_from_list\n");
	return (NULL);
}

void			ft_print_arg_s(t_list_arg *arg_list, t_format_id *format_id)
{
	char		*str;
	t_list_arg	*ptr;

	if (arg_list && format_id)
	{
		ft_putstr("I'm in ft_print_arg_s\n");
		ft_putstr("=== 1.1 ===\n");
		arg_list = ft_arg_from_list(arg_list, format_id->parameter);
		ft_putstr("=== 1.2 ===\n");
		str = arg_list->arg.s;
		ft_putstr("=== 1.3 ===\n");
		if (format_id->precision.period == '*')
		{
			ft_putstr("=== 1.3.1 ===\n");
			ptr = ft_arg_from_list(arg_list, format_id->parameter + 1);
			((ptr) ? (format_id->precision.width_max = ptr->arg.ll) : 0);
		}
		ft_putstr("=== 1.4 ===\n");
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
