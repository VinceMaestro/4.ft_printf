#include "libft.h"
#include <unistd.h>

void	ft_putn_ustr(void *str, int len)
{
	t_uchar	*buff;
	int		i;

	if (str && len > 0)
	{
		buff = str;
		i = 0;
		while (buff[i] && i < len)
		{
			write(1, &(buff[i]), 1);
			i += 1;
		}
	}
}
