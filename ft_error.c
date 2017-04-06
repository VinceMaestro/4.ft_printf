/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:41:09 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/06 20:03:34 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static const char *(tab_msg_err[]) =
{
	['A'] = "data argument not used by format string\n",
	['C'] = "You coder should stop using your feet to code !!\n",
	['U'] = "usage : printf(\"msg %%[parameter][flags][width][.precision][length]arg_type\", arg)\n",
	['W'] = "field width should have type 'int', but argument has type 'char *' [-Werror,-Wformat]\n",
	['o'] = "flag '0' is ignored when flag '-' is present [-Werror,-Wformat]\n",
	['O'] = "flag '0' results in undefined behavior with 's' conversion specifier [-Werror,-Wformat]\n",
	['P'] = "flag '+' results in undefined behavior with 's' conversion specifier [-Werror,-Wformat]\n",
	['M'] = "cannot mix positional and non-positional arguments in format string [-Werror,-Wformat]\n",
	['I'] = "field width should have type 'int', but argument has type 'char *' [-Werror,-Wformat]\n",
};

void	ft_error(char *msg, char info_sup)
{
	ft_putstr_fd("error : ", 2);
	if (*msg)
		ft_putstr_fd(msg, 2);
	ft_putchar('\n');
	ft_putstr_fd(tab_msg_err[(int)info_sup], 2);
	if (info_sup != 'U')
		ft_putstr_fd(tab_msg_err[(int)'U'], 2);
	ft_putstr_fd(" \n", 2);
	exit(1);
}
