/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:39:54 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/21 13:05:14 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define F_HASH		(1 << 0)
# define F_ZERO		(1 << 1)
# define F_MINUS	(1 << 2)
# define F_SPACE	(1 << 3)
# define F_PLUS		(1 << 4)

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdint.h>
# include <limits.h>

typedef struct s_prec		t_prec;
typedef struct s_f_id		t_f_id;
typedef struct s_list_a		t_a_lst;
typedef union u_union		t_union;

typedef struct s_p_inf		t_p_inf;

struct			s_p_inf
{
	int			len_a;
	int			nbr_pad_w_min;
	int			nbr_pad_dgt;
	int			pad_rt;
	char		pad_w_min;
	char		pad_dgt;
	char		*first_c;
};

struct			s_prec
{
	char	period;
	int		nb_dgt;
};

struct			s_f_id
{
	int			param;
	uint32_t	flags;
	int			w_min;
	t_prec		prec;
	char		*lenght;
	char		a_tp;
	int			nb_r_c;
	int			nb_p_c;
	int			start_pos;
	t_f_id		*first;
	t_f_id		*next;
};

union			u_union
{
	char				*s;
	long long			ll;
	unsigned long long	ull;
};

struct			s_list_a
{
	int				nbr;
	char			a_tp;
	t_union			a;
	size_t			len;
	t_a_lst			*next;
	t_a_lst			*first;
};

void			ft_error(char *msg);
void			dbug_p_all_f_id(t_f_id *f_id);
void			dbug_p_f_id(t_f_id *f_id);
void			dbug_infos(t_p_inf *infos);

int				ft_printf(char *str, ...);

int				ft_print_all(t_f_id *f_id, t_a_lst *a_lst, char *str);
t_a_lst			*ft_print_arg(t_f_id *f_id, t_a_lst *a_lst, char *str);
void			ft_print_a_s(t_a_lst *a_lst, t_f_id *f_id);
void			ft_print_a_p(t_a_lst *a_lst, t_f_id *f_id);
void			ft_print_a_i(t_a_lst *a_lst, t_f_id *f_id);
void			ft_print_a_o(t_a_lst *a_lst, t_f_id *f_id);
void			ft_print_a_u(t_a_lst *a_lst, t_f_id *f_id);
void			ft_print_a_x(t_a_lst *a_lst, t_f_id *f_id);
void			ft_print_a_c(t_a_lst *a_lst, t_f_id *f_id);
void			ft_print_a_null(t_f_id *f_id, char *str);

t_f_id			*ft_mk_all_f_id(char *str);
void			ft_mk_new_f_id(t_f_id *f_id, char *str);
t_f_id			*ft_init_f_id(t_f_id *f_id, int nbr);

t_a_lst			*ft_mk_all_a_lst(t_f_id *f_id, va_list *ap);
t_a_lst			*ft_mk_new_a_lst(t_a_lst *a_lst);
t_a_lst			*ft_init_a_lst(t_a_lst *a_lst);

t_p_inf			*ft_init_p_inf(void);

void			ft_updt_all_prec(t_f_id *f_id, t_a_lst *a_lst);

void			ft_get_param(t_f_id *f_id, char *tmp_str);
void			ft_get_flags(t_f_id *f_id, char *tmp_str);
void			ft_get_w_min(t_f_id *f_id, char *tmp_str);
void			ft_get_prec(t_f_id *f_id, char *tmp_str);
void			ft_get_lenght(t_f_id *f_id, char *str);
void			ft_get_a_tp(t_f_id *f_id, char *tmp_str);

void			ft_save_a_ll(t_a_lst *a_lst, t_f_id *f_id, va_list *ap);
void			ft_save_a_s(t_a_lst *a_lst, t_f_id *f_id, va_list *ap);
void			ft_save_a_p(t_a_lst *a_lst, t_f_id *f_id, va_list *ap);

#endif
