/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:53:42 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/16 15:42:48 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ptr_fct[(int)f_id->arg_type](&ap, f_id);

int					ft_print_all(t_format_id *f_id ,t_a_lst *a_lst, char *str)
{
	int		len;
	int		pos;

	len = 0;
	pos = -1;
	ft_print_all_f_id(f_id);
	while (str[++pos])
	{
		ft_putstr("Getting into zero \n");
		while (str[pos] && pos < f_id->start_pos)
		{
			ft_putstr("Getting one char \n");
			ft_putchar(str[pos++]);
			len++;
		}

		if (str[pos])
		{
			if (f_id->width_min) //
			{
				ft_putstr("Getting into one \n");
				ft_p_x_char(' ', f_id->width_min);
				len += f_id->width_min;
			}
			if (f_id->arg_type)
			{
				ft_putstr("Getting into two \n");
				p_arg_w_tp(f_id, a_lst);
				len += f_id->nb_print_char;
			}
			pos += f_id->nb_read_char;
		}
	}
	return (len);
}

//
// static int		ft_print_text(char *str, int pos, t_format_id *f_id)
// {
// 	int		len;
//
// 	len = 0;
// 	if (f_id && str)
// 	{
// 		while (f_id->start_pos && pos < f_id->start_pos)
// 		{
// 			ft_putchar(str[pos++]);
// 			len++;
// 		}
// 		if (!f_id->arg_type && f_id->start_pos)
// 		{
// 			pos = f_id->start_pos + f_id->nb_read_char;
// 			ft_putchar(str[pos]);
// 			len++;
// 			if (f_id->width_min)
// 				ft_p_x_char(' ', f_id->width_min);
// 			len += f_id->width_min;
// 		}
// 	}
// 	return (len);
// }
//
//
//
// int				ft_print_all(t_format_id *f_id ,t_a_lst *a_lst, char *str)
// {
// 	int			pos;
// 	int			len;
// 	int			tmp;
//
// 	pos = 0;
// 	len = 0;
// 	tmp = 1;
// 	if (f_id && a_lst)
// 	{
// 		ft_putstr("=== ENTER PRINT_ALL ===\n");
// 		while (tmp)
// 		{
// 			ft_print_format_id(f_id);
// 			tmp = ft_print_text(str, pos, f_id);
// 			len += tmp;
// 			pos += tmp;
// 			if (pos > f_id->start_pos && f_id->next)
// 				f_id = f_id->next;
// 			else
// 				tmp = 0;
// 			pos += f_id->nb_read_char;
// 			ft_print_format_id(f_id);
// 		}
// 		ft_putstr("=== 1 ===\n");
// 		// ft_putchar(f_id->arg_type);
// 		ptr_fct[(int)f_id->arg_type](a_lst, f_id); // Doit MAJ la Pos (nb_read_char)
// 		ft_putstr("=== 2 ===\n");
// 		len += f_id->nb_print_char;
// 		ft_putstr("=== 3 ===\n");
// 		while (f_id->next)
// 		{
// 			f_id = f_id->next;
// 			len += ft_print_text(str, pos, f_id);
// 			pos += f_id->nb_read_char;
// 			ptr_fct[(int)f_id->arg_type](a_lst, f_id); // Doit MAJ la Pos (nb_read_char)
// 			len += f_id->nb_print_char;
// 		}
// 	}
// 	ft_putstr("=== EXIT PRINT_ALL ===\n");
// 	return (len);
// }











// while (a_lst->next || (a_lst->first == a_lst))
// {
// 	if (ft_strchr("dDioOuUxX", a_lst->arg_type))
// 		ft_putnbr(a_lst->arg->ll);
// 	else if (ft_strchr("sScC", a_lst->arg_type))
// 		ft_putstr(a_lst->arg->s);
// 	else if (a_lst->arg_type == 'p')
// 		ft_putstr("Pointer here\n");
// 	else
// 		ft_putstr("Autre chose ici\n");
