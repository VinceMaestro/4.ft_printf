#include "ft_printf.h"

void	dbug_p_all_f_id(t_f_id *f_id)
{
	if (f_id)
	{
		ft_putstr("-- PRINTING FULL LIST : --\n");
		f_id = f_id->first;
		dbug_p_f_id(f_id);
		while (f_id->next)
		{
			f_id = f_id->next;
			dbug_p_f_id(f_id);
		}
		ft_putstr("-- END PRINTING LIST : --\n");
	}
}
