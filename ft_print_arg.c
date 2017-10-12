/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 15:14:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/12 15:19:27 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static			void (*(ft_ptr_fct[]))(t_a_lst *, t_f_id *) =
{
	['s'] = ft_print_a_s,				//String.
	['S'] = ft_print_a_s,					//String.
	['p'] = ft_print_a_p,				//pointer.
	['d'] = ft_print_a_i,				//Decimal signed integer.
	['D'] = ft_print_a_i,				//Decimal signed integer.
	['i'] = ft_print_a_i,				//Decimal signed integer.
	['o'] = ft_print_a_o,				//Octal integer.
	['O'] = ft_print_a_o,				//Octal integer.
	['u'] = ft_print_a_u,				//Unsigned integer.
	['U'] = ft_print_a_u,				//Unsigned integer.
	['x'] = ft_print_a_x,				//Hex integer.
	['X'] = ft_print_a_x,				//Hex integer.
	['c'] = ft_print_a_c,				//Character.
	['C'] = ft_print_a_c				//Character.
};

//		hash 			o - xX - e, E, f, F, g, and G + g, G   (c, d, i, n, p, s, and u no effect)
//		minus > plus
// int		space;
// int		zero;		all conversions except n : value is padded on the left with zeros rather than blanks
//				      		If a prec is given with a numeric conversion (d, i, o, u, i, x, and X), the 0 flag is ignored.
// int		hash;

// "sSpdDioOuUxXcC"



// static t_a_lst		*ft_print_arg(t_f_id *f_id, t_a_lst *a_lst, char *str)
// {
// 	if (f_id->prec.period == '*')
// 		a_lst = a_lst->next;
// 	if (!f_id->a_tp)
// 		ft_print_a_null(f_id, str); //a_lst est il update a next?
// 	else
// 		a_lst = ft_p_f_id(f_id, a_lst);
// 	return (a_lst);
// }
//



t_a_lst			*ft_print_arg(t_f_id *f_id, t_a_lst *a_lst, char *str)
{
	if (a_lst && f_id)
	{
		if (f_id->prec.period == '*')
			a_lst = a_lst->next;
		if (!f_id->a_tp)
			ft_print_a_null(f_id, str); //a_lst est il update a next?
		else
		{
			if (f_id->prec.period && f_id->prec.period == '*')
				!(a_lst = a_lst->next) ? ft_error("ft_p_f_id: a_lst->next = Null ") : NULL;
			// dbug_p_f_id(f_id);
			if (!a_lst)
				ft_error("ft_p_f_id: Should'nt happend\n");

			ft_ptr_fct[(int)f_id->a_tp](a_lst, f_id); // Doit MAJ la Pos (nb_r_c)
			a_lst = a_lst->next;
		}
	}
	return (a_lst);
}




// t_a_lst			*ft_p_f_id(t_f_id *f_id, t_a_lst *a_lst, char *str)
// 	if (a_lst && f_id)
// 	{
// 		if (f_id->prec.period && f_id->prec.period == '*')
// 			!(a_lst = a_lst->next) ? ft_error("ft_p_f_id: a_lst->next = Null ") : NULL;
// 		// dbug_p_f_id(f_id);
// 		if (!a_lst)
// 			ft_error("ft_p_f_id: Should'nt happend\n");
//
// 		ft_ptr_fct[(int)f_id->a_tp](a_lst, f_id); // Doit MAJ la Pos (nb_r_c)
// 		return (a_lst->next);
// 	}
// 	return (a_lst);
// }
