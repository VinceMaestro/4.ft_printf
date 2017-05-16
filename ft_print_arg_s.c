/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 19:23:01 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/16 15:36:38 by vpetit           ###   ########.fr       */
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

static t_a_lst	*ft_arg_from_list(t_a_lst *a_lst, int nbr)
{
	if (a_lst && nbr)
	{
		if (a_lst->nbr > nbr)
			a_lst = a_lst->first;
		while (a_lst->next && a_lst->nbr != nbr)
			a_lst = a_lst->next;
		if (a_lst->nbr != nbr)
		 	return (a_lst);
	}
	else
		ft_error("ft_arg_from_list\n");
	return (NULL);
}

void			ft_print_arg_s(t_a_lst *a_lst, t_format_id *f_id)
{
	char		*str;
	t_a_lst	*ptr;

	ft_putstr("Getting into three \n");
	if (a_lst && f_id)
	{
		ft_putstr("I'm in ft_print_arg_s\n");
		ft_putstr("=== 1.1 ===\n");
		a_lst = ft_arg_from_list(a_lst, f_id->parameter);
		ft_putstr("=== 1.2 ===\n");
		str = a_lst->arg.s;
		ft_putstr("=== 1.3 ===\n");
		if (f_id->precision.period == '*')
		{
			ft_putstr("=== 1.3.1 ===\n");
			ptr = ft_arg_from_list(a_lst, f_id->parameter + 1);
			((ptr) ? (f_id->precision.width_max = ptr->arg.ll) : 0);
		}
		ft_putstr("=== 1.4 ===\n");
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
