#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	// ft_printf("%#04x\n", 0);
	// printf("%#04x\n", 0);
	int		i1;

	i1 = ft_printf("%jx, %jx", 0, ULLONG_MAX);

	ft_putchar('\n');

	ft_putnbr(i1);

	ft_putchar('\n');

	i1 = printf("%jx, %jx", 0, ULLONG_MAX);

	ft_putchar('\n');

	ft_putnbr(i1);
	//
	// ft_putchar('\n');
	//
	// i1 = ft_printf("%jo, %jo", 0, ULLONG_MAX);
	//
	// ft_putchar('\n');
	//
	// ft_putnbr(i1);
	//
	// ft_putchar('\n');
	//
	// i1 = printf("%jo, %jo", 0, ULLONG_MAX);
	//
	// ft_putchar('\n');
	//
	// ft_putnbr(i1);
	//
	// ft_putchar('\n');
	//
	// i1 = ft_printf("%zo, %zo", 0, ULLONG_MAX);
	//
	// ft_putchar('\n');
	//
	// ft_putnbr(i1);
	//
	// ft_putchar('\n');
	//
	// i1 = printf("%zo, %zo", 0, ULLONG_MAX);
	// //
	// ft_putchar('\n');
	//
	// ft_putnbr(i1);
	//
	// ft_putchar('\n');
	//
	// i1 = ft_printf("%zx, %zx", 0, ULLONG_MAX);
	//
	// ft_putchar('\n');
	//
	// ft_putnbr(i1);
	//
	// ft_putchar('\n');
	//
	// i1 = printf("%zx, %zx", 0, ULLONG_MAX);
	//
	// ft_putchar('\n');
	//
	// ft_putnbr(i1);
	//
	// ft_putchar('\n');
	//
	// i1 = ft_printf("%4.15S", L"我是一只猫。");
	//
	// ft_putchar('\n');
	//
	// ft_putnbr(i1);
	//
	// ft_putchar('\n');
	//
	// i1 = printf("%4.15S", L"我是一只猫。");
	//
	// ft_putchar('\n');
	//
	// ft_putnbr(i1);
	//
	// ft_putchar('\n');

	return (0);
}
