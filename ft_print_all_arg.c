/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_all_arg.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:53:42 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/02 12:53:58 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_print_all_arg(t_list_arg *arg_list)
{
	int			done;

	done = 0;
	ft_putstr("BeforeAfterLife\n");
	if (arg_list)
	{
		ft_putstr("AfterLife\n");
		while (arg_list->next || (arg_list->first == arg_list && !done))
		{
			if (!done)
				arg_list = arg_list->next;
			else
				 done++;
			if (ft_strchr("dDioOuUxX", arg_list->arg_type))
				ft_putnbr(arg_list->arg->ll);
			else if (ft_strchr("sScC", arg_list->arg_type))
				ft_putstr(arg_list->arg->s);
			else if (arg_list->arg_type == 'p')
				ft_putstr("Pointer here\n");
			else
				ft_putstr("Autre chose ici\n");
		}
	}
}
