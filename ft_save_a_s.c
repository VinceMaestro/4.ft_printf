/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_a_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:31:35 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 18:44:18 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static void		ft_save_c(t_a_lst *a_lst, va_list *ap)
{
	t_u_nbr		nbr;
	char		*str;
	wchar_t		w_str;

	if (a_lst->a_tp == 'c')
	{
		nbr.uc = (t_uchar)va_arg(*ap, void*);
		a_lst->a.ll = nbr.uc;
	}
	else if (a_lst->a_tp == 'C')
	{
		w_str = (wchar_t)va_arg(*ap, void*);
		str = ft_memalloc(4 + 1);
		ft_bzero(str, 4 + 1);
		ft_wcharto_str(&str, 0, w_str);
		a_lst->a.s = str;
	}
}

static void		ft_save_s(t_a_lst *a_lst, t_f_id *f_id, va_list *ap)
{
	char		*str;
	wchar_t		*w_str;

	if (a_lst->a_tp == 's')
	{
		str = (char*)va_arg(*ap, void*);
		a_lst->a.s = ft_strdup(str);
	}
	else if (a_lst->a_tp == 'S')
	{
		w_str = (wchar_t*)va_arg(*ap, void*);
		a_lst->a.s = ft_wstrto_nstr(w_str, f_id->prec.period && \
			f_id->prec.nb_dgt ? ft_abs(f_id->prec.nb_dgt) : 0);
	}
}

void			ft_save_a_s(t_a_lst *a_lst, t_f_id *f_id, va_list *ap)
{
	if (a_lst && f_id)
	{
		a_lst->a_tp = f_id->lenght && f_id->lenght[0] == 'l' ? \
			ft_toupper(f_id->a_tp) : f_id->a_tp;
		if (f_id->a_tp && ft_strchr("cC", f_id->a_tp))
			ft_save_c(a_lst, ap);
		else if (f_id->a_tp && ft_strchr("sS", f_id->a_tp))
			ft_save_s(a_lst, f_id, ap);
	}
}
