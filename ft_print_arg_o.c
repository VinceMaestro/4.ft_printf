#include "ft_printf.h"

long	ft_int_to_oct(int nbr)
{
	long	oct;

	oct = 0;
	34 % 8 = 2
	34 % 16 = 2
	34 % 24 = 10
	34 % 32 = 2
}

void	ft_print_arg_o(t_a_lst *a_lst, t_format_id *f_id)
{
	long	maxint;
	long	oct;

	oct = 0;
	maxint = 123;
	if (a_lst->arg < maxint)
	{
		oct = ft_int_to_oct(a_lst->arg);
		ft_put_llnbr(oct);
		f_id->nb_print_char = ft_llintlen(oct);
	}
}
