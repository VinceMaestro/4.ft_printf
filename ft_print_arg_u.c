#include "ft_printf.h"

void	ft_print_arg_u(t_a_lst *a_lst, t_format_id *f_id)
{
	if (a_lst->arg_type == 'U')
	{
		ft_put_ullnbr(a_lst->arg.ull);
		f_id->nb_print_char = ft_ullintlen(a_lst->arg.ull);
	}
	else
		ft_error("ft_print_arg_u : Should not happend\n");
}
