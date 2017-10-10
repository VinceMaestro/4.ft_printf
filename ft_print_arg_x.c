/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 10:58:29 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/10 13:27:46 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// str = (!f_id->lenght && (ptr > INT_MAX || ptr < INT_MIN)) ? strdup("0") :
	// ft_itoabase(ptr, "0123456789abcdef");

void						ft_print_arg_x(t_a_lst *a_lst, t_format_id *f_id)
{
	char		*str;

	str = NULL;
	if (a_lst && f_id)
	{
		str = a_lst->arg.s;
		ft_putstr(str);
		f_id->nb_print_char = ft_strlen(str);
	}
	else
		ft_error("ft_print_arg_p: Should'nt hapend");
}
