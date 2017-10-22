#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

void		*ft_malloc(size_t size, const char *func, const char *err)
{
	void		*new;

	if (!(new = malloc(size)))
	{
		write(2, func, ft_strlen(func));
		write(2, err, ft_strlen(err));
		ft_error("");
	}
	return (new);
}
