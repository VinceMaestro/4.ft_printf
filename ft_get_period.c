/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_period.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 18:01:08 by vpetit            #+#    #+#             */
/*   Updated: 2017/03/30 18:17:58 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_get_period(t_format_id *format_id, char *tmp_str)
{
	int		pos;

	pos = 1;
	while (tmp_str[pos] != format_id->arg_type && !format_id->period)
	{
		if (tmp_str[pos] == '.' || tmp_str[pos] == '*')
			format_id->period = tmp_str[pos];
		pos++;
	}
}
