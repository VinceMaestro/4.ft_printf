#include "../ft_printf/ft_printf.h"
#include <stdio.h>

int		main(void)
{
	ft_printf("%%\n");
	ft_printf("%d\n", 42);
	ft_printf("%d%d\n", 42, 41);
	ft_printf("%d%d%d\n", 42, 43, 44);

	return (0);
}
