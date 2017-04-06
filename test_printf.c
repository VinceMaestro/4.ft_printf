#include <stdio.h>

int		main(void)
{
	char	str[] = "Hello World!";
	char	str2[] = "Goodbye World!";
	printf("Test printf : %%.*s , 5, str : %.*s\n", 5, str);
	// printf("Test printf : %%*s\n%2-3s, 3, str, str2 : %*s\n%2s", 3, str, str2);
	printf("Test printf : \"Hello %2$-+03.02srld!\nWhat %s you?%%\0\"", "Wo", "are");
	return (0);
}
