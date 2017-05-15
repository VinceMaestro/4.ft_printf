/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:53:42 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/15 20:02:48 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ptr_fct[(int)f_id->arg_type](&ap, f_id);

static void (*(ptr_fct[]))(t_a_lst *, t_format_id *) =
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


static t_format_id	*p_arg_w_tp(t_format_id *f_id, t_a_lst *a_lst, char *str)
{
	ptr_fct[(int)f_id->arg_type](a_lst, f_id); // Doit MAJ la Pos (nb_read_char)
}

static t_format_id	*p_arg_w_ntp(t_format_id *f_id, t_a_lst *a_lst, char *str)
{
	////////HEREREREREEERERRERERERE
}

int				ft_print_all(t_format_id *f_id ,t_a_lst *a_lst, char *str)
{
	int		len;

	len = 0;
	while (str[pos])
	{
		while (str[pos] && pos < f_id->start_pos && ++len > 0)
			ft_putchar(str[pos++]);
		if (str[pos])
		{
			if (f_id->arg_type)
				f_id = ft_print_arg_with_type(f_id, a_lst, str);
			else
				f_id = p_arg_w_ntp(f_id, a_lst, str);
		}
	}
}




static void		ft_print_several_char(char c, int nbr)
{
	int		i;

	i = 0;
	if (c && nbr)
	{
		while (i < nbr)
		{
			ft_putchar(c);
			i++;
		}
	}
}



static int		ft_print_text(char *str, int pos, t_format_id *f_id)
{
	int		len;

	len = 0;
	if (f_id && str)
	{
		while (f_id->start_pos && pos < f_id->start_pos)
		{
			ft_putchar(str[pos++]);
			len++;
		}
		if (!f_id->arg_type && f_id->start_pos)
		{
			pos = f_id->start_pos + f_id->nb_read_char;
			ft_putchar(str[pos]);
			len++;
			if (f_id->width_min)
				ft_print_several_char(' ', f_id->width_min);
			len += f_id->width_min;
		}
	}
	return (len);
}



int				ft_print_all(t_format_id *f_id ,t_a_lst *a_lst, char *str)
{
	int			pos;
	int			len;
	int			tmp;

	pos = 0;
	len = 0;
	tmp = 1;
	if (f_id && a_lst)
	{
		ft_putstr("=== ENTER PRINT_ALL ===\n");
		while (tmp)
		{
			ft_print_format_id(f_id);
			tmp = ft_print_text(str, pos, f_id);
			len += tmp;
			pos += tmp;
			if (pos > f_id->start_pos && f_id->next)
				f_id = f_id->next;
			else
				tmp = 0;
			pos += f_id->nb_read_char;
			ft_print_format_id(f_id);
		}
		ft_putstr("=== 1 ===\n");
		// ft_putchar(f_id->arg_type);
		ptr_fct[(int)f_id->arg_type](a_lst, f_id); // Doit MAJ la Pos (nb_read_char)
		ft_putstr("=== 2 ===\n");
		len += f_id->nb_print_char;
		ft_putstr("=== 3 ===\n");
		while (f_id->next)
		{
			f_id = f_id->next;
			len += ft_print_text(str, pos, f_id);
			pos += f_id->nb_read_char;
			ptr_fct[(int)f_id->arg_type](a_lst, f_id); // Doit MAJ la Pos (nb_read_char)
			len += f_id->nb_print_char;
		}
	}
	ft_putstr("=== EXIT PRINT_ALL ===\n");
	return (len);
}


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
