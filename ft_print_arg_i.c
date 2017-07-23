#include "ft_printf.h"

void			ft_print_arg_i(t_a_lst *a_lst, t_format_id *f_id)
{
    if (a_lst->arg_type == 'L')
	{
		ft_put_llnbr(a_lst->arg.ll);
		f_id->nb_print_char = ft_llintlen(a_lst->arg.ll);
	}
    else if (a_lst->arg_type == 'i')
	{
		ft_putnbr(a_lst->arg.ll);
		f_id->nb_print_char = ft_intlen(a_lst->arg.ll);
	}
	else
		ft_error("ft_print_arg_i : Should not happend\n");
}
