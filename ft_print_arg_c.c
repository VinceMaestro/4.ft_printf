#include "ft_printf.h"

// static void			ft_updt_p_info(t_p_inf *infos, t_a_lst *a_lst, \
// 	t_format_id *f_id)
// {
//
// }

void	ft_print_arg_c(t_a_lst *a_lst, t_format_id *f_id)
{
	// t_p_inf		*infos;
	//
	// infos = ft_init_p_inf();
	// ft_updt_p_info(infos, a_lst, f_id);

	if (a_lst && f_id)
	{
		if (f_id->precision.period)
			ft_put_x_char(' ', ft_max(0, f_id->precision.width_max - 1));
		ft_putchar(a_lst->arg.ll);
		if (f_id->precision.period)
			ft_put_x_char(' ', -ft_min(0, f_id->precision.width_max + 1));
		f_id->nb_print_char = 1;
	}
	else
		ft_error("ft_print_arg_c: Should'nt hapend");
}
