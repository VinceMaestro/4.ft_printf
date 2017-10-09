/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_all_f_id.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:53:42 by vpetit            #+#    #+#             */
/*   Updated: 2017/08/30 16:02:16 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_a_lst		*updt_a_lst(t_format_id *f_id, t_a_lst *a_lst, char *str)
{
	if (f_id->precision.period == '*')
		a_lst = a_lst->next;
	if (!f_id->arg_type)
		ft_print_arg_null(f_id, str); //a_lst est il update a next?
	else
		a_lst = ft_p_f_id(f_id, a_lst);
	return (a_lst);
}

int					ft_p_all_f_id(t_format_id *f_id, t_a_lst *a_lst, char *str)
{
	int		len;
	int		pos;

	len = 0;
	pos = 0;
	while (str[pos])
	{
		while (str[pos] && (!f_id || pos < f_id->start_pos))
		{
			ft_putchar(str[pos++]);
			len++;
		}
		if (str[pos] && pos == f_id->start_pos)
		{
			a_lst = updt_a_lst(f_id, a_lst, &str[pos]);
			len += f_id->nb_print_char;
			pos += f_id->nb_read_char;
			!f_id->arg_type ? pos-- : pos;
			f_id = f_id->next;
		}
	}
	return (len);
}
