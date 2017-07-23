/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_f_id.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 15:14:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/06/19 18:14:51 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static			void (*(ptr_fct[]))(t_a_lst *, t_format_id *) =
{
	['s'] = ft_print_arg_s,				//String.
	['S'] = ft_print_arg_s,					//String.

	// ['p'] = ft_print_arg_p,				//pointer.
	['d'] = ft_print_arg_i,				//Decimal signed integer.
	['D'] = ft_print_arg_i,				//Decimal signed integer.
	['i'] = ft_print_arg_i,				//Decimal signed integer.
	// ['o'] = ft_print_arg_o,				//Octal integer.
	// ['O'] = ft_print_arg_o,				//Octal integer.
	['u'] = ft_print_arg_u,				//Unsigned integer.
	['U'] = ft_print_arg_u,				//Unsigned integer.
	['x'] = ft_print_arg_x,				//Hex integer.
	['X'] = ft_print_arg_x				//Hex integer.
	// ['c'] = ft_print_arg_c,				//Character.
	// ['C'] = ft_print_arg_c,				//Character.
	// ['%'] = ft_print_arg_percent
	// // ['f'] = printf_format_f,				//double
	// // ['e'] = printf_format_e,				//double.
	// // ['E'] = printf_format_e,				//double.
	// // ['g'] = printf_format_g,				//double.
	// // ['G'] = printf_format_g,				//double.
};

//		hash 			o - xX - e, E, f, F, g, and G + g, G   (c, d, i, n, p, s, and u no effect)
//		minus > plus
// int		space;
// int		zero;		all conversions except n : value is padded on the left with zeros rather than blanks
//				      		If a precision is given with a numeric conversion (d, i, o, u, i, x, and X), the 0 flag is ignored.
// int		hash;

// "sSpdDioOuUxXcC"

t_a_lst			*ft_p_f_id(t_format_id *f_id, t_a_lst *a_lst)
{
	if (a_lst && f_id)
	{
		if (f_id->precision.period && f_id->precision.period == '*')
			!(a_lst = a_lst->next) ? ft_error("ft_p_f_id: a_lst->next = Null ") : NULL;

		// dbug_p_f_id(f_id);
		if (!a_lst)
			ft_error("ft_p_f_id: Should'nt happend\n");

		ptr_fct[(int)f_id->arg_type](a_lst, f_id); // Doit MAJ la Pos (nb_read_char)
		return (a_lst->next);
	}
	return (a_lst);
}
