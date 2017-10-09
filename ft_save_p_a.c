/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_p_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:31:54 by vpetit            #+#    #+#             */
/*   Updated: 2017/09/28 15:49:34 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static t_ull				*ft_get_max(char *str)
{
	t_ull		max;

	max = (t_ull)INT_MAX;
	if (str && *str)
	{
		if (str[0] == 'l')
			max = (t_ull)ULONG_MAX;
		else if (str[0] == 'h')
			max = str[1] && (str[1] == 'h') ? (t_ull)UCHAR_MAX : \
				(t_ull)USHRT_MAX;
	}
	return (max);
}

static t_ll					*ft_get_min(char *str)
{
	t_ll		min;

	min = (t_ll)INT_MIN;
	if (str && *str)
	{
		if (str[0] == 'l' || str[0] == 'h')
			min = 0;
	}
	return (min);
}

static char					*ft_get_str(t_a_lst *a_lst, t_format_id *f_id)
{
	char		*tmp_str;
	t_ull		max;
	t_ll		min;

	tmp_str = NULL;
	max = ft_get_max(f_id->lenght);
	min = ft_get_min(f_id->lenght);
	if (a_lst->arg_type == 'X')
		tmp_str = ft_strtoupper(a_lst->arg.s);
	else
		tmp_str = a_lst->arg.s;


	tmp_str = ft_itoabase(ptr, "0123456789abcdef");
	return (tmp_str);
}

void		ft_save_p_a(t_a_lst *a_lst, t_format_id *f_id, va_list *ap)
{
	size_t				ptr;
	char				*str;

	if (a_lst && f_id)
	{
		// ft_putstr("-- SAVING pointer : ");
		ptr = (size_t)va_arg(*ap, void*);
		str = ft_get_str(a_lst, f_id);
		a_lst->arg.s = str;
		a_lst->arg_type = f_id->arg_type;
		// ft_putstr(a_lst->arg.s);
		// ft_putstr("\n");
	}
}
