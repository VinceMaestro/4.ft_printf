/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:39:54 by vpetit            #+#    #+#             */
/*   Updated: 2017/04/19 18:42:22 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

typedef struct s_flags		t_flags;
typedef struct s_precision	t_precision;
typedef struct s_format_id	t_format_id;
typedef struct s_list_args	t_list_arg;
typedef union u_union		t_union;

struct			s_flags
{
	int		minus;
	int		plus;
	int		space;
	int		zero;
	int		hash;
};

struct			s_precision
{
	char	period;
	int		width_max;
};

struct			s_format_id
{
	int			parameter;
	t_flags		flags;
	int			width_min;
	t_precision	precision;
	char		*lenght;
	char		arg_type;
	int			nb_read_char;
	int			nb_print_char;
	int			start_pos;
	t_format_id	*first;
	t_format_id	*next;
};

union			u_union
{
	char const *s;
	void *p;
	long long int ll;
	long double ld;
};

struct			s_list_arg
{
	int				nbr;
	char			type;
	t_union			*arg;
	size_t			len;
	t_list_arg		*next;
	t_list_arg		*first;
};

int				ft_printf(char *str, ...);
void			ft_error(char *msg);
void			ft_print_format_id(t_format_id *format_id);
void			ft_print_arg_s(va_list *ap, t_format_id *format_id);
void			ft_print_arg_p(va_list *ap, t_format_id *format_id);
void			ft_print_arg_d(va_list *ap, t_format_id *format_id);
void			ft_print_arg_o(va_list *ap, t_format_id *format_id);
void			ft_print_arg_u(va_list *ap, t_format_id *format_id);
void			ft_print_arg_x(va_list *ap, t_format_id *format_id);
void			ft_print_arg_c(va_list *ap, t_format_id *format_id);
void			ft_print_arg_percent(va_list *ap, t_format_id *format_id);

void			ft_get_parameter(t_format_id *format_id, char *tmp_str);
void			ft_get_flags(t_format_id *format_id, char *tmp_str);
void			ft_get_width_min(t_format_id *format_id, char *tmp_str);

void			ft_get_precision(t_format_id *format_id, char *tmp_str);

void			ft_get_lenght(t_format_id *format_id, char *tmp_str); /////////////// CREATE

void			ft_get_arg_type(t_format_id *format_id, char *tmp_str);

#endif
