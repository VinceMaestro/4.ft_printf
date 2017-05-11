/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:03:04 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/11 20:14:25 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// gcc main_printf.c libftprintf.a ./libft/libft.a -I libft

static void 		ft_printstr(char *str)
{
	ft_putstr("STRING IS : '");
	ft_putstr(str);
	ft_putstr("'\n");
}

static void			ft_parse_str_infos(t_format_id *format_id, char *str)
{
	int		newpos;

	newpos = 0;
	ft_get_parameter(format_id, &str[newpos]);
	newpos += format_id->nb_read_char;
	ft_get_flags(format_id, &str[newpos]);
	newpos += format_id->nb_read_char;
	ft_get_width_min(format_id, &str[newpos]);
	newpos += format_id->nb_read_char;
	ft_get_precision(format_id, &str[newpos]);
	newpos += format_id->nb_read_char;
	// ft_get_lenght(format_id, &str[newpos]);
	// newpos += format_id->nb_read_char;
	ft_get_arg_type(format_id, &str[newpos]);
	newpos += format_id->nb_read_char;

	format_id->nb_read_char = newpos;
}


t_format_id			*ft_parse_all(char *str)
{
	int				cpt;
	int				pos;
	t_format_id		*format_id;

	pos = 0;
	cpt = 1;
	format_id = NULL;
	while (str && str[pos])
	{
		if (str[pos] != '%' || str[pos + 1] == '%')
			((str[pos] != '%') ? (pos++) : (pos += 2));
		else
		{
			if (!format_id)
			{
				ft_putstr("HERE FIRST CREATTION\n");
				format_id = ft_format_id_init(format_id, cpt++);
			}
			else
			{
				ft_putstr("HERE NEW ELEM\n");
				format_id->next = ft_format_id_init(format_id, cpt++);
				format_id = format_id->next;
			}
			format_id->start_pos = pos;
			ft_parse_str_infos(format_id, &(str[pos]));
			pos += format_id->nb_read_char;
		}
	}
	format_id = format_id->first;
	return (format_id);
}

t_format_id			*ft_get_smaller(t_format_id *format_id)
{
	t_format_id		*smaller;

	ft_putstr("--- 1.1 ---\n");
	smaller = NULL;
	if (format_id)
	{
		smaller = format_id;
		while (format_id->next)
		{
			format_id = format_id->next;
			if (format_id->parameter < smaller->parameter)
				smaller = format_id;
		}
	}
	ft_putstr("--- 1.1 Done ---\n");
	return (smaller);
}

t_format_id			*ft_list_prev(t_format_id *elem)
{
	t_format_id		*prev;

	prev = elem;
	if (prev)
	{
		if ((prev = prev->first) != elem)
		{
			while (prev->next && prev->next != elem)
				prev = prev->next;
		}
	}
	return (prev);
}

void				ft_change_first(t_format_id *elem)
{
	int		i;

	i = 0;
	if (elem)
	{
		ft_putstr("--- 1.2.1 ---\n");
		elem = elem->first;

		elem->first = elem;

		// ft_print_all_format_id(elem);
		while (elem && elem->next)
		{
			ft_putstr("--- 1.2.1... ---\n");
			elem->next->first = elem->first;
			elem = elem->next;
			if (i >= 10)
				ft_error("Stop");
			else
				i++;
		}
	}
}

void				ft_swap_elem(t_format_id *elem1, t_format_id *elem2)
{
	t_format_id		*tmp1;
	t_format_id		*tmp2;
	t_format_id		*prev1;
	t_format_id		*prev2;

	ft_putstr("--- 1.2 ---\n");
	if (elem1 && elem2 && elem1 != elem2)
	{
		prev1 = NULL;
		prev2 = NULL;
		tmp1 = elem1->next;
		tmp2 = elem2->next;
		if (elem1 != elem1->first)
			prev1 = ft_list_prev(elem1);
		if (elem2 != elem2->first)
			prev2 = ft_list_prev(elem2);
		elem1->next = tmp2;
		elem2->next = tmp1;
		((prev1) ? (prev1->next = elem2) : (prev1));
		((prev2) ? (prev2->next = elem1) : (prev2));
		if (!prev1)
			ft_change_first(elem1);
		if (!prev2)
			ft_change_first(elem2);
	}
}

void				ft_sort_list(t_format_id *format_id)
{
	t_format_id		*smaller;

	ft_putstr("--- 1 ---\n");
	if (format_id)
	{
		format_id = format_id->first;
		smaller = ft_get_smaller(format_id);
		ft_swap_elem(smaller, format_id);
		while (smaller->next)
		{
			format_id = smaller->next;
			smaller = ft_get_smaller(format_id);
			ft_swap_elem(smaller, format_id);
		}
	}
	ft_putstr("--- 2 ---\n");
}

int					ft_printf(char *str, ...)
{
	int				len;
	t_format_id		*format_id;

	// t_list_arg		*arg_list;

	ft_printstr(str);
	ft_putstr("PARSING : START\n");
	format_id = ft_parse_all(str);
	ft_putstr("PARSING : SUCESS\n");

	ft_print_all_format_id(format_id);

	ft_sort_list(format_id);

	ft_print_all_format_id(format_id);

	ft_putstr("Fetching Arguments : ");

	// arg_list = ft_get_all_args(format_id, str);

	ft_putstr("Sucess\n");

	// len = ft_print_all(format_id, arg_list, str);

	len = 0;

	// ft_printstr(str);

	ft_putstr("ENDING\n");


	return (len);
}
