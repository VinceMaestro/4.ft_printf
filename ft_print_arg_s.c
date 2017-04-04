/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 19:23:01 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/04 23:21:05 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// struct			s_format_id
// {
// 	char	flags[5];
// 	int		width_min;
// 	char	period;
// 	int		width_max;
// 	char	arg_type;
// 	int		nb_read_char;
// 	int		nb_print_char;
// };

void	ft_print_arg_s(va_list *ap, t_format_id *format_id)
{
	char	*str;
	ft_putstr("I'm in !\n");
	str = va_arg(*ap, char*);
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
	if (!ap)
		ft_putstr("!ap\n");
	if (!format_id)
		ft_putstr("!format_id\n");
}
