#include "libft.h"

size_t		ft_wstrlen(const wchar_t *str)
{
	int		count;

	count = 0;
	if (str)
	{
		while (str[count])
			count += 1;
	}
	return (count);
}
