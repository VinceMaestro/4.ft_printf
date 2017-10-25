#include "ft_printf.h"
#include <stdio.h>

void		dbug_infos(t_p_inf *infos)
{
	if (infos)
	{
		printf("\t\tinfos->len_a = %i\n\
		infos->nbr_pad_w_min = %i\n\
		infos->nbr_pad_dgt = %i\n\
		infos->pad_rt = %i\n\
		infos->pad_w_min = %c\n\
		infos->pad_dgt = %c\n\
		infos->first_c = %s\n",\
		infos->len_a, infos->nbr_pad_w_min, infos->nbr_pad_dgt, \
			infos->pad_rt, infos->pad_w_min, infos->pad_dgt, \
				infos->first_c);
	}
}
