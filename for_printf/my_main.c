/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:26:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/10/23 19:21:46 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int		main(void)
{
	// char	str[80] = "abcde";

	// ft_printf(" %d\n", ft_printf("\nTest 9 %%0R : |%0"));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest 10 %%17R : |%17"));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest 11 %%017R : |%017"));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest 12-a %%8.5R : |%8.5"));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest 12-b %%8.R : |%8.5"));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest 13 %%08.5R : |%08.5")); // Undef
	// ft_printf(" %d\n", ft_printf("\nTest 12-c %%08.4%% : |%08.4%|"));
	// ft_printf(" %d\n", ft_printf("\nTest 12-d %%04.8%% : |%04.8%|"));

	int len;

	ft_printf("%#04x", 0);
	printf("%#04x", 0);

	ft_printf("%lo, %lo", 0, ULONG_MAX);
	printf("%lo, %lo", 0, ULONG_MAX);

	// ft_putnbr(printf("%4S\n", L"我是一只猫。"));
	// ft_putnbr(ft_printf("%4S\n", L"我是一只猫。"));

	// ft_printf("%9.0p+++\n", 482);
	// printf("%9.0p---\n", 482);

	// len = ft_printf("\nTest 15 %%010.2s : |%010.2s|\n", "pouet");// Undef
	// ft_printf("Retour de la fonction : |%d|\n", len);

	// len = ft_printf("\nTest 20 %%-+0 #10.2lls : |%-+0 #10.2lls|\n", "pouet");// Undef
	// ft_printf("Retour de la fonction : |%d|\n", len);

	// ft_printf(" %d\n", ft_printf("\nTest 24 %%8s : |%8s| :", NULL));
	// ft_printf(" %d\n", ft_printf("\nTest 25 %%.3s : |%.3s| :", NULL));
	// ft_printf(" %d\n", ft_printf("\nTest 26 %%8.3s : |%8.3s| :", NULL));

	len = ft_printf("\nTest 1 %%S : |%S|\n",  L"ʬ۩෴࿈♫𑀒");
	ft_printf("Retour de la fonction : |%d|\n", len);

	// len = ft_printf("\nTest 2 %%0S : |%0S|\n",  L"ʬ۩෴࿈♫𑀒");// Undef
	// ft_printf("Retour de la fonction : |%d|\n", len);

	// len = ft_printf("\nTest 3 %%+S : |%+S|\n",  L"ʬ۩෴࿈♫𑀒");// Undef
	// ft_printf("Retour de la fonction : |%d|\n", len);

	len = ft_printf("\nTest 4 %%-S : |%-S|\n",  L"ʬ۩෴࿈♫𑀒");
	ft_printf("Retour de la fonction : |%d|\n", len);

	// len = ft_printf("\nTest 5 %% S : |% S|\n",  L"ʬ۩෴࿈♫𑀒");// Undef
	// ft_printf("Retour de la fonction : |%d|\n", len);

	// len = ft_printf("\nTest 6 %%#S : |%#S|\n",  L"ʬ۩෴࿈♫𑀒");// Undef
	// ft_printf("Retour de la fonction : |%d|\n", len);

	len = ft_printf("\nTest 7 %%4S : |%4S|\n",  L"ʬ۩෴࿈♫𑀒");
	ft_printf("Retour de la fonction : |%d|\n", len);

	len = ft_printf("\nTest 8 %%12S : |%12S|\n",  L"ʬ۩෴࿈♫𑀒");
	ft_printf("Retour de la fonction : |%d|\n", len);

	len = ft_printf("\nTest 9 %%25S : |%25S|\n",  L"ʬ۩෴࿈♫𑀒");
	ft_printf("Retour de la fonction : |%d|\n", len);

	// len = ft_printf("\nTest 12 %%.25S : |%.25S|\n",  L"ʬ۩෴࿈♫𑀒");// Undef
	// ft_printf("Retour de la fonction : |%d|\n", len);

	// len = ft_printf("\nTest 14 %%5.20S : |%5.20S|\n",  L"ʬ۩෴࿈♫𑀒");// Undef
	// ft_printf("Retour de la fonction : |%d|\n", len);

	// len = ft_printf("\nTest 17 %%0 #20S : |%0 #20S|\n",  L"ʬ۩෴࿈♫𑀒");// Undef
	// ft_printf("Retour de la fonction : |%d|\n", len);

	// ft_printf(" %d\n", ft_printf("\nTest 20 %%8S : |%8S| :", NULL));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest 21 %%.3S : |%.3S| :", NULL));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest 22 %%8.3S : |%8.3S| :", NULL));// Undef

	// ft_printf(" %d\n", ft_printf("\nTest 9 %%0-8c : |%0-8c| :", 'a'));// Undef

	ft_printf(" %d\n", ft_printf("\nTest 7-d %%-8C : |%-8C| :", L'𑀒'));
	// ft_printf(" %d\n", ft_printf("\nTest 8-d %%08C : |%08C| :", L'𑀒'));// Undef

	// ft_printf(" %d\n", ft_printf("\nTest 9-a %%0-8C : |%0-8C| :", L'a'));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest 9-b %%0-8C : |%0-8C| :", L'ʬ'));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest 9-c %%0-8C : |%0-8C| :", L'♫'));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest 9-d %%0-8C : |%0-8C| :", L'𑀒'));// Undef

	ft_printf(" %d\n", ft_printf("\nTest 10-d %%C : |%C| :", L'𑀒'));

	ft_printf(" %d\n", ft_printf("\nTest printf 42-d %%#15.6o : |%#15.6o| :", 42));
	ft_printf(" %d\n", ft_printf("\nTest printf 42-e %%#015.6o : |%#015.6o| :", 42));

	ft_printf(" %d\n", ft_printf("\nTest printf 43-d %%#15.6o : |%#15.6o| :", 0));
	ft_printf(" %d\n", ft_printf("\nTest printf 43-e %%#015.6o : |%#015.6o| :", 0));

	ft_printf(" %d\n", ft_printf("\nTest printf 45-d %%#-15.6o : |%#-15.6o| :", 45));
	ft_printf(" %d\n", ft_printf("\nTest printf 45-e %%#-015.6o : |%#-015.6o| :", 45));

	ft_printf(" %d\n", ft_printf("\nTest printf 46-d %%#-15.6o : |%#-15.6o| :", 0));
	ft_printf(" %d\n", ft_printf("\nTest printf 46-e %%#-015.6o : |%#-015.6o| :", 0));

	ft_printf(" %d\n", ft_printf("\nTest printf 3-a %%8x : |%8x| :", 0));
	// ft_printf(" %d\n", ft_printf("\nTest printf 4-a %%+8x : |%+8x| :", 0));// Undef
	ft_printf(" %d\n", ft_printf("\nTest printf 5-a %%-8x : |%-8x| :", 0));
	// ft_printf(" %d\n", ft_printf("\nTest printf 6-a %%8-+x : |%-+8x| :", 0));// Undef
	ft_printf(" %d\n", ft_printf("\nTest printf 7-a %%08x : |%08x| :", 0));
	// ft_printf(" %d\n", ft_printf("\nTest printf 8-a %%+08x : |%+08x| :", 0));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest printf 9-a %%+-08x : |%+-08x| :", 0));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest printf 10-a %%0 8x : |%0 8x| :", 0));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest printf 11-a %%0+ 8x : |%0+ 8x| :", 0));// Undef

	ft_printf(" %d\n", ft_printf("\nTest printf 43-b %%#8x : |%#8x| :", 0));
	ft_printf(" %d\n", ft_printf("\nTest printf 46-b %%#-8x : |%#-8x| :", 0));

	ft_printf(" %d\n", ft_printf("\nTest printf 50-c %%#08x : |%#08x| :", 0));
	ft_printf(" %d\n", ft_printf("\nTest printf 50-d %%#08x : |%#08x| :", 0));
	ft_printf(" %d\n", ft_printf("\nTest printf 50-e %%#08x : |%#08x| :", 0));
	ft_printf(" %d\n", ft_printf("\nTest printf 50-f %%#08x : |%#08x| :", 0));
	ft_printf(" %d\n", ft_printf("\nTest printf 50-g %%#08x : |%#08x| :", 0));
	ft_printf(" %d\n", ft_printf("\nTest printf 50-h %%-#08x : |%#08x| :", 0));

	ft_printf(" %d\n", ft_printf("\nTest printf 51-c %%-#08x : |%-#08x| :", 0));
	ft_printf(" %d\n", ft_printf("\nTest printf 51-d %%-#08x : |%-#08x| :", 0));
	ft_printf(" %d\n", ft_printf("\nTest printf 51-e %%-#08x : |%-#08x| :", 0));
	ft_printf(" %d\n", ft_printf("\nTest printf 51-f %%-#08x : |%-#08x| :", 0));
	ft_printf(" %d\n", ft_printf("\nTest printf 51-g %%-#08x : |%-#08x| :", 0));
	ft_printf(" %d\n", ft_printf("\nTest printf 51-h %%-#08x : |%-#08x| :", 0));

	ft_printf(" %d\n", ft_printf("\nTest printf 3-a %%8X : |%8X| :", 0));
	// ft_printf(" %d\n", ft_printf("\nTest printf 4-a %%+8X : |%+8X| :", 0));// Undef
	ft_printf(" %d\n", ft_printf("\nTest printf 5-a %%-8X : |%-8X| :", 0));
	// ft_printf(" %d\n", ft_printf("\nTest printf 6-a %%8-+X : |%-+8X| :", 0));// Undef
	ft_printf(" %d\n", ft_printf("\nTest printf 7-a %%08X : |%08X| :", 0));
	// ft_printf(" %d\n", ft_printf("\nTest printf 8-a %%+08X : |%+08X| :", 0));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest printf 9-a %%+-08X : |%+-08X| :", 0));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest printf 10-a %%0 8X : |%0 8X| :", 0));// Undef
	// ft_printf(" %d\n", ft_printf("\nTest printf 11-a %%0+ 8X : |%0+ 8X| :", 0));// Undef

	ft_printf(" %d\n", ft_printf("\nTest printf 43-b %%#8X : |%#8X| :", 0));
	ft_printf(" %d\n", ft_printf("\nTest printf 46-b %%#-8X : |%#-8X| :", 0));

	return (0);
}
