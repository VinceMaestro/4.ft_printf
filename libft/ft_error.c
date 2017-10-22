#include "libft.h"
#include <stdlib.h>

void	ft_error(char *msg)
{
	ft_putstr_fd("error : ", 2);
	if (msg && *msg)
		ft_putstr_fd(msg, 2);
	ft_putchar('\n');
	exit(1);
}
