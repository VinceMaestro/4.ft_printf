/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:39:54 by vpetit            #+#    #+#             */
/*   Updated: 2017/03/30 19:39:09 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

typedef struct s_format_id	t_format_id;

struct			s_format_id
{
	char	flags[5];
	int		width_min;
	char	period;
	int		width_max;
	char	arg_type;
	int		nb_read_char;
	int		nb_print_char;
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
void			ft_get_flags(t_format_id *format_id, char *tmp_str);
void			ft_get_width_min(t_format_id *format_id, char *tmp_str);
void			ft_get_period(t_format_id *format_id, char *tmp_str);
void			ft_get_width_max(t_format_id *format_id, char *tmp_str);
void			ft_get_arg_type(t_format_id *format_id, char *tmp_str);

#endif
