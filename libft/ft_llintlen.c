#include "libft.h"

size_t		ft_llintlen(long long nbr)
{
	size_t	len;

	len = 0;
	if (nbr)
	{
		len++;
		nbr < 0 ? len ++ : len;
		while (nbr && nbr != nbr % 10)
		{
			len++;
			nbr = nbr / 10;
		}
	}
	return (len);
}
