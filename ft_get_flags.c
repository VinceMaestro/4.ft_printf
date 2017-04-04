/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:47:12 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/04 23:22:53 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_save_flag(t_format_id *format_id, char c)
{
	if (c == '#')
		format_id->flags.hash = 1;
	else if (c == '-')
		format_id->flags.minus = 1;
	else if (c == '+')
		format_id->flags.plus = 1;
	else if (c == ' ')
		format_id->flags.space = 1;
}

void			ft_get_flags(t_format_id *format_id, char *tmp_str)
{
	char	list[5];
	int		pos;
	int		first_digit;
	char	*ptr;

	pos = 1;
	first_digit = 0;
	ft_strcpy(list, "#-+ \0");	//BONUS *$L’
	while (tmp_str[pos] && tmp_str[pos] != format_id->arg_type)
	{
		if (!first_digit && ft_isdigit(tmp_str[pos]))
		{
			if (tmp_str[pos] == '0')
				format_id->flags.zero = 1;
			first_digit = 1;
			pos++;
		}
		(ptr = ft_strchr(list, tmp_str[pos]));
		if (ptr)
			ft_save_flag(format_id, tmp_str[pos]);
		pos++;
	}
}
