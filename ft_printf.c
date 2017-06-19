/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:03:04 by vpetit            #+#    #+#             */
/*   Updated: 2017/06/19 17:27:50 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// gcc main_printf.c libftprintf.a ./libft/libft.a -I libft

static void 		ft_printstr(char *str)
{
	ft_putstr("STRING IS : '");
	ft_putstr(str);
	ft_putstr("'\n");
}

int					ft_printf(char *str, ...)
{
	va_list			ap;
	int				len;
	t_format_id		*f_id;
	t_a_lst			*a_lst;

	ft_printstr(str);
	ft_putstr("printf : Making all format_id ... \n");
	f_id = ft_mk_all_f_id(str);
	ft_putstr(" DONE\n");

	// dbug_p_all_f_id(f_id); // for debugg

	ft_putstr("printf : Making all arg_list ... \n");

	va_start(ap, str);
	a_lst = ft_mk_all_a_lst(f_id, &ap);
	va_end(ap);

	ft_updt_all_precision(f_id, a_lst);

	ft_putstr(" DONE\n");

	ft_putstr("printf : Printing all ... \n");
	len = ft_p_all_f_id(f_id, a_lst, str);

	// ft_free_unions

	// ft_printstr(str);

	ft_putstr("\nprintf : Printing all ... DONE\n");


	return (len);
}
