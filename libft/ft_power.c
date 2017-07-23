#include "libft.h"

int    ft_power(int x, int n)
{
    int     value;

    value = 1;
    if (n > 0 && x > 1)
    {
        while (n)
        {
            value = value * x;
            n--;
        }
    }
    return (value);
}
