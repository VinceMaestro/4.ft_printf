#include <stdio.h>

int		main(void)
{
	char	str[] = "Hello World!";
	char	str2[] = "Goodbye World!";
	printf("Test printf : %%.*s , 5, str : %.*s\n", 5, str, str2, str2, str2, str2);
	printf("Test printf : %%*s , 5, str : %*s\n", 5, str, str2, str2, str2, str2);
	return (0);
}
