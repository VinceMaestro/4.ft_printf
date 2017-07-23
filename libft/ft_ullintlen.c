#include "libft.h"

size_t		ft_ullintlen(unsigned long long nbr)
{
	size_t	len;

	len = 1;
	while (nbr && nbr != nbr % 10)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}
