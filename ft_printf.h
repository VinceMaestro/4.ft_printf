/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:39:54 by vpetit            #+#    #+#             */
/*   Updated: 2017/06/19 19:15:24 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define F_HASH		(1 << 0)
# define F_ZERO		(1 << 1)
# define F_MINUS	(1 << 2)
# define F_SPACE	(1 << 3)
# define F_PLUS		(1 << 4)


// # define A_TYPE_ "sSpdDioOuUxXcC"
// # define LEN_ "hlzjhhll"

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

typedef struct s_lst		t_lst;
// typedef struct s_flags		t_flags;
typedef struct s_precision	t_precision;
typedef struct s_format_id	t_format_id;
typedef struct s_list_arg	t_a_lst;
typedef union u_union		t_union;

struct			s_lst
{
	char	*cont;
	int		size_t;
	t_lst	*first;
	t_lst	*next;
};

struct			s_precision
{
	char	period;
	int		width_max;
};

struct			s_format_id
{
	int			parameter;
	uint32_t	flags;
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
	void				*p;
	char 				*s;
	long long			ll;
	unsigned long long	ull;
	long double			ld;
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
int				ft_p_all_f_id(t_format_id *f_id ,t_a_lst *a_lst, char *str);

void			dbug_p_all_f_id(t_format_id *f_id);
void			dbug_p_f_id(t_format_id *f_id);
void			ft_p_x_char(char c, int nbr);

t_a_lst			*ft_p_f_id(t_format_id *f_id, t_a_lst *a_lst);
void			ft_print_arg_s(t_a_lst *a_lst, t_format_id *f_id);
void			ft_print_arg_p(t_a_lst *a_lst, t_format_id *f_id);
void			ft_print_arg_i(t_a_lst *a_lst, t_format_id *f_id);
void			ft_print_arg_o(t_a_lst *a_lst, t_format_id *f_id);
void			ft_print_arg_u(t_a_lst *a_lst, t_format_id *f_id);
void			ft_print_arg_x(t_a_lst *a_lst, t_format_id *f_id);
void			ft_print_arg_c(t_a_lst *a_lst, t_format_id *f_id);
void			ft_print_arg_null(t_format_id *f_id, char *str);

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
void			ft_updt_all_precision(t_format_id *f_id, t_a_lst *a_lst);

t_format_id		*ft_init_format_id(t_format_id *f_id, int nbr);

#endif
