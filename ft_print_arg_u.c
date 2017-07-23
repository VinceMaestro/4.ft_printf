#include "ft_printf.h"

void	ft_print_arg_u(t_a_lst *a_lst, t_format_id *f_id)
{
	if (a_lst->arg_type == 'L')
	{
		ft_put_llnbr(a_lst->arg.ll);
		f_id->nb_print_char = ft_llintlen(a_lst->arg.ll);
	}
}
