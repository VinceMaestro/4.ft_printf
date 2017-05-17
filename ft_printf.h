/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:39:54 by vpetit            #+#    #+#             */
/*   Updated: 2017/05/17 16:21:51 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

typedef struct s_flags		t_flags;
typedef struct s_precision	t_precision;
typedef struct s_format_id	t_format_id;
typedef struct s_list_arg	t_a_lst;
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
	void			*p;
	char 			*s;
	long long int	ll;
	long double		ld;
};

struct			s_list_arg
{
	int				nbr;
	char			arg_type;
	t_union			arg;
	size_t			len;
	t_a_lst			*next;
	t_a_lst			*first;
};

void			ft_error(char *msg);
int				ft_printf(char *str, ...);
int				ft_print_all(t_format_id *f_id ,t_a_lst *a_lst, char *str);

void			ft_print_all_f_id(t_format_id *f_id);
void			ft_print_f_id(t_format_id *f_id);
void			ft_p_x_char(char c, int nbr);

t_a_lst			*ft_p_arg_w_tp(t_format_id *f_id, t_a_lst *a_lst);
void			ft_print_arg_s(t_a_lst *a_lst, t_format_id *f_id);
void			ft_print_arg_p(t_a_lst *a_lst, t_format_id *f_id);
void			ft_print_arg_d(t_a_lst *a_lst, t_format_id *f_id);
void			ft_print_arg_o(t_a_lst *a_lst, t_format_id *f_id);
void			ft_print_arg_u(t_a_lst *a_lst, t_format_id *f_id);
void			ft_print_arg_x(t_a_lst *a_lst, t_format_id *f_id);
void			ft_print_arg_c(t_a_lst *a_lst, t_format_id *f_id);

t_format_id		*ft_mk_all_f_id(char *str);
void			ft_get_all_infos(t_format_id *f_id, char *str);
void			ft_get_parameter(t_format_id *f_id, char *tmp_str);
void			ft_get_flags(t_format_id *f_id, char *tmp_str);
void			ft_get_width_min(t_format_id *f_id, char *tmp_str);
void			ft_get_precision(t_format_id *f_id, char *tmp_str);
void			ft_get_lenght(t_format_id *f_id, char *str);
void			ft_get_arg_type(t_format_id *f_id, char *tmp_str);
t_a_lst			*ft_get_a_from_lst(t_a_lst *a_lst, int nbr);
t_a_lst			*ft_new_a_lst_elem(t_a_lst *a_lst);
t_a_lst			*ft_mk_all_a_lst(t_format_id *f_id, va_list *ap);
t_a_lst			*ft_init_a_lst(t_a_lst *a_lst);


t_format_id		*ft_init_format_id(t_format_id *f_id, int nbr);

#endif
