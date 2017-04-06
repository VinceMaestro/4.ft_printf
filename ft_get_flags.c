/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:47:12 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/06 18:00:43 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_save_flag(t_format_id *format_id, char c)
{
	if (c == '0')
		format_id->flags.zero = 1;
	else if (c == '#')
		format_id->flags.hash = 1;
	else if (c == '-')
		format_id->flags.minus = 1;
	else if (c == '+')
		format_id->flags.plus = 1;
	else if (c == ' ')
		format_id->flags.space = 1;
	else
		return (1);
	return (0);
}

// static void		*(tab_flags[])(t_format_id *) =
// {
// 	['0'] = format_id->flags.zero,
// 	['#'] = format_id->flags.hash,
// 	['-'] = format_id->flags.minus,
// 	['+'] = format_id->flags.plus,
// 	[' '] = format_id->flags.space
// };

void			ft_get_flags(t_format_id *format_id, char *tmp_str)
{
	char	list[6];
	int		pos;
	int		first_digit;
	// char	*ptr;
	int		end;

	pos = 0;
	end = 0;
	first_digit = 0;
	ft_strcpy(list, "#-+ 0\0");	//BONUS *$L’
	while (tmp_str[pos] && !end)// && ptr = ft_strchr(list, tmp_str[pos]))
	{
		// tab_flags[tmp_str[pos]] = 1;
		end = ft_save_flag(format_id, tmp_str[pos]);
		!end ? pos++ : pos;
	}
	format_id->nb_read_char = pos;
}
