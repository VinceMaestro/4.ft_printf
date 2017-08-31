#include "ft_printf.h"

void	ft_print_arg_p(t_a_lst *a_lst, t_format_id *f_id)
{
	if (a_lst && f_id)
	{
		ft_putstr("0x");
		ft_putstr(a_lst->arg.s);
		f_id->nb_print_char = ft_strlen(a_lst->arg.s) + 2;
	}
	else
		ft_error("ft_print_arg_p: Should'nt hapend");
}
