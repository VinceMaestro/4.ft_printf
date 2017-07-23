#include "libft.h"
#include <unistd.h>

int			ft_put_ullnbr(unsigned long long nbr)
{
	long int	buff;

	buff = '0';
	(nbr % 10 != nbr) ? (ft_put_llnbr(nbr / 10)) : buff;
	buff = '0' + nbr % 10;
	write(1, &buff, 1);
	return (0);
}
