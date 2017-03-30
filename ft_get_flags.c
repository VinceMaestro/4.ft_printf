/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:47:12 by vpetit            #+#    #+#             */
/*   Updated: 2017/03/30 19:51:11 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_get_flags(t_format_id *format_id, char *tmp_str)
{
	char	list[5];
	int		pos;
	int		nb_flags;
	int		first_digit;
	char	*ptr;

	pos = 1;
	nb_flags = 0;
	first_digit = 0;
	ft_strcpy(list, "#-+ \0");	//BONUS *$L’
	while (tmp_str[pos] && tmp_str[pos] != format_id->arg_type)
	{
		if (!first_digit && ft_isdigit(tmp_str[pos]))
		{
			if (tmp_str[pos] == '0')
				format_id->flags[nb_flags++] = tmp_str[pos];
			first_digit = 1;
			pos++;
		}
		(ptr = ft_strchr(list, tmp_str[pos]));
		if (ptr)
			format_id->flags[nb_flags++] = *ptr;
		pos++;
	}
}
