/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:53:42 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/03 17:45:45 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ptr_fct[(int)format_id->arg_type](&ap, format_id);

static void (*(ptr_fct[]))(t_list_arg *, t_format_id *) =
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

static int		ft_print_text(char *str, int pos, t_format_id *format_id)
{
	int		len;

	len = 0;
	if (format_id && str)
	{
		while (format_id->start_pos && pos < format_id->start_pos)
		{
			ft_putchar(str[pos++]);
			len++;
		}
		if (!format_id->arg_type && format_id->start_pos)
		{
			pos = format_id->start_pos + format_id->nb_read_char;
			ft_putchar(str[pos]);
			len++;
			if (format_id->width_min)
				ft_print_several_char(' ', format_id->width_min);
			len += format_id->width_min;
		}
	}
	return (len);
}

int				ft_print_all(t_format_id *format_id ,t_list_arg *arg_list, char *str)
{
	int			pos;
	int			len;
	int			tmp;

	pos = 0;
	len = 0;
	tmp = 1;
	if (format_id && arg_list)
	{
		ft_putstr("=== ENTER PRINT_ALL ===\n");
		while (tmp)
		{
			tmp = ft_print_text(str, pos, format_id);
			len += tmp;
			pos += format_id->nb_read_char;
			if (pos > format_id->start_pos && format_id->next)
				format_id = format_id->next;
			else
				tmp = 0;
		}
		ft_putstr("=== 1 ===\n");
		ptr_fct[(int)format_id->arg_type](arg_list, format_id); // Doit MAJ la Pos (nb_read_char)
		ft_putstr("=== 2 ===\n");
		len += format_id->nb_print_char;
		ft_putstr("=== 3 ===\n");
		while (format_id->next)
		{
			format_id = format_id->next;
			len += ft_print_text(str, pos, format_id);
			pos += format_id->nb_read_char;
			ptr_fct[(int)format_id->arg_type](arg_list, format_id); // Doit MAJ la Pos (nb_read_char)
			len += format_id->nb_print_char;
		}
	}
	ft_putstr("=== EXIT PRINT_ALL ===\n");
	return (len);
}


// while (arg_list->next || (arg_list->first == arg_list))
// {
// 	if (ft_strchr("dDioOuUxX", arg_list->arg_type))
// 		ft_putnbr(arg_list->arg->ll);
// 	else if (ft_strchr("sScC", arg_list->arg_type))
// 		ft_putstr(arg_list->arg->s);
// 	else if (arg_list->arg_type == 'p')
// 		ft_putstr("Pointer here\n");
// 	else
// 		ft_putstr("Autre chose ici\n");
