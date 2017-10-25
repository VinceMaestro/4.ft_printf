#include "ft_printf.h"

void	dbug_a_lst(t_a_lst *a_lst)
{
	if (a_lst)
	{
		ft_putstr("============\n");
		if (a_lst->a_tp)
			ft_putstr("||     VALID     ||\n");
		else
			ft_putstr("||    INVALID    ||\n");
		ft_putstr("===========================\n");
		ft_putstr("a_lst->nbr = ");
		ft_putnbr(a_lst->nbr);
		ft_putstr("\na_lst->a_tp = ");
		ft_putchar(a_lst->a_tp);
		// if (ft_strchr("dDi", a_lst->a_tp))
		ft_putstr("\na_lst->len = ");
		ft_put_llnbr(a_lst->len);
		ft_putstr("\n===========================\n");
	}
}
