#include "libft.h"
#include <stdlib.h>

char			*ft_stoabase(short nbr, const char *base)
{
	char	*str;
	t_us	cp_nbr;
	int		i;
	short	base_len;

	if (!nbr || !base || !*base)
		return (strdup("0"));
	str = NULL;
	cp_nbr = (t_us)nbr;
	base_len = ft_strlen(base);
	i = 0;
	while (cp_nbr)
	{
		cp_nbr /= base_len;
		i++;
	}
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = 0;
	cp_nbr = (t_us)nbr;
	while (--i >= 0)
	{
		str[i] = base[cp_nbr % base_len];
		cp_nbr /= base_len;
	}
	return (str);
}
