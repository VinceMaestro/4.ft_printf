/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:41:09 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/05 18:21:21 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

// static void *(tab_info_sup_msg[])(char*) =
// {
// 	["usage"] = "\nusage : printf(\"msg %%[parameter][flags][width][.precision]\
// 		[length]arg_type\", arg)",
// 	["coder"] = "\nYou coder should stop using your feet to code !!"
// }

void	ft_error(char *msg, char *info_sup)
{
	ft_putstr_fd("error : ", 2);
	ft_putstr_fd(msg, 2);
	if (!ft_strcmp(info_sup, "usage"))
		ft_putstr_fd("\nusage : printf(\"msg %%[parameter][flags][width]\
			[.precision][length]arg_type\", arg)");
	// ft_putstr_fd(tab_info_sup_msg[info_sup], 2);
	ft_putstr_fd(" \n", 2);
	exit(1);
}
