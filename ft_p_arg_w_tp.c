/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_arg_w_tp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 15:14:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/23 17:58:35 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static			void (*(ptr_fct[]))(t_a_lst *, t_format_id *) =
{
	['s'] = ft_print_arg_s,				//String.
	['S'] = ft_print_arg_s					//String.

	// ['p'] = ft_print_arg_p,				//pointer.
	// ['d'] = ft_print_arg_d,				//Decimal signed integer.
	// ['D'] = ft_print_arg_d,				//Decimal signed integer.
	// ['i'] = ft_print_arg_d,				//Decimal signed integer.
	// ['o'] = ft_print_arg_o,				//Octal integer.
	// ['O'] = ft_print_arg_o,				//Octal integer.
	// ['u'] = ft_print_arg_u,				//Unsigned integer.
	// ['U'] = ft_print_arg_u,				//Unsigned integer.
	// ['x'] = ft_print_arg_x,				//Hex integer.
	// ['X'] = ft_print_arg_x,				//Hex integer.
	// ['c'] = ft_print_arg_c,				//Character.
	// ['C'] = ft_print_arg_c,				//Character.
	// ['%'] = ft_print_arg_percent
	// // ['f'] = printf_format_f,				//double
	// // ['e'] = printf_format_e,				//double.
	// // ['E'] = printf_format_e,				//double.
	// // ['g'] = printf_format_g,				//double.
	// // ['G'] = printf_format_g,				//double.
};

//		hash 			o - xX - a, A, e, E, f, F, g, and G + g, G   (c, d, i, n, p, s, and u no effect)
//		minus > plus
// int		space;
// int		zero;		all conversions except n : value is padded on the left with zeros rather than blanks
//				      		If a precision is given with a numeric conversion (d, i, o, u, i, x, and X), the 0 flag is ignored.
// int		hash;


// ft_p_f_id(f_id, a_lst);

// "sSpdDioOuUxXcC"

t_a_lst			*ft_p_arg_w_tp(t_format_id *f_id, t_a_lst *a_lst)
{
	int			len;

	len = ft_get_a_len(a_lst);
	if (a_lst && f_id)
	{

		if (f_id->precision.period)
		{
			if (f_id->precision.period == '*')
				a_lst = get_precision(a_lst, f_id);

		}

		if (f_id->flags & (F_MINUS | F_ZERO))

		if (f_id->flags & F_MINUS)

		if (f_id->flags & ~F_MINUS)





		if (f_id->flags & ~F_MINUS)






		ptr_fct[(int)f_id->arg_type](a_lst, f_id); // Doit MAJ la Pos (nb_read_char)
		if (f_id->precision.period == '*')
			return (a_lst->next->next);
		return (a_lst->next);
	}
	return (a_lst);
}

// void			ft_print_arg_s(t_a_lst *a_lst, t_format_id *f_id)
// {
// 	char		*str;
// 	int			len;
//
// 	len = 0;
// 	if (a_lst && f_id)
// 	{
// 		if (f_id->precision.period == '*')
// 		{
// 			ft_putstr("=== 1.3.1 ===\n");
// 			f_id->precision.width_max = a_lst->arg.ll;
// 			(!a_lst->next ? ft_error("print_arg_s : missing arg") : 0);
// 			a_lst = a_lst->next;
// 		}
// 		str = a_lst->arg.s;
// 		(f_id->width_min ? len = f_id->width_min - ft_strlen(str) : len);
// 		// ft_putnbr(len);
// 		if (f_id->flags & ~F_MINUS && len > 0)
// 		{
// 			if (f_id->flags & F_ZERO)
// 				ft_p_x_char('0', f_id->width_min - ft_strlen(str));
// 			else
// 				ft_p_x_char(' ', f_id->width_min - ft_strlen(str));
// 		}
// 		else if (f_id->flags & F_MINUS && len > 0)
// 		{
// 			ft_putstr(str);
// 			ft_p_x_char(' ', f_id->width_min - ft_strlen(str));
// 		}
// 		if (len <= 0 || f_id->flags & ~F_MINUS)
// 			ft_putstr(str);
// 		f_id->nb_print_char += ft_strlen(str) + ft_max(len, 0);
// 	}
