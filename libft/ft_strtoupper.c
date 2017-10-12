#include "libft.h"

char		*ft_strtoupper(char *str)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = str;
	while (tmp[i])
	{
		tmp[i] = ft_toupper(tmp[i]);
		i++;
	}
	return (tmp);
}
