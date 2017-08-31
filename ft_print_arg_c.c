#include "ft_printf.h"

void	ft_print_arg_c(t_a_lst *a_lst, t_format_id *f_id)
{
	if (a_lst && f_id)
	{
		ft_putchar(a_lst->arg.ll);
		f_id->nb_print_char = 1;
	}
	else
		ft_error("ft_print_arg_c: Should'nt hapend");
}
