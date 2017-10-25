#include "../ft_printf.h"
#include <stdio.h>
#include <locale.h>
#include <limits.h>

int		main(void)
{
	setlocale(LC_ALL, "");
	printf("Test de la fonction printf :");
	printf("\n");

	//		     ______ _____  _____   ____  _____   _____
	//		    |  ____|  __ \|  __ \ / __ \|  __ \ / ____|
	//		    | |__  | |__) | |__) | |  | | |__) | (___
	//		    |  __| |  _  /|  _  /| |  | |  _  / \___ \
	//		    | |____| | \ \| | \ \| |__| | | \ \ ____) |
	//		    |______|_|  \_\_|  \_\\____/|_|  \_\_____/



	// printf(" %d\n", printf("\nTest 1 %%R : |%R|"));
	//
	// printf(" %d\n", printf("\nTest 2 %% R : |% R|"));
	//
	// printf(" %d\n", printf("\nTest 3 %%+R : |%+R|"));
	//
	// printf(" %d\n", printf("\nTest 4 %%-R : |%-R|"));
	//
	// printf(" %d\n", printf("\nTest 5 %%0R : |%0R|"));
	//
	// printf(" %d\n", printf("\nTest 6 %%#R : |%#R|"));
	//
	// printf(" %d\n", printf("\nTest 7-a %%8R : |%8R|"));
	// printf(" %d\n", printf("\nTest 7-b %%.4R : |%.4R|"));
	// printf(" %d\n", printf("\nTest 7-c %%8.4R : |%8.4R|"));
	// printf(" %d\n", printf("\nTest 7-d %%4.8R : |%4.8R|"));
	//
	// printf(" %d\n", printf("\nTest 8 %%R : |%"));
	//
	// printf(" %d\n", printf("\nTest 9 %%0R : |%0"));
	//
	// printf(" %d\n", printf("\nTest 10 %%17R : |%17"));
	//
	// printf(" %d\n", printf("\nTest 11 %%017R : |%017"));
	//
	// printf(" %d\n", printf("\nTest 12-a %%8.5R : |%8.5"));
	// printf(" %d\n", printf("\nTest 12-b %%8.R : |%8.5"));
	//
	// printf(" %d\n", printf("\nTest 13 %%08.5R : |%08.5"));

	//		 _   ___   __
	//		(_) / (_) / /
	//		   / /   / /
	//		  / /   / /
	//		 / / _ / / _
	//		/_/ (_)_/ (_)

	printf(" %d\n", printf("\nTest 1 %%%% : |%%|"));

	printf(" %d\n", printf("\nTest 2 %%-%% : |%-%|"));

	printf(" %d\n", printf("\nTest 3 %%+%% : |%+%|"));

	printf(" %d\n", printf("\nTest 4 %% %% : |% %|"));

	printf(" %d\n", printf("\nTest 5 %%0%% : |%0%|"));

	printf(" %d\n", printf("\nTest 6 %%#%% : |%#%|"));

	printf(" %d\n", printf("\nTest 7-a %%8%% : |%8%|"));
	printf(" %d\n", printf("\nTest 7-b %%.4%% : |%.4%|"));
	printf(" %d\n", printf("\nTest 7-c %%8.4%% : |%8.4%|"));
	printf(" %d\n", printf("\nTest 7-d %%4.8%% : |%4.8%|"));

	printf(" %d\n", printf("\nTest 8-a %%#8%% : |%#8%|"));
	printf(" %d\n", printf("\nTest 8-b %%#.4%% : |%#.4%|"));
	printf(" %d\n", printf("\nTest 8-c %%#8.4%% : |%#8.4%|"));
	printf(" %d\n", printf("\nTest 8-d %%#4.8%% : |%#4.8%|"));

	printf(" %d\n", printf("\nTest 9-a %%-8%% : |%-8%|"));
	printf(" %d\n", printf("\nTest 9-b %%-.4%% : |%-.4%|"));
	printf(" %d\n", printf("\nTest 9-c %%-8.4%% : |%-8.4%|"));
	printf(" %d\n", printf("\nTest 9-d %%-4.8%% : |%-4.8%|"));

	printf(" %d\n", printf("\nTest 10-a %%+8%% : |%+8%|"));
	printf(" %d\n", printf("\nTest 10-b %%+.4%% : |%+.4%|"));
	printf(" %d\n", printf("\nTest 10-c %%+8.4%% : |%+8.4%|"));
	printf(" %d\n", printf("\nTest 10-d %%+4.8%% : |%+4.8%|"));

	printf(" %d\n", printf("\nTest 11-a %% 8%% : |% 8%|"));
	printf(" %d\n", printf("\nTest 11-b %% .4%% : |% .4%|"));
	printf(" %d\n", printf("\nTest 11-c %% 8.4%% : |% 8.4%|"));
	printf(" %d\n", printf("\nTest 11-d %% 4.8%% : |% 4.8%|"));

	printf(" %d\n", printf("\nTest 12-a %%08%% : |%08%|"));
	printf(" %d\n", printf("\nTest 12-b %%0.4%% : |%0.4%|"));
	printf(" %d\n", printf("\nTest 12-c %%08.4%% : |%08.4%|"));
	printf(" %d\n", printf("\nTest 12-d %%04.8%% : |%04.8%|"));

//	printf(" %d\n", printf("\nTest 13 %%*%% : |%*%|", -8)); //lldb

	printf(" %d\n", printf("\nTest 14 %%.0%% : |%.0%|"));

	printf(" %d\n", printf("\nTest 15 %%5.0%% : |%5.0%|"));



	//		 _   __
	//		(_) / /
	//		   / / ___
	//		  / / / __|
	//		 / / _\__ \
	//		/_/ (_)___/
int len;

	len = printf("\nTest 1 : |chaine normale.|\n");
	printf("Retour de la fonction : |%d|\n", len);

	len = printf("\nTest 2 %%s : |%s|\n", "pouet");
	printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 3 %%0s : |%0s|\n", "pouet");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 4 %%+s : |%+s|\n", "pouet");
	// printf("Retour de la fonction : |%d|\n", len);

	len = printf("\nTest 5 %%-s : |%-s|\n", "pouet");
	printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 6 %% s : |% s|\n", "pouet");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 7 %%#s : |%#s|\n", "pouet");
	// printf("Retour de la fonction : |%d|\n", len);

	len = printf("\nTest 8 %%10s : |%10s|\n", "pouet");
	printf("Retour de la fonction : |%d|\n", len);

	len = printf("\nTest 9 %%2s : |%2s|\n", "pouet");
	printf("Retour de la fonction : |%d|\n", len);

	len = printf("\nTest 10 %%10.15s : |%10.15s|\n", "pouet");
	printf("Retour de la fonction : |%d|\n", len);

	len = printf("\nTest 11 %%2.10s : |%2.10s|\n", "pouet");
	printf("Retour de la fonction : |%d|\n", len);

	len = printf("\nTest 12 %%.2s : |%.2s|\n", "pouet");
	printf("Retour de la fonction : |%d|\n", len);

	len = printf("\nTest 13 %%10.2s : |%10.2s|\n", "pouet");
	printf("Retour de la fonction : |%d|\n", len);

	len = printf("\nTest 14 %%-10.2s : |%-10.2s|\n", "pouet");
	printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 15 %%010.2s : |%010.2s|\n", "pouet");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 16 %%-+0 #10.2s : |%-+0 #10.2s|\n", "pouet");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 17 %%-+0 #10.2hhs : |%-+0 #10.2hhs|\n", "pouet");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 18 %%-+0 #10.2hs : |%-+0 #10.2hs|\n", "pouet");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 19 %%-+0 #10.2ls : |%-+0 #10.2ls|\n", L"pouet");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 20 %%-+0 #10.2lls : |%-+0 #10.2lls|\n", "pouet");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 21 %%-+0 #10.2js : |%-+0 #10.2js|\n", "pouet");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 22 %%-+0 #10.2zs : |%-+0 #10.2zs|\n", "pouet");
	// printf("Retour de la fonction : |%d|\n", len);

	printf(" %d\n", printf("\nTest 23 %%s : |%s| :", NULL));
	printf(" %d\n", printf("\nTest 24 %%8s : |%8s| :", NULL));
	printf(" %d\n", printf("\nTest 25 %%.3s : |%.3s| :", NULL));
	printf(" %d\n", printf("\nTest 26 %%8.3s : |%8.3s| :", NULL));

	//		 _   __ _____
	//		(_) / // ____|
	//		   / /| (___
	//		  / /  \___ \
	//		 / / _ ____) |
	//		/_/ (_)_____/


	len = printf("\nTest 1 %%S : |%S|\n",  L"ʬ۩෴࿈♫𑀒");
	printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 2 %%0S : |%0S|\n",  L"ʬ۩෴࿈♫𑀒");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 3 %%+S : |%+S|\n",  L"ʬ۩෴࿈♫𑀒");
	// printf("Retour de la fonction : |%d|\n", len);

	len = printf("\nTest 4 %%-S : |%-S|\n",  L"ʬ۩෴࿈♫𑀒");
	printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 5 %% S : |% S|\n",  L"ʬ۩෴࿈♫𑀒");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 6 %%#S : |%#S|\n",  L"ʬ۩෴࿈♫𑀒");
	// printf("Retour de la fonction : |%d|\n", len);

	len = printf("\nTest 7 %%4S : |%4S|\n",  L"ʬ۩෴࿈♫𑀒");
	printf("Retour de la fonction : |%d|\n", len);

	len = printf("\nTest 8 %%12S : |%12S|\n",  L"ʬ۩෴࿈♫𑀒");
	printf("Retour de la fonction : |%d|\n", len);

	len = printf("\nTest 9 %%25S : |%25S|\n",  L"ʬ۩෴࿈♫𑀒");
	printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 10 %%.4S : |%.4S|\n",  L"ʬ۩෴࿈♫𑀒");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 11 %%.12S : |%.12S|\n",  L"ʬ۩෴࿈♫𑀒");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 12 %%.25S : |%.25S|\n",  L"ʬ۩෴࿈♫𑀒");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 13 %%20.5S : |%20.5S|\n",  L"ʬ۩෴࿈♫𑀒");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 14 %%5.20S : |%5.20S|\n",  L"ʬ۩෴࿈♫𑀒");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 15 %%10.10S : |%10.10S|\n",  L"ʬ۩෴࿈♫𑀒");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 16 %%-+0 #20.8S : |%-+0 #20.8S|\n",  L"ʬ۩෴࿈♫𑀒");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 17 %%0 #20S : |%0 #20S|\n",  L"ʬ۩෴࿈♫𑀒");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 18 %%-+0 #10.2S : |%-+0 #10.2S|\n",  L"pouet");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 19 %%10.2S : |%10.2S|\n",  L"pouet");
	// printf("Retour de la fonction : |%d|\n", len);

	// len = printf("\nTest 18 %%10.5S : |%10.5S|\n",  L"pouet");
	// printf("Retour de la fonction : |%d|\n", len);

	// printf(" %d\n", printf("\nTest 19 %%S : |%S| :", NULL));// Format error
	// printf(" %d\n", printf("\nTest 20 %%8S : |%8S| :", NULL));// Format error
	// printf(" %d\n", printf("\nTest 21 %%.3S : |%.3S| :", NULL));
	// printf(" %d\n", printf("\nTest 22 %%8.3S : |%8.3S| :", NULL));

	//		 _   __
	//		(_) / /
	//		   / / ___
	//		  / / / __|
	//		 / / | (__
	//		/_/ (_)___|

	printf(" %d\n", printf("\nTest 1 %%c : |%c| :", 'a'));

	// printf(" %d\n", printf("\nTest 2 %%#c : |%#c| :", 'a'));

	// printf(" %d\n", printf("\nTest 3 %%+c : |%+c| :", 'a'));

	printf(" %d\n", printf("\nTest 4 %%-c : |%-c| :", 'a'));

	// printf(" %d\n", printf("\nTest 5 %% c : |% c| :", 'a'));

	// printf(" %d\n", printf("\nTest 6 %%0c : |%0c| :", 'a'));

	printf(" %d\n", printf("\nTest 7 %%-8c : |%-8c| :", 'a'));

	// printf(" %d\n", printf("\nTest 8 %%08c : |%08c| :", 'a'));

	// printf(" %d\n", printf("\nTest 9 %%0-8c : |%0-8c| :", 'a'));

	// printf(" %d\n", printf("\nTest 10 %% 8c : |% 8c| :", 'a'));

	// printf(" %d\n", printf("\nTest 11 %%-+0 #c : |%-+0 #c| :", 'a'));

	// printf(" %d\n", printf("\nTest 12 %%8.2c : |%8.2c| :", 'a'));

	printf(" %d\n", printf("\nTest 13 %%c : |%c| :", -5));

	printf(" %d\n", printf("\nTest 14 %%c : |%c| :", 456));


	//		 _   _______
	//		(_) / / ____|
	//		   / / |
	//		  / /| |
	//		 / / | |____
	//		/_/ (_)_____|


	printf(" %d\n", printf("\nTest 1 %%C : |%C| :", L'a'));

	// printf(" %d\n", printf("\nTest 2 %%#C : |%#C| :", L'a'));

	// printf(" %d\n", printf("\nTest 3 %%+C : |%+C| :", L'a'));

	printf(" %d\n", printf("\nTest 4 %%-C : |%-C| :", L'a'));

	// printf(" %d\n", printf("\nTest 5 %% C : |% C| :", L'a'));

	// printf(" %d\n", printf("\nTest 6 %%0C : |%0C| :", L'a'));

	printf(" %d\n", printf("\nTest 7-a %%-8C : |%-8C| :", L'a'));
	printf(" %d\n", printf("\nTest 7-b %%-8C : |%-8C| :", L'ʬ'));
	printf(" %d\n", printf("\nTest 7-c %%-8C : |%-8C| :", L'♫'));
	printf(" %d\n", printf("\nTest 7-d %%-8C : |%-8C| :", L'𑀒'));

	// printf(" %d\n", printf("\nTest 8-a %%08C : |%08C| :", L'a'));
	// printf(" %d\n", printf("\nTest 8-b %%08C : |%08C| :", L'ʬ'));
	// printf(" %d\n", printf("\nTest 8-c %%08C : |%08C| :", L'♫'));
	// printf(" %d\n", printf("\nTest 8-d %%08C : |%08C| :", L'𑀒'));

	// printf(" %d\n", printf("\nTest 9-a %%0-8C : |%0-8C| :", L'a'));
	// printf(" %d\n", printf("\nTest 9-b %%0-8C : |%0-8C| :", L'ʬ'));
	// printf(" %d\n", printf("\nTest 9-c %%0-8C : |%0-8C| :", L'♫'));
	// printf(" %d\n", printf("\nTest 9-d %%0-8C : |%0-8C| :", L'𑀒'));

	printf(" %d\n", printf("\nTest 10-a %%C : |%C| :", L'a'));
	printf(" %d\n", printf("\nTest 10-b %%C : |%C| :", L'ʬ'));
	printf(" %d\n", printf("\nTest 10-c %%C : |%C| :", L'♫'));
	printf(" %d\n", printf("\nTest 10-d %%C : |%C| :", L'𑀒'));

	// printf(" %d\n", printf("\nTest 11 %%-+0 #C : |%-+0 #C| :", L'a'));

	// printf(" %d\n", printf("\nTest 12 %%8.2C : |%8.2C| :", L'a'));

	printf(" %d\n", printf("\nTest 13 %%C : |%C| :", 1));

	printf(" %d\n", printf("\nTest 14 %%C : |%C| :", 456));


	//		 _   __   _
	//		(_) / /  | |
	//		   / / __| |
	//		  / / / _` |
	//		 / / | (_| |
	//		/_/ (_)__,_|


	printf(" %d\n", printf("\nTest printf 1-a %%d : |%d| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%d : |%d| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%d : |%d| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%d : |%d| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%d : |%d| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%d : |%d| :", 2147483647));
	// printf(" %d\n", printf("\nTest printf 1-g %%d : |%d| :", -2147483648));

	// printf(" %d\n", printf("\nTest printf 1-a %%hhd : |%hhd| :", 0));// Format error
	// printf(" %d\n", printf("\nTest printf 1-b %%hhd : |%hhd| :", 1));// Format error
	// printf(" %d\n", printf("\nTest printf 1-c %%hhd : |%hhd| :", -1));// Format error
	// printf(" %d\n", printf("\nTest printf 1-d %%hhd : |%hhd| :", 5));// Format error
	// printf(" %d\n", printf("\nTest printf 1-e %%hhd : |%hhd| :", -5));// Format error
	// printf(" %d\n", printf("\nTest printf 1-f %%hhd : |%hhd| :", 2147483647));// Format error
	// printf(" %d\n", printf("\nTest printf 1-g %%hhd : |%hhd| :", -2147483648));// Format error
//	printf(" %d\n", printf("\nTest printf 1-h %%hhd : |%hhd| :", -9223372036854775808)); //lldb
	// printf(" %d\n", printf("\nTest printf 1-i %%hhd : |%hhd| :", 9223372036854775807));// Format error

	// printf(" %d\n", printf("\nTest printf 1-a %%hd : |%hd| :", 0));// Format error
	// printf(" %d\n", printf("\nTest printf 1-b %%hd : |%hd| :", 1));// Format error
	// printf(" %d\n", printf("\nTest printf 1-c %%hd : |%hd| :", -1));// Format error
	// printf(" %d\n", printf("\nTest printf 1-d %%hd : |%hd| :", 5));// Format error
	// printf(" %d\n", printf("\nTest printf 1-e %%hd : |%hd| :", -5));// Format error
	// printf(" %d\n", printf("\nTest printf 1-f %%hd : |%hd| :", 2147483647));// Format error
	// printf(" %d\n", printf("\nTest printf 1-g %%hd : |%hd| :", -2147483648));// Format error
//	printf(" %d\n", printf("\nTest printf 1-h %%hd : |%hd| :", -9223372036854775808)); //lldb
	// printf(" %d\n", printf("\nTest printf 1-i %%hd : |%hd| :", 9223372036854775807));// Format error

	// printf(" %d\n", printf("\nTest printf 1-a %%ld : |%ld| :", 0));// Format error
	// printf(" %d\n", printf("\nTest printf 1-b %%ld : |%ld| :", 1));// Format error
	// printf(" %d\n", printf("\nTest printf 1-c %%ld : |%ld| :", -1));// Format error
	printf(" %d\n", printf("\nTest printf 1-d %%ld : |%ld| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%ld : |%ld| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%ld : |%ld| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%ld : |%ld| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%ld : |%ld| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%ld : |%ld| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%lld : |%lld| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%lld : |%lld| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%lld : |%lld| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%lld : |%lld| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%lld : |%lld| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%lld : |%lld| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%lld : |%lld| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%lld : |%lld| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%lld : |%lld| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%jd : |%jd| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%jd : |%jd| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%jd : |%jd| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%jd : |%jd| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%jd : |%jd| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%jd : |%jd| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%jd : |%jd| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%jd : |%jd| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%jd : |%jd| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%zd : |%zd| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%zd : |%zd| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%zd : |%zd| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%zd : |%zd| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%zd : |%zd| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%zd : |%zd| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%zd : |%zd| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%zd : |%zd| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%zd : |%zd| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%D : |%D| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%D : |%D| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%D : |%D| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%D : |%D| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%D : |%D| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%D : |%D| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%D : |%D| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%D : |%D| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%D : |%D| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 2-a %%-d : |%-d| :", 0));
	printf(" %d\n", printf("\nTest printf 2-b %%-d : |%-d| :", 1234));
	printf(" %d\n", printf("\nTest printf 2-c %%-d : |%-d| :", -1234));

	printf(" %d\n", printf("\nTest printf 3-a %%+d : |%+d| :", 0));
	printf(" %d\n", printf("\nTest printf 3-b %%+d : |%+d| :", 1234));
	printf(" %d\n", printf("\nTest printf 3-c %%+d : |%+d| :", -1234));

	printf(" %d\n", printf("\nTest printf 4-a %% d : |% d| :", 0));
	printf(" %d\n", printf("\nTest printf 4-b %% d : |% d| :", 1234));
	printf(" %d\n", printf("\nTest printf 4-c %% d : |% d| :", -1234));

	printf(" %d\n", printf("\nTest printf 5-a %%0d : |%0d| :", 0));
	printf(" %d\n", printf("\nTest printf 5-b %%0d : |%0d| :", 1234));
	printf(" %d\n", printf("\nTest printf 5-c %%0d : |%0d| :", -1234));

	printf(" %d\n", printf("\nTest printf 6-a %%#d : |%#d| :", 0));
	printf(" %d\n", printf("\nTest printf 6-b %%#d : |%#d| :", 1234));
	printf(" %d\n", printf("\nTest printf 6-c %%#d : |%#d| :", -1234));

	printf(" %d\n", printf("\nTest printf 3-a %%8d : |%8d| :", 0));
	printf(" %d\n", printf("\nTest printf 3-b %%8d : |%8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 3-c %%8d : |%8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 4-a %%+8d : |%+8d| :", 0));
	printf(" %d\n", printf("\nTest printf 4-b %%+8d : |%+8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 4-c %%+8d : |%+8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 5-a %%-8d : |%-8d| :", 0));
	printf(" %d\n", printf("\nTest printf 5-b %%-8d : |%-8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 5-c %%-8d : |%-8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 6-a %%8-+d : |%-+8d| :", 0));
	printf(" %d\n", printf("\nTest printf 6-b %%8-+d : |%-+8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 6-c %%8-+d : |%-+8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 7-a %%08d : |%08d| :", 0));
	printf(" %d\n", printf("\nTest printf 7-b %%08d : |%08d| :", 1234));
	printf(" %d\n", printf("\nTest printf 7-c %%08d : |%08d| :", -1234));

	printf(" %d\n", printf("\nTest printf 8-a %%+08d : |%+08d| :", 0));
	printf(" %d\n", printf("\nTest printf 8-b %%+08d : |%+08d| :", 1234));
	printf(" %d\n", printf("\nTest printf 8-c %%+08d : |%+08d| :", -1234));

	printf(" %d\n", printf("\nTest printf 9-a %%+-08d : |%+-08d| :", 0));
	printf(" %d\n", printf("\nTest printf 9-b %%+-08d : |%+-08d| :", 1234));
	printf(" %d\n", printf("\nTest printf 9-c %%+-08d : |%+-08d| :", -1234));

	printf(" %d\n", printf("\nTest printf 10-a %%0 8d : |%0 8d| :", 0));
	printf(" %d\n", printf("\nTest printf 10-b %%0 8d : |%0 8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 10-c %%0 8d : |%0 8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 11-a %%0+ 8d : |%0+ 8d| :", 0));
	printf(" %d\n", printf("\nTest printf 11-b %%0+ 8d : |%0+ 8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 11-c %%0+ 8d : |%0+ 8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 12-a %%.8d : |%.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 12-b %%.8d : |%.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 12-c %%.8d : |%.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 13-a %%+.8d : |%+.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 13-b %%+.8d : |%+.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 13-c %%+.8d : |%+.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 14-a %%-.8d : |%-.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 14-b %%-.8d : |%-.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 14-c %%-.8d : |%-.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 15-a %%-+.8d : |%-+.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 15-b %%-+.8d : |%-+.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 15-c %%-+.8d : |%-+.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 16-a %%0.8d : |%0.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 16-b %%0.8d : |%0.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 16-c %%0.8d : |%0.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 17-a %%+0.8d : |%+0.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 17-b %%+0.8d : |%+0.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 17-c %%+0.8d : |%+0.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 18-a %%+-0.8d : |%+-0.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 18-b %%+-0.8d : |%+-0.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 18-c %%+-0.8d : |%+-0.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 19-a %%0 .8d : |%0 .8d| :", 0));
	printf(" %d\n", printf("\nTest printf 19-b %%0 .8d : |%0 .8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 19-c %%0 .8d : |%0 .8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 20-a %%0+ .8d : |%0+ .8d| :", 0));
	printf(" %d\n", printf("\nTest printf 20-b %%0+ .8d : |%0+ .8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 20-c %%0+ .8d : |%0+ .8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 21-a %%15.8d : |%15.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 21-b %%15.8d : |%15.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 21-c %%15.8d : |%15.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 22-a %%+15.8d : |%+15.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 22-b %%+15.8d : |%+15.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 22-c %%+15.8d : |%+15.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 23-a %%-15.8d : |%-15.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 23-b %%-15.8d : |%-15.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 23-c %%-15.8d : |%-15.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 24-a %%-+15.8d : |%-+15.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 24-b %%-+15.8d : |%-+15.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 24-c %%-+15.8d : |%-+15.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 25-a %%015.8d : |%015.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 25-b %%015.8d : |%015.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 25-c %%015.8d : |%015.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 26-a %%+015.8d : |%+015.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 26-b %%+015.8d : |%+015.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 26-c %%+015.8d : |%+015.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 27-a %%+-015.8d : |%+-015.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 27-b %%+-015.8d : |%+-015.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 27-c %%+-015.8d : |%+-015.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 28-a %%0 15.8d : |%0 15.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 28-b %%0 15.8d : |%0 15.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 28-c %%0 15.8d : |%0 15.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 29-a %%0+ 15.8d : |%0+ 15.8d| :", 0));
	printf(" %d\n", printf("\nTest printf 29-b %%0+ 15.8d : |%0+ 15.8d| :", 1234));
	printf(" %d\n", printf("\nTest printf 29-c %%0+ 15.8d : |%0+ 15.8d| :", -1234));

	printf(" %d\n", printf("\nTest printf 30-a %%8.15d : |%8.15d| :", 0));
	printf(" %d\n", printf("\nTest printf 30-b %%8.15d : |%8.15d| :", 1234));
	printf(" %d\n", printf("\nTest printf 30-c %%8.15d : |%8.15d| :", -1234));

	printf(" %d\n", printf("\nTest printf 31-a %%+8.15d : |%+8.15d| :", 0));
	printf(" %d\n", printf("\nTest printf 31-b %%+8.15d : |%+8.15d| :", 1234));
	printf(" %d\n", printf("\nTest printf 31-c %%+8.15d : |%+8.15d| :", -1234));

	printf(" %d\n", printf("\nTest printf 32-a %%-8.15d : |%-8.15d| :", 0));
	printf(" %d\n", printf("\nTest printf 32-b %%-8.15d : |%-8.15d| :", 1234));
	printf(" %d\n", printf("\nTest printf 32-c %%-8.15d : |%-8.15d| :", -1234));

	printf(" %d\n", printf("\nTest printf 33-a %%-+8.15d : |%-+8.15d| :", 0));
	printf(" %d\n", printf("\nTest printf 33-b %%-+8.15d : |%-+8.15d| :", 1234));
	printf(" %d\n", printf("\nTest printf 33-c %%-+8.15d : |%-+8.15d| :", -1234));

	printf(" %d\n", printf("\nTest printf 34-a %%08.15d : |%08.15d| :", 0));
	printf(" %d\n", printf("\nTest printf 34-b %%08.15d : |%08.15d| :", 1234));
	printf(" %d\n", printf("\nTest printf 34-c %%08.15d : |%08.15d| :", -1234));

	printf(" %d\n", printf("\nTest printf 35-a %%+08.15d : |%+08.15d| :", 0));
	printf(" %d\n", printf("\nTest printf 35-b %%+08.15d : |%+08.15d| :", 1234));
	printf(" %d\n", printf("\nTest printf 35-c %%+08.15d : |%+08.15d| :", -1234));

	printf(" %d\n", printf("\nTest printf 36-a %%+-08.15d : |%+-08.15d| :", 0));
	printf(" %d\n", printf("\nTest printf 36-b %%+-08.15d : |%+-08.15d| :", 1234));
	printf(" %d\n", printf("\nTest printf 36-c %%+-08.15d : |%+-08.15d| :", -1234));

	printf(" %d\n", printf("\nTest printf 37-a %%0 8.15d : |%0 8.15d| :", 0));
	printf(" %d\n", printf("\nTest printf 37-b %%0 8.15d : |%0 8.15d| :", 1234));
	printf(" %d\n", printf("\nTest printf 37-c %%0 8.15d : |%0 8.15d| :", -1234));

	printf(" %d\n", printf("\nTest printf 38-a %%0+ 8.15d : |%0+ 8.15d| :", 0));
	printf(" %d\n", printf("\nTest printf 38-b %%0+ 8.15d : |%0+ 8.15d| :", 1234));
	printf(" %d\n", printf("\nTest printf 38-c %%0+ 8.15d : |%0+ 8.15d| :", -1234));

	printf(" %d\n", printf("\nTest printf 39-a %%d : |%d| :", INT_MIN));
	printf(" %d\n", printf("\nTest printf 39-b %%d : |%d| :", INT_MAX));

	printf(" %d\n", printf("\nTest printf 40-a %%.0d : |%.0d| :", 10));
	printf(" %d\n", printf("\nTest printf 40-b %%.0d : |%.0d| :", -10));
	printf(" %d\n", printf("\nTest printf 40-c %%.0d : |%.0d| :", 0));
	printf(" %d\n", printf("\nTest printf 40-d %%.d : |%.d| :", 0));
//	printf(" %d\n", printf("\nTest printf 40-e %%.*d : |%.*d| :", -5, 0)); //lldb
//	printf(" %d\n", printf("\nTest printf 40-f %%.*d : |%.*d| :", 0, 0)); //lldb
	printf(" %d\n", printf("\nTest printf 40-g %%5.d : |%.d| :", 0));
	printf(" %d\n", printf("\nTest printf 40-h %%-5.d : |%-.d| :", 0));
	printf(" %d\n", printf("\nTest printf 40-g %%5.d : |%.d| :", 42));
	printf(" %d\n", printf("\nTest printf 40-h %%-5.d : |%-.d| :", 42));

	//printf(" %d\n", printf("\nTest printf 41 %%*d : |%*d| :", -5, 42)); //lldb

	printf(" %d\n", printf("\nTest printf 42-a %%#d : |%#d| :", 42));
	printf(" %d\n", printf("\nTest printf 42-b %%#8d : |%#8d| :", 42));
	printf(" %d\n", printf("\nTest printf 42-c %%#.6d : |%#.6d| :", 42));
	printf(" %d\n", printf("\nTest printf 42-d %%#15.6d : |%#15.6d| :", 42));
	printf(" %d\n", printf("\nTest printf 42-e %%#015.6d : |%#015.6d| :", 42));
	printf(" %d\n", printf("\nTest printf 42-f %%#6.15d : |%#6.15d| :", 42));

	printf(" %d\n", printf("\nTest printf 43-a %%#d : |%#d| :", 0));
	printf(" %d\n", printf("\nTest printf 43-b %%#8d : |%#8d| :", 0));
	printf(" %d\n", printf("\nTest printf 43-c %%#.6d : |%#.6d| :", 0));
	printf(" %d\n", printf("\nTest printf 43-d %%#15.6d : |%#15.6d| :", 0));
	printf(" %d\n", printf("\nTest printf 43-e %%#015.6d : |%#015.6d| :", 0));
	printf(" %d\n", printf("\nTest printf 43-f %%#6.15d : |%#6.15d| :", 0));

	printf(" %d\n", printf("\nTest printf 44-aa %%#.0d : |%#.0d| :", 1));
	printf(" %d\n", printf("\nTest printf 44-ab %%#.0d : |%#.0d| :", 10));
	printf(" %d\n", printf("\nTest printf 44-ac %%#.0d : |%#.0d| :", 1234));
	printf(" %d\n", printf("\nTest printf 44-ba %%#.0d : |%#.0d| :", -1));
	printf(" %d\n", printf("\nTest printf 44-bb %%#.0d : |%#.0d| :", -10));
	printf(" %d\n", printf("\nTest printf 44-bc %%#.0d : |%#.0d| :", -1234));
	printf(" %d\n", printf("\nTest printf 44-c %%#.0d : |%#.0d| :", 0));
	printf(" %d\n", printf("\nTest printf 44-d %%#.d : |%#.d| :", 0));
//	printf(" %d\n", printf("\nTest printf 44-e %%#.*d : |%#.*d| :", -5, 0)); //lldb
	//printf(" %d\n", printf("\nTest printf 44-f %%#.*d : |%#.*d| :", 0, 0)); //lldb
	printf(" %d\n", printf("\nTest printf 44-g %%#5.d : |%#.d| :", 0));

	printf(" %d\n", printf("\nTest printf 45-a %%#-d : |%#-d| :", 45));
	printf(" %d\n", printf("\nTest printf 45-b %%#-8d : |%#-8d| :", 45));
	printf(" %d\n", printf("\nTest printf 45-c %%#-.6d : |%#-.6d| :", 45));
	printf(" %d\n", printf("\nTest printf 45-d %%#-15.6d : |%#-15.6d| :", 45));
	printf(" %d\n", printf("\nTest printf 45-e %%#-015.6d : |%#-015.6d| :", 45));
	printf(" %d\n", printf("\nTest printf 45-f %%#-6.15d : |%#-6.15d| :", 45));

	printf(" %d\n", printf("\nTest printf 46-a %%#-d : |%#-d| :", 0));
	printf(" %d\n", printf("\nTest printf 46-b %%#-8d : |%#-8d| :", 0));
	printf(" %d\n", printf("\nTest printf 46-c %%#-.6d : |%#-.6d| :", 0));
	printf(" %d\n", printf("\nTest printf 46-d %%#-15.6d : |%#-15.6d| :", 0));
	printf(" %d\n", printf("\nTest printf 46-e %%#-015.6d : |%#-015.6d| :", 0));
	printf(" %d\n", printf("\nTest printf 46-f %%#-6.15d : |%#-6.15d| :", 0));

	printf(" %d\n", printf("\nTest printf 47-aa %%#-.0d : |%#-.0d| :", 1));
	printf(" %d\n", printf("\nTest printf 47-ab %%#-.0d : |%#-.0d| :", 10));
	printf(" %d\n", printf("\nTest printf 47-ac %%#-.0d : |%#-.0d| :", 1234));
	printf(" %d\n", printf("\nTest printf 47-ba %%#-.0d : |%#-.0d| :", -1));
	printf(" %d\n", printf("\nTest printf 47-bb %%#-.0d : |%#-.0d| :", -10));
	printf(" %d\n", printf("\nTest printf 47-bc %%#-.0d : |%#-.0d| :", -1234));
	printf(" %d\n", printf("\nTest printf 47-c %%#-.0d : |%#-.0d| :", 0));
	printf(" %d\n", printf("\nTest printf 47-d %%#-.d : |%#-.d| :", 0));
//	printf(" %d\n", printf("\nTest printf 47-e %%#-.*d : |%#-.*d| :", -5, 0)); //lldb
//	printf(" %d\n", printf("\nTest printf 47-f %%#-.*d : |%#-.*d| :", 0, 0)); //lldb
	printf(" %d\n", printf("\nTest printf 47-g %%#-5.d : |%#-.d| :", 0));

	printf(" %d\n", printf("\nTest printf 48-aa %%8.0d : |%8.0d| :", 1));
	printf(" %d\n", printf("\nTest printf 48-ab %%8.0d : |%8.0d| :", 10));
	printf(" %d\n", printf("\nTest printf 48-ac %%8.0d : |%8.0d| :", 1234));
	printf(" %d\n", printf("\nTest printf 48-ba %%8.0d : |%8.0d| :", -1));
	printf(" %d\n", printf("\nTest printf 48-bb %%8.0d : |%8.0d| :", -10));
	printf(" %d\n", printf("\nTest printf 48-bc %%8.0d : |%8.0d| :", -1234));
	printf(" %d\n", printf("\nTest printf 48-c %%8.0d : |%8.0d| :", 0));
	printf(" %d\n", printf("\nTest printf 48-d %%8.d : |%8.d| :", 0));
//	printf(" %d\n", printf("\nTest printf 48-e %%8.*d : |%8.*d| :", -5, 0)); //lldb
//	printf(" %d\n", printf("\nTest printf 48-f %%8.*d : |%8.*d| :", 0, 0)); //lldb
	printf(" %d\n", printf("\nTest printf 48-g %%8.d : |%8.d| :", 0));
	printf(" %d\n", printf("\nTest printf 48-h %%-8.d : |%-8.d| :", 0));

	printf(" %d\n", printf("\nTest printf 49-aa %%#8.0d : |%#8.0d| :", 1));
	printf(" %d\n", printf("\nTest printf 49-ab %%#8.0d : |%#8.0d| :", 10));
	printf(" %d\n", printf("\nTest printf 49-ac %%#8.0d : |%#8.0d| :", 1234));
	printf(" %d\n", printf("\nTest printf 49-ba %%#8.0d : |%#8.0d| :", -1));
	printf(" %d\n", printf("\nTest printf 49-bb %%#8.0d : |%#8.0d| :", -10));
	printf(" %d\n", printf("\nTest printf 49-bc %%#8.0d : |%#8.0d| :", -1234));
	printf(" %d\n", printf("\nTest printf 49-c %%#8.0d : |%#8.0d| :", 0));
	printf(" %d\n", printf("\nTest printf 49-d %%#8.d : |%#8.d| :", 0));
//	printf(" %d\n", printf("\nTest printf 49-e %%#8.*d : |%#8.*d| :", -5, 0)); //lldb
	//printf(" %d\n", printf("\nTest printf 49-f %%#8.*d : |%#8.*d| :", 0, 0)); //lldb
	printf(" %d\n", printf("\nTest printf 49-g %%#8.d : |%#8.d| :", 0));
	printf(" %d\n", printf("\nTest printf 49-h %%-#8.d : |%#-8.d| :", 0));


	//		 _   __
	//		(_) / /
	//		   / / ___
	//		  / / / _ \
	//		 / / | (_) |
	//		/_/ (_)___/


	printf(" %d\n", printf("\nTest printf 1-a %%o : |%o| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%o : |%o| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%o : |%o| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%o : |%o| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%o : |%o| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%o : |%o| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%o : |%o| :", -2147483648));

	printf(" %d\n", printf("\nTest printf 1-a %%hho : |%hho| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%hho : |%hho| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%hho : |%hho| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%hho : |%hho| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%hho : |%hho| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%hho : |%hho| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%hho : |%hho| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%hho : |%hho| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%hho : |%hho| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%ho : |%ho| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%ho : |%ho| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%ho : |%ho| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%ho : |%ho| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%ho : |%ho| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%ho : |%ho| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%ho : |%ho| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%ho : |%ho| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%ho : |%ho| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%lo : |%lo| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%lo : |%lo| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%lo : |%lo| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%lo : |%lo| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%lo : |%lo| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%lo : |%lo| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%lo : |%lo| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%lo : |%lo| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%lo : |%lo| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%llo : |%llo| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%llo : |%llo| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%llo : |%llo| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%llo : |%llo| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%llo : |%llo| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%llo : |%llo| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%llo : |%llo| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%llo : |%llo| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%llo : |%llo| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%jo : |%jo| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%jo : |%jo| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%jo : |%jo| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%jo : |%jo| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%jo : |%jo| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%jo : |%jo| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%jo : |%jo| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%jo : |%jo| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%jo : |%jo| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%zo : |%zo| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%zo : |%zo| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%zo : |%zo| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%zo : |%zo| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%zo : |%zo| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%zo : |%zo| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%zo : |%zo| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%zo : |%zo| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%zo : |%zo| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 2-a %%-o : |%-o| :", 0));
	printf(" %d\n", printf("\nTest printf 2-b %%-o : |%-o| :", 1234));
	printf(" %d\n", printf("\nTest printf 2-c %%-o : |%-o| :", -1234));

	printf(" %d\n", printf("\nTest printf 3-a %%+o : |%+o| :", 0));
	printf(" %d\n", printf("\nTest printf 3-b %%+o : |%+o| :", 1234));
	printf(" %d\n", printf("\nTest printf 3-c %%+o : |%+o| :", -1234));

	printf(" %d\n", printf("\nTest printf 4-a %% o : |% o| :", 0));
	printf(" %d\n", printf("\nTest printf 4-b %% o : |% o| :", 1234));
	printf(" %d\n", printf("\nTest printf 4-c %% o : |% o| :", -1234));

	printf(" %d\n", printf("\nTest printf 5-a %%0o : |%0o| :", 0));
	printf(" %d\n", printf("\nTest printf 5-b %%0o : |%0o| :", 1234));
	printf(" %d\n", printf("\nTest printf 5-c %%0o : |%0o| :", -1234));

	printf(" %d\n", printf("\nTest printf 6-a %%#o : |%#o| :", 0));
	printf(" %d\n", printf("\nTest printf 6-b %%#o : |%#o| :", 1234));
	printf(" %d\n", printf("\nTest printf 6-c %%#o : |%#o| :", -1234));

	printf(" %d\n", printf("\nTest printf 3-a %%8o : |%8o| :", 0));
	printf(" %d\n", printf("\nTest printf 3-b %%8o : |%8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 3-c %%8o : |%8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 4-a %%+8o : |%+8o| :", 0));
	printf(" %d\n", printf("\nTest printf 4-b %%+8o : |%+8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 4-c %%+8o : |%+8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 5-a %%-8o : |%-8o| :", 0));
	printf(" %d\n", printf("\nTest printf 5-b %%-8o : |%-8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 5-c %%-8o : |%-8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 6-a %%8-+o : |%-+8o| :", 0));
	printf(" %d\n", printf("\nTest printf 6-b %%8-+o : |%-+8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 6-c %%8-+o : |%-+8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 7-a %%08o : |%08o| :", 0));
	printf(" %d\n", printf("\nTest printf 7-b %%08o : |%08o| :", 1234));
	printf(" %d\n", printf("\nTest printf 7-c %%08o : |%08o| :", -1234));

	printf(" %d\n", printf("\nTest printf 8-a %%+08o : |%+08o| :", 0));
	printf(" %d\n", printf("\nTest printf 8-b %%+08o : |%+08o| :", 1234));
	printf(" %d\n", printf("\nTest printf 8-c %%+08o : |%+08o| :", -1234));

	printf(" %d\n", printf("\nTest printf 9-a %%+-08o : |%+-08o| :", 0));
	printf(" %d\n", printf("\nTest printf 9-b %%+-08o : |%+-08o| :", 1234));
	printf(" %d\n", printf("\nTest printf 9-c %%+-08o : |%+-08o| :", -1234));

	printf(" %d\n", printf("\nTest printf 10-a %%0 8o : |%0 8o| :", 0));
	printf(" %d\n", printf("\nTest printf 10-b %%0 8o : |%0 8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 10-c %%0 8o : |%0 8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 11-a %%0+ 8o : |%0+ 8o| :", 0));
	printf(" %d\n", printf("\nTest printf 11-b %%0+ 8o : |%0+ 8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 11-c %%0+ 8o : |%0+ 8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 12-a %%.8o : |%.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 12-b %%.8o : |%.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 12-c %%.8o : |%.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 13-a %%+.8o : |%+.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 13-b %%+.8o : |%+.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 13-c %%+.8o : |%+.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 14-a %%-.8o : |%-.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 14-b %%-.8o : |%-.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 14-c %%-.8o : |%-.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 15-a %%-+.8o : |%-+.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 15-b %%-+.8o : |%-+.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 15-c %%-+.8o : |%-+.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 16-a %%0.8o : |%0.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 16-b %%0.8o : |%0.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 16-c %%0.8o : |%0.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 17-a %%+0.8o : |%+0.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 17-b %%+0.8o : |%+0.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 17-c %%+0.8o : |%+0.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 18-a %%+-0.8o : |%+-0.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 18-b %%+-0.8o : |%+-0.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 18-c %%+-0.8o : |%+-0.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 19-a %%0 .8o : |%0 .8o| :", 0));
	printf(" %d\n", printf("\nTest printf 19-b %%0 .8o : |%0 .8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 19-c %%0 .8o : |%0 .8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 20-a %%0+ .8o : |%0+ .8o| :", 0));
	printf(" %d\n", printf("\nTest printf 20-b %%0+ .8o : |%0+ .8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 20-c %%0+ .8o : |%0+ .8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 21-a %%15.8o : |%15.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 21-b %%15.8o : |%15.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 21-c %%15.8o : |%15.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 22-a %%+15.8o : |%+15.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 22-b %%+15.8o : |%+15.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 22-c %%+15.8o : |%+15.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 23-a %%-15.8o : |%-15.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 23-b %%-15.8o : |%-15.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 23-c %%-15.8o : |%-15.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 24-a %%-+15.8o : |%-+15.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 24-b %%-+15.8o : |%-+15.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 24-c %%-+15.8o : |%-+15.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 25-a %%015.8o : |%015.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 25-b %%015.8o : |%015.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 25-c %%015.8o : |%015.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 26-a %%+015.8o : |%+015.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 26-b %%+015.8o : |%+015.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 26-c %%+015.8o : |%+015.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 27-a %%+-015.8o : |%+-015.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 27-b %%+-015.8o : |%+-015.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 27-c %%+-015.8o : |%+-015.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 28-a %%0 15.8o : |%0 15.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 28-b %%0 15.8o : |%0 15.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 28-c %%0 15.8o : |%0 15.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 29-a %%0+ 15.8o : |%0+ 15.8o| :", 0));
	printf(" %d\n", printf("\nTest printf 29-b %%0+ 15.8o : |%0+ 15.8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 29-c %%0+ 15.8o : |%0+ 15.8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 30-a %%8.15o : |%8.15o| :", 0));
	printf(" %d\n", printf("\nTest printf 30-b %%8.15o : |%8.15o| :", 1234));
	printf(" %d\n", printf("\nTest printf 30-c %%8.15o : |%8.15o| :", -1234));

	printf(" %d\n", printf("\nTest printf 31-a %%+8.15o : |%+8.15o| :", 0));
	printf(" %d\n", printf("\nTest printf 31-b %%+8.15o : |%+8.15o| :", 1234));
	printf(" %d\n", printf("\nTest printf 31-c %%+8.15o : |%+8.15o| :", -1234));

	printf(" %d\n", printf("\nTest printf 32-a %%-8.15o : |%-8.15o| :", 0));
	printf(" %d\n", printf("\nTest printf 32-b %%-8.15o : |%-8.15o| :", 1234));
	printf(" %d\n", printf("\nTest printf 32-c %%-8.15o : |%-8.15o| :", -1234));

	printf(" %d\n", printf("\nTest printf 33-a %%-+8.15o : |%-+8.15o| :", 0));
	printf(" %d\n", printf("\nTest printf 33-b %%-+8.15o : |%-+8.15o| :", 1234));
	printf(" %d\n", printf("\nTest printf 33-c %%-+8.15o : |%-+8.15o| :", -1234));

	printf(" %d\n", printf("\nTest printf 34-a %%08.15o : |%08.15o| :", 0));
	printf(" %d\n", printf("\nTest printf 34-b %%08.15o : |%08.15o| :", 1234));
	printf(" %d\n", printf("\nTest printf 34-c %%08.15o : |%08.15o| :", -1234));

	printf(" %d\n", printf("\nTest printf 35-a %%+08.15o : |%+08.15o| :", 0));
	printf(" %d\n", printf("\nTest printf 35-b %%+08.15o : |%+08.15o| :", 1234));
	printf(" %d\n", printf("\nTest printf 35-c %%+08.15o : |%+08.15o| :", -1234));

	printf(" %d\n", printf("\nTest printf 36-a %%+-08.15o : |%+-08.15o| :", 0));
	printf(" %d\n", printf("\nTest printf 36-b %%+-08.15o : |%+-08.15o| :", 1234));
	printf(" %d\n", printf("\nTest printf 36-c %%+-08.15o : |%+-08.15o| :", -1234));

	printf(" %d\n", printf("\nTest printf 37-a %%0 8.15o : |%0 8.15o| :", 0));
	printf(" %d\n", printf("\nTest printf 37-b %%0 8.15o : |%0 8.15o| :", 1234));
	printf(" %d\n", printf("\nTest printf 37-c %%0 8.15o : |%0 8.15o| :", -1234));

	printf(" %d\n", printf("\nTest printf 38-a %%0+ 8.15o : |%0+ 8.15o| :", 0));
	printf(" %d\n", printf("\nTest printf 38-b %%0+ 8.15o : |%0+ 8.15o| :", 1234));
	printf(" %d\n", printf("\nTest printf 38-c %%0+ 8.15o : |%0+ 8.15o| :", -1234));

	printf(" %d\n", printf("\nTest printf 39-a %%o : |%o| :", INT_MIN));
	printf(" %d\n", printf("\nTest printf 39-b %%o : |%o| :", INT_MAX));

	printf(" %d\n", printf("\nTest printf 40-aa %%.0o : |%.0o| :", 1));
	printf(" %d\n", printf("\nTest printf 40-ab %%.0o : |%.0o| :", 10));
	printf(" %d\n", printf("\nTest printf 40-ac %%.0o : |%.0o| :", 1234));
	printf(" %d\n", printf("\nTest printf 40-ba %%.0o : |%.0o| :", -1));
	printf(" %d\n", printf("\nTest printf 40-bb %%.0o : |%.0o| :", -10));
	printf(" %d\n", printf("\nTest printf 40-bc %%.0o : |%.0o| :", -1234));
	printf(" %d\n", printf("\nTest printf 40-c %%.0o : |%.0o| :", 0));
	printf(" %d\n", printf("\nTest printf 40-d %%.o : |%.o| :", 0));
//	printf(" %d\n", printf("\nTest printf 40-e %%.*o : |%.*o| :", -5, 0)); //lldb
//	printf(" %d\n", printf("\nTest printf 40-f %%.*o : |%.*o| :", 0, 0)); //lldb
	printf(" %d\n", printf("\nTest printf 40-g %%5.o : |%.o| :", 0));
	printf(" %d\n", printf("\nTest printf 40-h %%-5.o : |%.o| :", 0));

//	printf(" %d\n", printf("\nTest printf 41 %%*o : |%*o| :", -5, 42)); //lldb

	printf(" %d\n", printf("\nTest printf 42-a %%#o : |%#o| :", 42));
	printf(" %d\n", printf("\nTest printf 42-b %%#8o : |%#8o| :", 42));
	printf(" %d\n", printf("\nTest printf 42-c %%#.6o : |%#.6o| :", 42));
	printf(" %d\n", printf("\nTest printf 42-d %%#15.6o : |%#15.6o| :", 42));
	printf(" %d\n", printf("\nTest printf 42-e %%#015.6o : |%#015.6o| :", 42));
	printf(" %d\n", printf("\nTest printf 42-f %%#6.15o : |%#6.15o| :", 42));

	printf(" %d\n", printf("\nTest printf 43-a %%#o : |%#o| :", 0));
	printf(" %d\n", printf("\nTest printf 43-b %%#8o : |%#8o| :", 0));
	printf(" %d\n", printf("\nTest printf 43-c %%#.6o : |%#.6o| :", 0));
	printf(" %d\n", printf("\nTest printf 43-d %%#15.6o : |%#15.6o| :", 0));
	printf(" %d\n", printf("\nTest printf 43-e %%#015.6o : |%#015.6o| :", 0));
	printf(" %d\n", printf("\nTest printf 43-f %%#6.15o : |%#6.15o| :", 0));

	printf(" %d\n", printf("\nTest printf 44-aa %%#.0o : |%#.0o| :", 1));
	printf(" %d\n", printf("\nTest printf 44-ab %%#.0o : |%#.0o| :", 10));
	printf(" %d\n", printf("\nTest printf 44-ac %%#.0o : |%#.0o| :", 1234));
	printf(" %d\n", printf("\nTest printf 44-ba %%#.0o : |%#.0o| :", -1));
	printf(" %d\n", printf("\nTest printf 44-bb %%#.0o : |%#.0o| :", -10));
	printf(" %d\n", printf("\nTest printf 44-bc %%#.0o : |%#.0o| :", -1234));
	printf(" %d\n", printf("\nTest printf 44-c %%#.0o : |%#.0o| :", 0));
	printf(" %d\n", printf("\nTest printf 44-d %%#.o : |%#.o| :", 0));
//	printf(" %d\n", printf("\nTest printf 44-e %%#.*o : |%#.*o| :", -5, 0)); //lldb
//	printf(" %d\n", printf("\nTest printf 44-f %%#.*o : |%#.*o| :", 0, 0)); //lldb
	printf(" %d\n", printf("\nTest printf 44-g %%#5.o : |%#.o| :", 0));

	printf(" %d\n", printf("\nTest printf 45-a %%#-o : |%#-o| :", 45));
	printf(" %d\n", printf("\nTest printf 45-b %%#-8o : |%#-8o| :", 45));
	printf(" %d\n", printf("\nTest printf 45-c %%#-.6o : |%#-.6o| :", 45));
	printf(" %d\n", printf("\nTest printf 45-d %%#-15.6o : |%#-15.6o| :", 45));
	printf(" %d\n", printf("\nTest printf 45-e %%#-015.6o : |%#-015.6o| :", 45));
	printf(" %d\n", printf("\nTest printf 45-f %%#-6.15o : |%#-6.15o| :", 45));

	printf(" %d\n", printf("\nTest printf 46-a %%#-o : |%#-o| :", 0));
	printf(" %d\n", printf("\nTest printf 46-b %%#-8o : |%#-8o| :", 0));
	printf(" %d\n", printf("\nTest printf 46-c %%#-.6o : |%#-.6o| :", 0));
	printf(" %d\n", printf("\nTest printf 46-d %%#-15.6o : |%#-15.6o| :", 0));
	printf(" %d\n", printf("\nTest printf 46-e %%#-015.6o : |%#-015.6o| :", 0));
	printf(" %d\n", printf("\nTest printf 46-f %%#-6.15o : |%#-6.15o| :", 0));

	printf(" %d\n", printf("\nTest printf 47-aa %%#-.0o : |%#-.0o| :", 1));
	printf(" %d\n", printf("\nTest printf 47-ab %%#-.0o : |%#-.0o| :", 10));
	printf(" %d\n", printf("\nTest printf 47-ac %%#-.0o : |%#-.0o| :", 1234));
	printf(" %d\n", printf("\nTest printf 47-ba %%#-.0o : |%#-.0o| :", -1));
	printf(" %d\n", printf("\nTest printf 47-bb %%#-.0o : |%#-.0o| :", -10));
	printf(" %d\n", printf("\nTest printf 47-bc %%#-.0o : |%#-.0o| :", -1234));
	printf(" %d\n", printf("\nTest printf 47-c %%#-.0o : |%#-.0o| :", 0));
	printf(" %d\n", printf("\nTest printf 47-d %%#-.o : |%#-.o| :", 0));
//	printf(" %d\n", printf("\nTest printf 47-e %%#-.*o : |%#-.*o| :", -5, 0)); //lldb
//	printf(" %d\n", printf("\nTest printf 47-f %%#-.*o : |%#-.*o| :", 0, 0)); //lldb
	printf(" %d\n", printf("\nTest printf 47-g %%#-5.o : |%#-.o| :", 0));

	printf(" %d\n", printf("\nTest printf 48-aa %%8.0o : |%8.0o| :", 1));
	printf(" %d\n", printf("\nTest printf 48-ab %%8.0o : |%8.0o| :", 10));
	printf(" %d\n", printf("\nTest printf 48-ac %%8.0o : |%8.0o| :", 1234));
	printf(" %d\n", printf("\nTest printf 48-ba %%8.0o : |%8.0o| :", -1));
	printf(" %d\n", printf("\nTest printf 48-bb %%8.0o : |%8.0o| :", -10));
	printf(" %d\n", printf("\nTest printf 48-bc %%8.0o : |%8.0o| :", -1234));
	printf(" %d\n", printf("\nTest printf 48-c %%8.0o : |%8.0o| :", 0));
	printf(" %d\n", printf("\nTest printf 48-d %%8.o : |%8.o| :", 0));
//	printf(" %d\n", printf("\nTest printf 48-e %%8.*o : |%8.*o| :", -5, 0)); //lldb
//	printf(" %d\n", printf("\nTest printf 48-f %%8.*o : |%8.*o| :", 0, 0)); //lldb
	printf(" %d\n", printf("\nTest printf 48-g %%8.o : |%8.o| :", 0));
	printf(" %d\n", printf("\nTest printf 48-h %%-8.o : |%-8.o| :", 0));

	printf(" %d\n", printf("\nTest printf 49-aa %%#8.0o : |%#8.0o| :", 1));
	printf(" %d\n", printf("\nTest printf 49-ab %%#8.0o : |%#8.0o| :", 10));
	printf(" %d\n", printf("\nTest printf 49-ac %%#8.0o : |%#8.0o| :", 1234));
	printf(" %d\n", printf("\nTest printf 49-ba %%#8.0o : |%#8.0o| :", -1));
	printf(" %d\n", printf("\nTest printf 49-bb %%#8.0o : |%#8.0o| :", -10));
	printf(" %d\n", printf("\nTest printf 49-bc %%#8.0o : |%#8.0o| :", -1234));
	printf(" %d\n", printf("\nTest printf 49-c %%#8.0o : |%#8.0o| :", 0));
	printf(" %d\n", printf("\nTest printf 49-d %%#8.o : |%#8.o| :", 0));
//	printf(" %d\n", printf("\nTest printf 49-e %%#8.*o : |%#8.*o| :", -5, 0)); //lldb
//	printf(" %d\n", printf("\nTest printf 49-f %%#8.*o : |%#8.*o| :", 0, 0)); //lldb
	printf(" %d\n", printf("\nTest printf 49-g %%#8.o : |%#8.o| :", 0));
	printf(" %d\n", printf("\nTest printf 49-h %%-#8.o : |%#-8.o| :", 0));

	printf(" %d\n", printf("\nTest printf 50-a %%-#8o : |%-#8o| :", 0));
	printf(" %d\n", printf("\nTest printf 50-b %%-#8o : |%-#8o| :", 1234));
	printf(" %d\n", printf("\nTest printf 50-c %%-#8o : |%-#8o| :", -1234));

	printf(" %d\n", printf("\nTest printf 51-a %%#-6o : |%-#4o| :", 2500));
	printf(" %d\n", printf("\nTest printf 51-b %%#-6o : |%#-5o| :", 2500));
	printf(" %d\n", printf("\nTest printf 51-c %%#-6o : |%#-6o| :", 2500));


	//		 _   __
	//		(_) / /
	//		   / /_   _
	//		  / /| | | |
	//		 / / | |_| |
	//		/_/ (_)__,_|


	printf(" %d\n", printf("\nTest printf 1-a %%u : |%u| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%u : |%u| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%u : |%u| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%u : |%u| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%u : |%u| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%u : |%u| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%u : |%u| :", -2147483648));

	printf(" %d\n", printf("\nTest printf 1-a %%hhu : |%hhu| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%hhu : |%hhu| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%hhu : |%hhu| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%hhu : |%hhu| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%hhu : |%hhu| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%hhu : |%hhu| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%hhu : |%hhu| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%hhu : |%hhu| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%hhu : |%hhu| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%hu : |%hu| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%hu : |%hu| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%hu : |%hu| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%hu : |%hu| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%hu : |%hu| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%hu : |%hu| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%hu : |%hu| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%hu : |%hu| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%hu : |%hu| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%lu : |%lu| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%lu : |%lu| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%lu : |%lu| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%lu : |%lu| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%lu : |%lu| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%lu : |%lu| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%lu : |%lu| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%lu : |%lu| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%lu : |%lu| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%llu : |%llu| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%llu : |%llu| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%llu : |%llu| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%llu : |%llu| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%llu : |%llu| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%llu : |%llu| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%llu : |%llu| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%llu : |%llu| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%llu : |%llu| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%ju : |%ju| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%ju : |%ju| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%ju : |%ju| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%ju : |%ju| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%ju : |%ju| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%ju : |%ju| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%ju : |%ju| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%ju : |%ju| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%ju : |%ju| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%zu : |%zu| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%zu : |%zu| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%zu : |%zu| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%zu : |%zu| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%zu : |%zu| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%zu : |%zu| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%zu : |%zu| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%zu : |%zu| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%zu : |%zu| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%U : |%U| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%U : |%U| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%U : |%U| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%U : |%U| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%U : |%U| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%U : |%U| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%U : |%U| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%U : |%U| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%U : |%U| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 2-a %%-u : |%-u| :", 0));
	printf(" %d\n", printf("\nTest printf 2-b %%-u : |%-u| :", 1234));
	printf(" %d\n", printf("\nTest printf 2-c %%-u : |%-u| :", -1234));

	printf(" %d\n", printf("\nTest printf 3-a %%+u : |%+u| :", 0));
	printf(" %d\n", printf("\nTest printf 3-b %%+u : |%+u| :", 1234));
	printf(" %d\n", printf("\nTest printf 3-c %%+u : |%+u| :", -1234));

	printf(" %d\n", printf("\nTest printf 4-a %% u : |% u| :", 0));
	printf(" %d\n", printf("\nTest printf 4-b %% u : |% u| :", 1234));
	printf(" %d\n", printf("\nTest printf 4-c %% u : |% u| :", -1234));

	printf(" %d\n", printf("\nTest printf 5-a %%0u : |%0u| :", 0));
	printf(" %d\n", printf("\nTest printf 5-b %%0u : |%0u| :", 1234));
	printf(" %d\n", printf("\nTest printf 5-c %%0u : |%0u| :", -1234));

	printf(" %d\n", printf("\nTest printf 6-a %%#u : |%#u| :", 0));
	printf(" %d\n", printf("\nTest printf 6-b %%#u : |%#u| :", 1234));
	printf(" %d\n", printf("\nTest printf 6-c %%#u : |%#u| :", -1234));

	printf(" %d\n", printf("\nTest printf 3-a %%8u : |%8u| :", 0));
	printf(" %d\n", printf("\nTest printf 3-b %%8u : |%8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 3-c %%8u : |%8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 4-a %%+8u : |%+8u| :", 0));
	printf(" %d\n", printf("\nTest printf 4-b %%+8u : |%+8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 4-c %%+8u : |%+8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 5-a %%-8u : |%-8u| :", 0));
	printf(" %d\n", printf("\nTest printf 5-b %%-8u : |%-8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 5-c %%-8u : |%-8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 6-a %%8-+u : |%-+8u| :", 0));
	printf(" %d\n", printf("\nTest printf 6-b %%8-+u : |%-+8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 6-c %%8-+u : |%-+8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 7-a %%08u : |%08u| :", 0));
	printf(" %d\n", printf("\nTest printf 7-b %%08u : |%08u| :", 1234));
	printf(" %d\n", printf("\nTest printf 7-c %%08u : |%08u| :", -1234));

	printf(" %d\n", printf("\nTest printf 8-a %%+08u : |%+08u| :", 0));
	printf(" %d\n", printf("\nTest printf 8-b %%+08u : |%+08u| :", 1234));
	printf(" %d\n", printf("\nTest printf 8-c %%+08u : |%+08u| :", -1234));

	printf(" %d\n", printf("\nTest printf 9-a %%+-08u : |%+-08u| :", 0));
	printf(" %d\n", printf("\nTest printf 9-b %%+-08u : |%+-08u| :", 1234));
	printf(" %d\n", printf("\nTest printf 9-c %%+-08u : |%+-08u| :", -1234));

	printf(" %d\n", printf("\nTest printf 10-a %%0 8u : |%0 8u| :", 0));
	printf(" %d\n", printf("\nTest printf 10-b %%0 8u : |%0 8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 10-c %%0 8u : |%0 8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 11-a %%0+ 8u : |%0+ 8u| :", 0));
	printf(" %d\n", printf("\nTest printf 11-b %%0+ 8u : |%0+ 8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 11-c %%0+ 8u : |%0+ 8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 12-a %%.8u : |%.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 12-b %%.8u : |%.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 12-c %%.8u : |%.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 13-a %%+.8u : |%+.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 13-b %%+.8u : |%+.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 13-c %%+.8u : |%+.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 14-a %%-.8u : |%-.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 14-b %%-.8u : |%-.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 14-c %%-.8u : |%-.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 15-a %%-+.8u : |%-+.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 15-b %%-+.8u : |%-+.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 15-c %%-+.8u : |%-+.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 16-a %%0.8u : |%0.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 16-b %%0.8u : |%0.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 16-c %%0.8u : |%0.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 17-a %%+0.8u : |%+0.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 17-b %%+0.8u : |%+0.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 17-c %%+0.8u : |%+0.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 18-a %%+-0.8u : |%+-0.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 18-b %%+-0.8u : |%+-0.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 18-c %%+-0.8u : |%+-0.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 19-a %%0 .8u : |%0 .8u| :", 0));
	printf(" %d\n", printf("\nTest printf 19-b %%0 .8u : |%0 .8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 19-c %%0 .8u : |%0 .8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 20-a %%0+ .8u : |%0+ .8u| :", 0));
	printf(" %d\n", printf("\nTest printf 20-b %%0+ .8u : |%0+ .8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 20-c %%0+ .8u : |%0+ .8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 21-a %%15.8u : |%15.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 21-b %%15.8u : |%15.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 21-c %%15.8u : |%15.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 22-a %%+15.8u : |%+15.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 22-b %%+15.8u : |%+15.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 22-c %%+15.8u : |%+15.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 23-a %%-15.8u : |%-15.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 23-b %%-15.8u : |%-15.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 23-c %%-15.8u : |%-15.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 24-a %%-+15.8u : |%-+15.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 24-b %%-+15.8u : |%-+15.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 24-c %%-+15.8u : |%-+15.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 25-a %%015.8u : |%015.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 25-b %%015.8u : |%015.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 25-c %%015.8u : |%015.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 26-a %%+015.8u : |%+015.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 26-b %%+015.8u : |%+015.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 26-c %%+015.8u : |%+015.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 27-a %%+-015.8u : |%+-015.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 27-b %%+-015.8u : |%+-015.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 27-c %%+-015.8u : |%+-015.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 28-a %%0 15.8u : |%0 15.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 28-b %%0 15.8u : |%0 15.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 28-c %%0 15.8u : |%0 15.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 29-a %%0+ 15.8u : |%0+ 15.8u| :", 0));
	printf(" %d\n", printf("\nTest printf 29-b %%0+ 15.8u : |%0+ 15.8u| :", 1234));
	printf(" %d\n", printf("\nTest printf 29-c %%0+ 15.8u : |%0+ 15.8u| :", -1234));

	printf(" %d\n", printf("\nTest printf 30-a %%8.15u : |%8.15u| :", 0));
	printf(" %d\n", printf("\nTest printf 30-b %%8.15u : |%8.15u| :", 1234));
	printf(" %d\n", printf("\nTest printf 30-c %%8.15u : |%8.15u| :", -1234));

	printf(" %d\n", printf("\nTest printf 31-a %%+8.15u : |%+8.15u| :", 0));
	printf(" %d\n", printf("\nTest printf 31-b %%+8.15u : |%+8.15u| :", 1234));
	printf(" %d\n", printf("\nTest printf 31-c %%+8.15u : |%+8.15u| :", -1234));

	printf(" %d\n", printf("\nTest printf 32-a %%-8.15u : |%-8.15u| :", 0));
	printf(" %d\n", printf("\nTest printf 32-b %%-8.15u : |%-8.15u| :", 1234));
	printf(" %d\n", printf("\nTest printf 32-c %%-8.15u : |%-8.15u| :", -1234));

	printf(" %d\n", printf("\nTest printf 33-a %%-+8.15u : |%-+8.15u| :", 0));
	printf(" %d\n", printf("\nTest printf 33-b %%-+8.15u : |%-+8.15u| :", 1234));
	printf(" %d\n", printf("\nTest printf 33-c %%-+8.15u : |%-+8.15u| :", -1234));

	printf(" %d\n", printf("\nTest printf 34-a %%08.15u : |%08.15u| :", 0));
	printf(" %d\n", printf("\nTest printf 34-b %%08.15u : |%08.15u| :", 1234));
	printf(" %d\n", printf("\nTest printf 34-c %%08.15u : |%08.15u| :", -1234));

	printf(" %d\n", printf("\nTest printf 35-a %%+08.15u : |%+08.15u| :", 0));
	printf(" %d\n", printf("\nTest printf 35-b %%+08.15u : |%+08.15u| :", 1234));
	printf(" %d\n", printf("\nTest printf 35-c %%+08.15u : |%+08.15u| :", -1234));

	printf(" %d\n", printf("\nTest printf 36-a %%+-08.15u : |%+-08.15u| :", 0));
	printf(" %d\n", printf("\nTest printf 36-b %%+-08.15u : |%+-08.15u| :", 1234));
	printf(" %d\n", printf("\nTest printf 36-c %%+-08.15u : |%+-08.15u| :", -1234));

	printf(" %d\n", printf("\nTest printf 37-a %%0 8.15u : |%0 8.15u| :", 0));
	printf(" %d\n", printf("\nTest printf 37-b %%0 8.15u : |%0 8.15u| :", 1234));
	printf(" %d\n", printf("\nTest printf 37-c %%0 8.15u : |%0 8.15u| :", -1234));

	printf(" %d\n", printf("\nTest printf 38-a %%0+ 8.15u : |%0+ 8.15u| :", 0));
	printf(" %d\n", printf("\nTest printf 38-b %%0+ 8.15u : |%0+ 8.15u| :", 1234));
	printf(" %d\n", printf("\nTest printf 38-c %%0+ 8.15u : |%0+ 8.15u| :", -1234));

	printf(" %d\n", printf("\nTest printf 39-a %%u : |%u| :", INT_MIN));
	printf(" %d\n", printf("\nTest printf 39-b %%u : |%u| :", INT_MAX));

	printf(" %d\n", printf("\nTest printf 40-a %%.0u : |%.0u| :", 10));
	printf(" %d\n", printf("\nTest printf 40-b %%.0u : |%.0u| :", -10));
	printf(" %d\n", printf("\nTest printf 40-c %%.0u : |%.0u| :", 0));
	printf(" %d\n", printf("\nTest printf 40-d %%.u : |%.u| :", 0));
//	printf(" %d\n", printf("\nTest printf 40-e %%.*u : |%.*u| :", -5, 0)); //lldb
//	printf(" %d\n", printf("\nTest printf 40-f %%.*u : |%.*u| :", 0, 0)); //lldb
	printf(" %d\n", printf("\nTest printf 40-g %%5.u : |%.u| :", 0));
	printf(" %d\n", printf("\nTest printf 40-h %%-5.u : |%.u| :", 0));

//	printf(" %d\n", printf("\nTest printf 41 %%*u : |%*u| :", -5, 42)); //lldb

	printf(" %d\n", printf("\nTest printf 42-a %%#u : |%#u| :", 42));
	printf(" %d\n", printf("\nTest printf 42-b %%#8u : |%#8u| :", 42));
	printf(" %d\n", printf("\nTest printf 42-c %%#.6u : |%#.6u| :", 42));
	printf(" %d\n", printf("\nTest printf 42-d %%#15.6u : |%#15.6u| :", 42));
	printf(" %d\n", printf("\nTest printf 42-e %%#015.6u : |%#015.6u| :", 42));
	printf(" %d\n", printf("\nTest printf 42-f %%#6.15u : |%#6.15u| :", 42));

	printf(" %d\n", printf("\nTest printf 43-a %%#u : |%#u| :", 0));
	printf(" %d\n", printf("\nTest printf 43-b %%#8u : |%#8u| :", 0));
	printf(" %d\n", printf("\nTest printf 43-c %%#.6u : |%#.6u| :", 0));
	printf(" %d\n", printf("\nTest printf 43-d %%#15.6u : |%#15.6u| :", 0));
	printf(" %d\n", printf("\nTest printf 43-e %%#015.6u : |%#015.6u| :", 0));
	printf(" %d\n", printf("\nTest printf 43-f %%#6.15u : |%#6.15u| :", 0));

	printf(" %d\n", printf("\nTest printf 44-aa %%#.0u : |%#.0u| :", 1));
	printf(" %d\n", printf("\nTest printf 44-ab %%#.0u : |%#.0u| :", 10));
	printf(" %d\n", printf("\nTest printf 44-ac %%#.0u : |%#.0u| :", 1234));
	printf(" %d\n", printf("\nTest printf 44-ba %%#.0u : |%#.0u| :", -1));
	printf(" %d\n", printf("\nTest printf 44-bb %%#.0u : |%#.0u| :", -10));
	printf(" %d\n", printf("\nTest printf 44-bc %%#.0u : |%#.0u| :", -1234));
	printf(" %d\n", printf("\nTest printf 44-c %%#.0u : |%#.0u| :", 0));
	printf(" %d\n", printf("\nTest printf 44-d %%#.u : |%#.u| :", 0));
//	printf(" %d\n", printf("\nTest printf 44-e %%#.*u : |%#.*u| :", -5, 0)); //lldb
//	printf(" %d\n", printf("\nTest printf 44-f %%#.*u : |%#.*u| :", 0, 0)); //lldb
	printf(" %d\n", printf("\nTest printf 44-g %%#5.u : |%#.u| :", 0));

	printf(" %d\n", printf("\nTest printf 45-a %%#-u : |%#-u| :", 45));
	printf(" %d\n", printf("\nTest printf 45-b %%#-8u : |%#-8u| :", 45));
	printf(" %d\n", printf("\nTest printf 45-c %%#-.6u : |%#-.6u| :", 45));
	printf(" %d\n", printf("\nTest printf 45-d %%#-15.6u : |%#-15.6u| :", 45));
	printf(" %d\n", printf("\nTest printf 45-e %%#-015.6u : |%#-015.6u| :", 45));
	printf(" %d\n", printf("\nTest printf 45-f %%#-6.15u : |%#-6.15u| :", 45));

	printf(" %d\n", printf("\nTest printf 46-a %%#-u : |%#-u| :", 0));
	printf(" %d\n", printf("\nTest printf 46-b %%#-8u : |%#-8u| :", 0));
	printf(" %d\n", printf("\nTest printf 46-c %%#-.6u : |%#-.6u| :", 0));
	printf(" %d\n", printf("\nTest printf 46-d %%#-15.6u : |%#-15.6u| :", 0));
	printf(" %d\n", printf("\nTest printf 46-e %%#-015.6u : |%#-015.6u| :", 0));
	printf(" %d\n", printf("\nTest printf 46-f %%#-6.15u : |%#-6.15u| :", 0));

	printf(" %d\n", printf("\nTest printf 47-aa %%#-.0u : |%#-.0u| :", 1));
	printf(" %d\n", printf("\nTest printf 47-ab %%#-.0u : |%#-.0u| :", 10));
	printf(" %d\n", printf("\nTest printf 47-ac %%#-.0u : |%#-.0u| :", 1234));
	printf(" %d\n", printf("\nTest printf 47-ba %%#-.0u : |%#-.0u| :", -1));
	printf(" %d\n", printf("\nTest printf 47-bb %%#-.0u : |%#-.0u| :", -10));
	printf(" %d\n", printf("\nTest printf 47-bc %%#-.0u : |%#-.0u| :", -1234));
	printf(" %d\n", printf("\nTest printf 47-c %%#-.0u : |%#-.0u| :", 0));
	printf(" %d\n", printf("\nTest printf 47-d %%#-.u : |%#-.u| :", 0));
//	printf(" %d\n", printf("\nTest printf 47-e %%#-.*u : |%#-.*u| :", -5, 0)); //lldb
	//printf(" %d\n", printf("\nTest printf 47-f %%#-.*u : |%#-.*u| :", 0, 0)); //lldb
	printf(" %d\n", printf("\nTest printf 47-g %%#-5.u : |%#-.u| :", 0));

	printf(" %d\n", printf("\nTest printf 48-aa %%8.0u : |%8.0u| :", 1));
	printf(" %d\n", printf("\nTest printf 48-ab %%8.0u : |%8.0u| :", 10));
	printf(" %d\n", printf("\nTest printf 48-ac %%8.0u : |%8.0u| :", 1234));
	printf(" %d\n", printf("\nTest printf 48-ba %%8.0u : |%8.0u| :", -1));
	printf(" %d\n", printf("\nTest printf 48-bb %%8.0u : |%8.0u| :", -10));
	printf(" %d\n", printf("\nTest printf 48-bc %%8.0u : |%8.0u| :", -1234));
	printf(" %d\n", printf("\nTest printf 48-c %%8.0u : |%8.0u| :", 0));
	printf(" %d\n", printf("\nTest printf 48-d %%8.u : |%8.u| :", 0));
//	printf(" %d\n", printf("\nTest printf 48-e %%8.*u : |%8.*u| :", -5, 0)); //lldb
//	printf(" %d\n", printf("\nTest printf 48-f %%8.*u : |%8.*u| :", 0, 0)); //lldb
	printf(" %d\n", printf("\nTest printf 48-g %%8.u : |%8.u| :", 0));
	printf(" %d\n", printf("\nTest printf 48-h %%-8.u : |%8.u| :", 0));

	printf(" %d\n", printf("\nTest printf 49-aa %%#8.0u : |%#8.0u| :", 1));
	printf(" %d\n", printf("\nTest printf 49-ab %%#8.0u : |%#8.0u| :", 10));
	printf(" %d\n", printf("\nTest printf 49-ac %%#8.0u : |%#8.0u| :", 1234));
	printf(" %d\n", printf("\nTest printf 49-ba %%#8.0u : |%#8.0u| :", -1));
	printf(" %d\n", printf("\nTest printf 49-bb %%#8.0u : |%#8.0u| :", -10));
	printf(" %d\n", printf("\nTest printf 49-bc %%#8.0u : |%#8.0u| :", -1234));
	printf(" %d\n", printf("\nTest printf 49-c %%#8.0u : |%#8.0u| :", 0));
	printf(" %d\n", printf("\nTest printf 49-d %%#8.u : |%#8.u| :", 0));
//	printf(" %d\n", printf("\nTest printf 49-e %%#8.*u : |%#8.*u| :", -5, 0)); //lldb
//	printf(" %d\n", printf("\nTest printf 49-f %%#8.*u : |%#8.*u| :", 0, 0)); //lldb
	printf(" %d\n", printf("\nTest printf 49-g %%#8.u : |%#8.u| :", 0));
	printf(" %d\n", printf("\nTest printf 49-h %%-#8.u : |%#8.u| :", 0));

	//		 _   __
	//		(_) / /
	//		   / /__  __
	//		  / / \ \/ /
	//		 / / _ >  <
	//		/_/ (_)_/\_


	printf(" %d\n", printf("\nTest printf 1-a %%x : |%x| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%x : |%x| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%x : |%x| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%x : |%x| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%x : |%x| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%x : |%x| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%x : |%x| :", -2147483648));

	printf(" %d\n", printf("\nTest printf 1-a %%hhx : |%hhx| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%hhx : |%hhx| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%hhx : |%hhx| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%hhx : |%hhx| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%hhx : |%hhx| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%hhx : |%hhx| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%hhx : |%hhx| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%hhx : |%hhx| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%hhx : |%hhx| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%hx : |%hx| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%hx : |%hx| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%hx : |%hx| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%hx : |%hx| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%hx : |%hx| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%hx : |%hx| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%hx : |%hx| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%hx : |%hx| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%hx : |%hx| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%lx : |%lx| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%lx : |%lx| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%lx : |%lx| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%lx : |%lx| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%lx : |%lx| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%lx : |%lx| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%lx : |%lx| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%lx : |%lx| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%lx : |%lx| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%llx : |%llx| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%llx : |%llx| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%llx : |%llx| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%llx : |%llx| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%llx : |%llx| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%llx : |%llx| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%llx : |%llx| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%llx : |%llx| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%llx : |%llx| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%jx : |%jx| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%jx : |%jx| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%jx : |%jx| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%jx : |%jx| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%jx : |%jx| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%jx : |%jx| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%jx : |%jx| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%jx : |%jx| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%jx : |%jx| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%zx : |%zx| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%zx : |%zx| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%zx : |%zx| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%zx : |%zx| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%zx : |%zx| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%zx : |%zx| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%zx : |%zx| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%zx : |%zx| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%zx : |%zx| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 2-a %%-x : |%-x| :", 0));
	printf(" %d\n", printf("\nTest printf 2-b %%-x : |%-x| :", 1234));
	printf(" %d\n", printf("\nTest printf 2-c %%-x : |%-x| :", -1234));

	printf(" %d\n", printf("\nTest printf 3-a %%+x : |%+x| :", 0));
	printf(" %d\n", printf("\nTest printf 3-b %%+x : |%+x| :", 1234));
	printf(" %d\n", printf("\nTest printf 3-c %%+x : |%+x| :", -1234));

	printf(" %d\n", printf("\nTest printf 4-a %% x : |% x| :", 0));
	printf(" %d\n", printf("\nTest printf 4-b %% x : |% x| :", 1234));
	printf(" %d\n", printf("\nTest printf 4-c %% x : |% x| :", -1234));

	printf(" %d\n", printf("\nTest printf 5-a %%0x : |%0x| :", 0));
	printf(" %d\n", printf("\nTest printf 5-b %%0x : |%0x| :", 1234));
	printf(" %d\n", printf("\nTest printf 5-c %%0x : |%0x| :", -1234));

	printf(" %d\n", printf("\nTest printf 6-a %%#x : |%#x| :", 0));
	printf(" %d\n", printf("\nTest printf 6-b %%#x : |%#x| :", 1234));
	printf(" %d\n", printf("\nTest printf 6-c %%#x : |%#x| :", -1234));

	printf(" %d\n", printf("\nTest printf 3-a %%8x : |%8x| :", 0));
	printf(" %d\n", printf("\nTest printf 3-b %%8x : |%8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 3-c %%8x : |%8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 4-a %%+8x : |%+8x| :", 0));
	printf(" %d\n", printf("\nTest printf 4-b %%+8x : |%+8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 4-c %%+8x : |%+8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 5-a %%-8x : |%-8x| :", 0));
	printf(" %d\n", printf("\nTest printf 5-b %%-8x : |%-8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 5-c %%-8x : |%-8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 6-a %%8-+x : |%-+8x| :", 0));
	printf(" %d\n", printf("\nTest printf 6-b %%8-+x : |%-+8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 6-c %%8-+x : |%-+8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 7-a %%08x : |%08x| :", 0));
	printf(" %d\n", printf("\nTest printf 7-b %%08x : |%08x| :", 1234));
	printf(" %d\n", printf("\nTest printf 7-c %%08x : |%08x| :", -1234));

	printf(" %d\n", printf("\nTest printf 8-a %%+08x : |%+08x| :", 0));
	printf(" %d\n", printf("\nTest printf 8-b %%+08x : |%+08x| :", 1234));
	printf(" %d\n", printf("\nTest printf 8-c %%+08x : |%+08x| :", -1234));

	printf(" %d\n", printf("\nTest printf 9-a %%+-08x : |%+-08x| :", 0));
	printf(" %d\n", printf("\nTest printf 9-b %%+-08x : |%+-08x| :", 1234));
	printf(" %d\n", printf("\nTest printf 9-c %%+-08x : |%+-08x| :", -1234));

	printf(" %d\n", printf("\nTest printf 10-a %%0 8x : |%0 8x| :", 0));
	printf(" %d\n", printf("\nTest printf 10-b %%0 8x : |%0 8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 10-c %%0 8x : |%0 8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 11-a %%0+ 8x : |%0+ 8x| :", 0));
	printf(" %d\n", printf("\nTest printf 11-b %%0+ 8x : |%0+ 8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 11-c %%0+ 8x : |%0+ 8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 12-a %%.8x : |%.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 12-b %%.8x : |%.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 12-c %%.8x : |%.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 13-a %%+.8x : |%+.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 13-b %%+.8x : |%+.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 13-c %%+.8x : |%+.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 14-a %%-.8x : |%-.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 14-b %%-.8x : |%-.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 14-c %%-.8x : |%-.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 15-a %%-+.8x : |%-+.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 15-b %%-+.8x : |%-+.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 15-c %%-+.8x : |%-+.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 16-a %%0.8x : |%0.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 16-b %%0.8x : |%0.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 16-c %%0.8x : |%0.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 17-a %%+0.8x : |%+0.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 17-b %%+0.8x : |%+0.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 17-c %%+0.8x : |%+0.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 18-a %%+-0.8x : |%+-0.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 18-b %%+-0.8x : |%+-0.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 18-c %%+-0.8x : |%+-0.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 19-a %%0 .8x : |%0 .8x| :", 0));
	printf(" %d\n", printf("\nTest printf 19-b %%0 .8x : |%0 .8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 19-c %%0 .8x : |%0 .8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 20-a %%0+ .8x : |%0+ .8x| :", 0));
	printf(" %d\n", printf("\nTest printf 20-b %%0+ .8x : |%0+ .8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 20-c %%0+ .8x : |%0+ .8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 21-a %%15.8x : |%15.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 21-b %%15.8x : |%15.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 21-c %%15.8x : |%15.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 22-a %%+15.8x : |%+15.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 22-b %%+15.8x : |%+15.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 22-c %%+15.8x : |%+15.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 23-a %%-15.8x : |%-15.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 23-b %%-15.8x : |%-15.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 23-c %%-15.8x : |%-15.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 24-a %%-+15.8x : |%-+15.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 24-b %%-+15.8x : |%-+15.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 24-c %%-+15.8x : |%-+15.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 25-a %%015.8x : |%015.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 25-b %%015.8x : |%015.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 25-c %%015.8x : |%015.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 26-a %%+015.8x : |%+015.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 26-b %%+015.8x : |%+015.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 26-c %%+015.8x : |%+015.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 27-a %%+-015.8x : |%+-015.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 27-b %%+-015.8x : |%+-015.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 27-c %%+-015.8x : |%+-015.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 28-a %%0 15.8x : |%0 15.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 28-b %%0 15.8x : |%0 15.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 28-c %%0 15.8x : |%0 15.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 29-a %%0+ 15.8x : |%0+ 15.8x| :", 0));
	printf(" %d\n", printf("\nTest printf 29-b %%0+ 15.8x : |%0+ 15.8x| :", 1234));
	printf(" %d\n", printf("\nTest printf 29-c %%0+ 15.8x : |%0+ 15.8x| :", -1234));

	printf(" %d\n", printf("\nTest printf 30-a %%8.15x : |%8.15x| :", 0));
	printf(" %d\n", printf("\nTest printf 30-b %%8.15x : |%8.15x| :", 1234));
	printf(" %d\n", printf("\nTest printf 30-c %%8.15x : |%8.15x| :", -1234));

	printf(" %d\n", printf("\nTest printf 31-a %%+8.15x : |%+8.15x| :", 0));
	printf(" %d\n", printf("\nTest printf 31-b %%+8.15x : |%+8.15x| :", 1234));
	printf(" %d\n", printf("\nTest printf 31-c %%+8.15x : |%+8.15x| :", -1234));

	printf(" %d\n", printf("\nTest printf 32-a %%-8.15x : |%-8.15x| :", 0));
	printf(" %d\n", printf("\nTest printf 32-b %%-8.15x : |%-8.15x| :", 1234));
	printf(" %d\n", printf("\nTest printf 32-c %%-8.15x : |%-8.15x| :", -1234));

	printf(" %d\n", printf("\nTest printf 33-a %%-+8.15x : |%-+8.15x| :", 0));
	printf(" %d\n", printf("\nTest printf 33-b %%-+8.15x : |%-+8.15x| :", 1234));
	printf(" %d\n", printf("\nTest printf 33-c %%-+8.15x : |%-+8.15x| :", -1234));

	printf(" %d\n", printf("\nTest printf 34-a %%08.15x : |%08.15x| :", 0));
	printf(" %d\n", printf("\nTest printf 34-b %%08.15x : |%08.15x| :", 1234));
	printf(" %d\n", printf("\nTest printf 34-c %%08.15x : |%08.15x| :", -1234));

	printf(" %d\n", printf("\nTest printf 35-a %%+08.15x : |%+08.15x| :", 0));
	printf(" %d\n", printf("\nTest printf 35-b %%+08.15x : |%+08.15x| :", 1234));
	printf(" %d\n", printf("\nTest printf 35-c %%+08.15x : |%+08.15x| :", -1234));

	printf(" %d\n", printf("\nTest printf 36-a %%+-08.15x : |%+-08.15x| :", 0));
	printf(" %d\n", printf("\nTest printf 36-b %%+-08.15x : |%+-08.15x| :", 1234));
	printf(" %d\n", printf("\nTest printf 36-c %%+-08.15x : |%+-08.15x| :", -1234));

	printf(" %d\n", printf("\nTest printf 37-a %%0 8.15x : |%0 8.15x| :", 0));
	printf(" %d\n", printf("\nTest printf 37-b %%0 8.15x : |%0 8.15x| :", 1234));
	printf(" %d\n", printf("\nTest printf 37-c %%0 8.15x : |%0 8.15x| :", -1234));

	printf(" %d\n", printf("\nTest printf 38-a %%0+ 8.15x : |%0+ 8.15x| :", 0));
	printf(" %d\n", printf("\nTest printf 38-b %%0+ 8.15x : |%0+ 8.15x| :", 1234));
	printf(" %d\n", printf("\nTest printf 38-c %%0+ 8.15x : |%0+ 8.15x| :", -1234));

	printf(" %d\n", printf("\nTest printf 39-a %%x : |%x| :", INT_MIN));
	printf(" %d\n", printf("\nTest printf 39-b %%x : |%x| :", INT_MAX));

	printf(" %d\n", printf("\nTest printf 40-aa %%.0x : |%.0x| :", 1));
	printf(" %d\n", printf("\nTest printf 40-ab %%.0x : |%.0x| :", 10));
	printf(" %d\n", printf("\nTest printf 40-ac %%.0x : |%.0x| :", 1234));
	printf(" %d\n", printf("\nTest printf 40-ba %%.0x : |%.0x| :", -1));
	printf(" %d\n", printf("\nTest printf 40-bb %%.0x : |%.0x| :", -10));
	printf(" %d\n", printf("\nTest printf 40-bc %%.0x : |%.0x| :", -1234));
	printf(" %d\n", printf("\nTest printf 40-c %%.0x : |%.0x| :", 0));
	printf(" %d\n", printf("\nTest printf 40-d %%.x : |%.x| :", 0));
//	printf(" %d\n", printf("\nTest printf 40-e %%.*x : |%.*x| :", -5, 0));
//	printf(" %d\n", printf("\nTest printf 40-f %%.*x : |%.*x| :", 0, 0));
	printf(" %d\n", printf("\nTest printf 40-g %%5.x : |%.x| :", 0));
	printf(" %d\n", printf("\nTest printf 40-h %%-5.x : |%.x| :", 0));

//	printf(" %d\n", printf("\nTest printf 41 %%*x : |%*x| :", -5, 42));

	printf(" %d\n", printf("\nTest printf 42-a %%#x : |%#x| :", 42));
	printf(" %d\n", printf("\nTest printf 42-b %%#8x : |%#8x| :", 42));
	printf(" %d\n", printf("\nTest printf 42-c %%#.6x : |%#.6x| :", 42));
	printf(" %d\n", printf("\nTest printf 42-d %%#15.6x : |%#15.6x| :", 42));
	printf(" %d\n", printf("\nTest printf 42-e %%#015.6x : |%#015.6x| :", 42));
	printf(" %d\n", printf("\nTest printf 42-f %%#6.15x : |%#6.15x| :", 42));

	printf(" %d\n", printf("\nTest printf 43-a %%#x : |%#x| :", 0));
	printf(" %d\n", printf("\nTest printf 43-b %%#8x : |%#8x| :", 0));
	printf(" %d\n", printf("\nTest printf 43-c %%#.6x : |%#.6x| :", 0));
	printf(" %d\n", printf("\nTest printf 43-d %%#15.6x : |%#15.6x| :", 0));
	printf(" %d\n", printf("\nTest printf 43-e %%#015.6x : |%#015.6x| :", 0));
	printf(" %d\n", printf("\nTest printf 43-f %%#6.15x : |%#6.15x| :", 0));

	printf(" %d\n", printf("\nTest printf 44-aa %%#.0x : |%#.0x| :", 1));
	printf(" %d\n", printf("\nTest printf 44-ab %%#.0x : |%#.0x| :", 10));
	printf(" %d\n", printf("\nTest printf 44-ac %%#.0x : |%#.0x| :", 1234));
	printf(" %d\n", printf("\nTest printf 44-ba %%#.0x : |%#.0x| :", -1));
	printf(" %d\n", printf("\nTest printf 44-bb %%#.0x : |%#.0x| :", -10));
	printf(" %d\n", printf("\nTest printf 44-bc %%#.0x : |%#.0x| :", -1234));
	printf(" %d\n", printf("\nTest printf 44-c %%#.0x : |%#.0x| :", 0));
	printf(" %d\n", printf("\nTest printf 44-d %%#.x : |%#.x| :", 0));
//	printf(" %d\n", printf("\nTest printf 44-e %%#.*x : |%#.*x| :", -5, 0));
//	printf(" %d\n", printf("\nTest printf 44-f %%#.*x : |%#.*x| :", 0, 0));
	printf(" %d\n", printf("\nTest printf 44-g %%#5.x : |%#.x| :", 0));
	printf(" %d\n", printf("\nTest printf 44-h %%#-5.x : |%#.x| :", 0));

	printf(" %d\n", printf("\nTest printf 45-a %%#-x : |%#-x| :", 45));
	printf(" %d\n", printf("\nTest printf 45-b %%#-8x : |%#-8x| :", 45));
	printf(" %d\n", printf("\nTest printf 45-c %%#-.6x : |%#-.6x| :", 45));
	printf(" %d\n", printf("\nTest printf 45-d %%#-15.6x : |%#-15.6x| :", 45));
	printf(" %d\n", printf("\nTest printf 45-e %%#-015.6x : |%#-015.6x| :", 45));
	printf(" %d\n", printf("\nTest printf 45-f %%#-6.15x : |%#-6.15x| :", 45));

	printf(" %d\n", printf("\nTest printf 46-a %%#-x : |%#-x| :", 0));
	printf(" %d\n", printf("\nTest printf 46-b %%#-8x : |%#-8x| :", 0));
	printf(" %d\n", printf("\nTest printf 46-c %%#-.6x : |%#-.6x| :", 0));
	printf(" %d\n", printf("\nTest printf 46-d %%#-15.6x : |%#-15.6x| :", 0));
	printf(" %d\n", printf("\nTest printf 46-e %%#-015.6x : |%#-015.6x| :", 0));
	printf(" %d\n", printf("\nTest printf 46-f %%#-6.15x : |%#-6.15x| :", 0));

	printf(" %d\n", printf("\nTest printf 47-aa %%#-.0x : |%#-.0x| :", 1));
	printf(" %d\n", printf("\nTest printf 47-ab %%#-.0x : |%#-.0x| :", 10));
	printf(" %d\n", printf("\nTest printf 47-ac %%#-.0x : |%#-.0x| :", 1234));
	printf(" %d\n", printf("\nTest printf 47-ba %%#-.0x : |%#-.0x| :", -1));
	printf(" %d\n", printf("\nTest printf 47-bb %%#-.0x : |%#-.0x| :", -10));
	printf(" %d\n", printf("\nTest printf 47-bc %%#-.0x : |%#-.0x| :", -1234));
	printf(" %d\n", printf("\nTest printf 47-c %%#-.0x : |%#-.0x| :", 0));
	printf(" %d\n", printf("\nTest printf 47-d %%#-.x : |%#-.x| :", 0));
//	printf(" %d\n", printf("\nTest printf 47-e %%#-.*x : |%#-.*x| :", -5, 0));
//	printf(" %d\n", printf("\nTest printf 47-f %%#-.*x : |%#-.*x| :", 0, 0));
	printf(" %d\n", printf("\nTest printf 47-g %%#-5.x : |%#-.x| :", 0));

	printf(" %d\n", printf("\nTest printf 48-aa %%8.0x : |%8.0x| :", 1));
	printf(" %d\n", printf("\nTest printf 48-ab %%8.0x : |%8.0x| :", 10));
	printf(" %d\n", printf("\nTest printf 48-ac %%8.0x : |%8.0x| :", 1234));
	printf(" %d\n", printf("\nTest printf 48-ba %%8.0x : |%8.0x| :", -1));
	printf(" %d\n", printf("\nTest printf 48-bb %%8.0x : |%8.0x| :", -10));
	printf(" %d\n", printf("\nTest printf 48-bc %%8.0x : |%8.0x| :", -1234));
	printf(" %d\n", printf("\nTest printf 48-c %%8.0x : |%8.0x| :", 0));
	printf(" %d\n", printf("\nTest printf 48-d %%8.x : |%8.x| :", 0));
//	printf(" %d\n", printf("\nTest printf 48-e %%8.*x : |%8.*x| :", -5, 0));
//	printf(" %d\n", printf("\nTest printf 48-f %%8.*x : |%8.*x| :", 0, 0));
	printf(" %d\n", printf("\nTest printf 48-g %%8.x : |%8.x| :", 0));
	printf(" %d\n", printf("\nTest printf 48-h %%-8.x : |%8.x| :", 0));

	printf(" %d\n", printf("\nTest printf 49-aa %%#8.0x : |%#8.0x| :", 1));
	printf(" %d\n", printf("\nTest printf 49-ab %%#8.0x : |%#8.0x| :", 10));
	printf(" %d\n", printf("\nTest printf 49-ac %%#8.0x : |%#8.0x| :", 1234));
	printf(" %d\n", printf("\nTest printf 49-ba %%#8.0x : |%#8.0x| :", -1));
	printf(" %d\n", printf("\nTest printf 49-bb %%#8.0x : |%#8.0x| :", -10));
	printf(" %d\n", printf("\nTest printf 49-bc %%#8.0x : |%#8.0x| :", -1234));
	printf(" %d\n", printf("\nTest printf 49-c %%#8.0x : |%#8.0x| :", 0));
	printf(" %d\n", printf("\nTest printf 49-d %%#8.x : |%#8.x| :", 0));
//	printf(" %d\n", printf("\nTest printf 49-e %%#8.*x : |%#8.*x| :", -5, 0));
//	printf(" %d\n", printf("\nTest printf 49-f %%#8.*x : |%#8.*x| :", 0, 0));
	printf(" %d\n", printf("\nTest printf 49-g %%#8.x : |%#8.x| :", 0));
	printf(" %d\n", printf("\nTest printf 49-h %%-#8.x : |%#8.x| :", 0));

	printf(" %d\n", printf("\nTest printf 50-aa %%#08x : |%#08x| :", 1));
	printf(" %d\n", printf("\nTest printf 50-ab %%#08x : |%#08x| :", 10));
	printf(" %d\n", printf("\nTest printf 50-ac %%#08x : |%#08x| :", 1234));
	printf(" %d\n", printf("\nTest printf 50-ba %%#08x : |%#08x| :", -1));
	printf(" %d\n", printf("\nTest printf 50-bb %%#08x : |%#08x| :", -10));
	printf(" %d\n", printf("\nTest printf 50-bc %%#08x : |%#08x| :", -1234));
	printf(" %d\n", printf("\nTest printf 50-c %%#08x : |%#08x| :", 0));
	printf(" %d\n", printf("\nTest printf 50-d %%#08x : |%#08x| :", 0));
	printf(" %d\n", printf("\nTest printf 50-e %%#08x : |%#08x| :", 0));
	printf(" %d\n", printf("\nTest printf 50-f %%#08x : |%#08x| :", 0));
	printf(" %d\n", printf("\nTest printf 50-g %%#08x : |%#08x| :", 0));
	printf(" %d\n", printf("\nTest printf 50-h %%-#08x : |%#08x| :", 0));

	printf(" %d\n", printf("\nTest printf 51-aa %%-#08x : |%-#08x| :", 1));
	printf(" %d\n", printf("\nTest printf 51-ab %%-#08x : |%-#08x| :", 10));
	printf(" %d\n", printf("\nTest printf 51-ac %%-#08x : |%-#08x| :", 1234));
	printf(" %d\n", printf("\nTest printf 51-ba %%-#08x : |%-#08x| :", -1));
	printf(" %d\n", printf("\nTest printf 51-bb %%-#08x : |%-#08x| :", -10));
	printf(" %d\n", printf("\nTest printf 51-bc %%-#08x : |%-#08x| :", -1234));
	printf(" %d\n", printf("\nTest printf 51-c %%-#08x : |%-#08x| :", 0));
	printf(" %d\n", printf("\nTest printf 51-d %%-#08x : |%-#08x| :", 0));
	printf(" %d\n", printf("\nTest printf 51-e %%-#08x : |%-#08x| :", 0));
	printf(" %d\n", printf("\nTest printf 51-f %%-#08x : |%-#08x| :", 0));
	printf(" %d\n", printf("\nTest printf 51-g %%-#08x : |%-#08x| :", 0));
	printf(" %d\n", printf("\nTest printf 51-h %%-#08x : |%-#08x| :", 0));


	//		 _   ____   __
	//		(_) / /\ \ / /
	//		   / /  \ V /
	//		  / /    > <
	//		 / / _  / . \
	//		/_/ (_)/_/ \_


	printf(" %d\n", printf("\nTest printf 1-a %%X : |%X| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%X : |%X| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%X : |%X| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%X : |%X| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%X : |%X| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%X : |%X| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%X : |%X| :", -2147483648));

	printf(" %d\n", printf("\nTest printf 1-a %%hhX : |%hhX| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%hhX : |%hhX| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%hhX : |%hhX| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%hhX : |%hhX| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%hhX : |%hhX| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%hhX : |%hhX| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%hhX : |%hhX| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%hhX : |%hhX| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%hhX : |%hhX| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%hX : |%hX| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%hX : |%hX| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%hX : |%hX| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%hX : |%hX| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%hX : |%hX| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%hX : |%hX| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%hX : |%hX| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%hX : |%hX| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%hX : |%hX| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%lX : |%lX| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%lX : |%lX| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%lX : |%lX| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%lX : |%lX| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%lX : |%lX| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%lX : |%lX| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%lX : |%lX| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%lX : |%lX| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%lX : |%lX| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%llX : |%llX| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%llX : |%llX| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%llX : |%llX| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%llX : |%llX| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%llX : |%llX| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%llX : |%llX| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%llX : |%llX| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%llX : |%llX| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%llX : |%llX| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%jX : |%jX| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%jX : |%jX| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%jX : |%jX| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%jX : |%jX| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%jX : |%jX| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%jX : |%jX| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%jX : |%jX| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%jX : |%jX| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%jX : |%jX| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 1-a %%zX : |%zX| :", 0));
	printf(" %d\n", printf("\nTest printf 1-b %%zX : |%zX| :", 1));
	printf(" %d\n", printf("\nTest printf 1-c %%zX : |%zX| :", -1));
	printf(" %d\n", printf("\nTest printf 1-d %%zX : |%zX| :", 5));
	printf(" %d\n", printf("\nTest printf 1-e %%zX : |%zX| :", -5));
	printf(" %d\n", printf("\nTest printf 1-f %%zX : |%zX| :", 2147483647));
	printf(" %d\n", printf("\nTest printf 1-g %%zX : |%zX| :", -2147483648));
//	printf(" %d\n", printf("\nTest printf 1-h %%zX : |%zX| :", -9223372036854775808)); //lldb
	printf(" %d\n", printf("\nTest printf 1-i %%zX : |%zX| :", 9223372036854775807));

	printf(" %d\n", printf("\nTest printf 2-a %%-X : |%-X| :", 0));
	printf(" %d\n", printf("\nTest printf 2-b %%-X : |%-X| :", 1234));
	printf(" %d\n", printf("\nTest printf 2-c %%-X : |%-X| :", -1234));

	printf(" %d\n", printf("\nTest printf 3-a %%+X : |%+X| :", 0));
	printf(" %d\n", printf("\nTest printf 3-b %%+X : |%+X| :", 1234));
	printf(" %d\n", printf("\nTest printf 3-c %%+X : |%+X| :", -1234));

	printf(" %d\n", printf("\nTest printf 4-a %% X : |% X| :", 0));
	printf(" %d\n", printf("\nTest printf 4-b %% X : |% X| :", 1234));
	printf(" %d\n", printf("\nTest printf 4-c %% X : |% X| :", -1234));

	printf(" %d\n", printf("\nTest printf 5-a %%0X : |%0X| :", 0));
	printf(" %d\n", printf("\nTest printf 5-b %%0X : |%0X| :", 1234));
	printf(" %d\n", printf("\nTest printf 5-c %%0X : |%0X| :", -1234));

	printf(" %d\n", printf("\nTest printf 6-a %%#X : |%#X| :", 0));
	printf(" %d\n", printf("\nTest printf 6-b %%#X : |%#X| :", 1234));
	printf(" %d\n", printf("\nTest printf 6-c %%#X : |%#X| :", -1234));

	printf(" %d\n", printf("\nTest printf 3-a %%8X : |%8X| :", 0));
	printf(" %d\n", printf("\nTest printf 3-b %%8X : |%8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 3-c %%8X : |%8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 4-a %%+8X : |%+8X| :", 0));
	printf(" %d\n", printf("\nTest printf 4-b %%+8X : |%+8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 4-c %%+8X : |%+8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 5-a %%-8X : |%-8X| :", 0));
	printf(" %d\n", printf("\nTest printf 5-b %%-8X : |%-8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 5-c %%-8X : |%-8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 6-a %%8-+X : |%-+8X| :", 0));
	printf(" %d\n", printf("\nTest printf 6-b %%8-+X : |%-+8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 6-c %%8-+X : |%-+8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 7-a %%08X : |%08X| :", 0));
	printf(" %d\n", printf("\nTest printf 7-b %%08X : |%08X| :", 1234));
	printf(" %d\n", printf("\nTest printf 7-c %%08X : |%08X| :", -1234));

	printf(" %d\n", printf("\nTest printf 8-a %%+08X : |%+08X| :", 0));
	printf(" %d\n", printf("\nTest printf 8-b %%+08X : |%+08X| :", 1234));
	printf(" %d\n", printf("\nTest printf 8-c %%+08X : |%+08X| :", -1234));

	printf(" %d\n", printf("\nTest printf 9-a %%+-08X : |%+-08X| :", 0));
	printf(" %d\n", printf("\nTest printf 9-b %%+-08X : |%+-08X| :", 1234));
	printf(" %d\n", printf("\nTest printf 9-c %%+-08X : |%+-08X| :", -1234));

	printf(" %d\n", printf("\nTest printf 10-a %%0 8X : |%0 8X| :", 0));
	printf(" %d\n", printf("\nTest printf 10-b %%0 8X : |%0 8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 10-c %%0 8X : |%0 8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 11-a %%0+ 8X : |%0+ 8X| :", 0));
	printf(" %d\n", printf("\nTest printf 11-b %%0+ 8X : |%0+ 8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 11-c %%0+ 8X : |%0+ 8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 12-a %%.8X : |%.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 12-b %%.8X : |%.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 12-c %%.8X : |%.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 13-a %%+.8X : |%+.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 13-b %%+.8X : |%+.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 13-c %%+.8X : |%+.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 14-a %%-.8X : |%-.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 14-b %%-.8X : |%-.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 14-c %%-.8X : |%-.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 15-a %%-+.8X : |%-+.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 15-b %%-+.8X : |%-+.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 15-c %%-+.8X : |%-+.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 16-a %%0.8X : |%0.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 16-b %%0.8X : |%0.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 16-c %%0.8X : |%0.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 17-a %%+0.8X : |%+0.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 17-b %%+0.8X : |%+0.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 17-c %%+0.8X : |%+0.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 18-a %%+-0.8X : |%+-0.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 18-b %%+-0.8X : |%+-0.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 18-c %%+-0.8X : |%+-0.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 19-a %%0 .8X : |%0 .8X| :", 0));
	printf(" %d\n", printf("\nTest printf 19-b %%0 .8X : |%0 .8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 19-c %%0 .8X : |%0 .8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 20-a %%0+ .8X : |%0+ .8X| :", 0));
	printf(" %d\n", printf("\nTest printf 20-b %%0+ .8X : |%0+ .8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 20-c %%0+ .8X : |%0+ .8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 21-a %%15.8X : |%15.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 21-b %%15.8X : |%15.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 21-c %%15.8X : |%15.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 22-a %%+15.8X : |%+15.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 22-b %%+15.8X : |%+15.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 22-c %%+15.8X : |%+15.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 23-a %%-15.8X : |%-15.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 23-b %%-15.8X : |%-15.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 23-c %%-15.8X : |%-15.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 24-a %%-+15.8X : |%-+15.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 24-b %%-+15.8X : |%-+15.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 24-c %%-+15.8X : |%-+15.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 25-a %%015.8X : |%015.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 25-b %%015.8X : |%015.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 25-c %%015.8X : |%015.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 26-a %%+015.8X : |%+015.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 26-b %%+015.8X : |%+015.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 26-c %%+015.8X : |%+015.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 27-a %%+-015.8X : |%+-015.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 27-b %%+-015.8X : |%+-015.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 27-c %%+-015.8X : |%+-015.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 28-a %%0 15.8X : |%0 15.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 28-b %%0 15.8X : |%0 15.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 28-c %%0 15.8X : |%0 15.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 29-a %%0+ 15.8X : |%0+ 15.8X| :", 0));
	printf(" %d\n", printf("\nTest printf 29-b %%0+ 15.8X : |%0+ 15.8X| :", 1234));
	printf(" %d\n", printf("\nTest printf 29-c %%0+ 15.8X : |%0+ 15.8X| :", -1234));

	printf(" %d\n", printf("\nTest printf 30-a %%8.15X : |%8.15X| :", 0));
	printf(" %d\n", printf("\nTest printf 30-b %%8.15X : |%8.15X| :", 1234));
	printf(" %d\n", printf("\nTest printf 30-c %%8.15X : |%8.15X| :", -1234));

	printf(" %d\n", printf("\nTest printf 31-a %%+8.15X : |%+8.15X| :", 0));
	printf(" %d\n", printf("\nTest printf 31-b %%+8.15X : |%+8.15X| :", 1234));
	printf(" %d\n", printf("\nTest printf 31-c %%+8.15X : |%+8.15X| :", -1234));

	printf(" %d\n", printf("\nTest printf 32-a %%-8.15X : |%-8.15X| :", 0));
	printf(" %d\n", printf("\nTest printf 32-b %%-8.15X : |%-8.15X| :", 1234));
	printf(" %d\n", printf("\nTest printf 32-c %%-8.15X : |%-8.15X| :", -1234));

	printf(" %d\n", printf("\nTest printf 33-a %%-+8.15X : |%-+8.15X| :", 0));
	printf(" %d\n", printf("\nTest printf 33-b %%-+8.15X : |%-+8.15X| :", 1234));
	printf(" %d\n", printf("\nTest printf 33-c %%-+8.15X : |%-+8.15X| :", -1234));

	printf(" %d\n", printf("\nTest printf 34-a %%08.15X : |%08.15X| :", 0));
	printf(" %d\n", printf("\nTest printf 34-b %%08.15X : |%08.15X| :", 1234));
	printf(" %d\n", printf("\nTest printf 34-c %%08.15X : |%08.15X| :", -1234));

	printf(" %d\n", printf("\nTest printf 35-a %%+08.15X : |%+08.15X| :", 0));
	printf(" %d\n", printf("\nTest printf 35-b %%+08.15X : |%+08.15X| :", 1234));
	printf(" %d\n", printf("\nTest printf 35-c %%+08.15X : |%+08.15X| :", -1234));

	printf(" %d\n", printf("\nTest printf 36-a %%+-08.15X : |%+-08.15X| :", 0));
	printf(" %d\n", printf("\nTest printf 36-b %%+-08.15X : |%+-08.15X| :", 1234));
	printf(" %d\n", printf("\nTest printf 36-c %%+-08.15X : |%+-08.15X| :", -1234));

	printf(" %d\n", printf("\nTest printf 37-a %%0 8.15X : |%0 8.15X| :", 0));
	printf(" %d\n", printf("\nTest printf 37-b %%0 8.15X : |%0 8.15X| :", 1234));
	printf(" %d\n", printf("\nTest printf 37-c %%0 8.15X : |%0 8.15X| :", -1234));

	printf(" %d\n", printf("\nTest printf 38-a %%0+ 8.15X : |%0+ 8.15X| :", 0));
	printf(" %d\n", printf("\nTest printf 38-b %%0+ 8.15X : |%0+ 8.15X| :", 1234));
	printf(" %d\n", printf("\nTest printf 38-c %%0+ 8.15X : |%0+ 8.15X| :", -1234));

	printf(" %d\n", printf("\nTest printf 39-a %%X : |%X| :", INT_MIN));
	printf(" %d\n", printf("\nTest printf 39-b %%X : |%X| :", INT_MAX));

	printf(" %d\n", printf("\nTest printf 40-aa %%.0X : |%.0X| :", 1));
	printf(" %d\n", printf("\nTest printf 40-ab %%.0X : |%.0X| :", 10));
	printf(" %d\n", printf("\nTest printf 40-ac %%.0X : |%.0X| :", 1234));
	printf(" %d\n", printf("\nTest printf 40-ba %%.0X : |%.0X| :", -1));
	printf(" %d\n", printf("\nTest printf 40-bb %%.0X : |%.0X| :", -10));
	printf(" %d\n", printf("\nTest printf 40-bc %%.0X : |%.0X| :", -1234));
	printf(" %d\n", printf("\nTest printf 40-c %%.0X : |%.0X| :", 0));
	printf(" %d\n", printf("\nTest printf 40-d %%.X : |%.X| :", 0));
//	printf(" %d\n", printf("\nTest printf 40-e %%.*X : |%.*X| :", -5, 0));
//	printf(" %d\n", printf("\nTest printf 40-f %%.*X : |%.*X| :", 0, 0));
	printf(" %d\n", printf("\nTest printf 40-g %%5.X : |%.X| :", 0));
	printf(" %d\n", printf("\nTest printf 40-h %%-5.X : |%.X| :", 0));

	//printf(" %d\n", printf("\nTest printf 41 %%*X : |%*X| :", -5, 42));

	printf(" %d\n", printf("\nTest printf 42-a %%#X : |%#X| :", 42));
	printf(" %d\n", printf("\nTest printf 42-b %%#8X : |%#8X| :", 42));
	printf(" %d\n", printf("\nTest printf 42-c %%#.6X : |%#.6X| :", 42));
	printf(" %d\n", printf("\nTest printf 42-d %%#15.6X : |%#15.6X| :", 42));
	printf(" %d\n", printf("\nTest printf 42-e %%#015.6X : |%#015.6X| :", 42));
	printf(" %d\n", printf("\nTest printf 42-f %%#6.15X : |%#6.15X| :", 42));

	printf(" %d\n", printf("\nTest printf 43-a %%#X : |%#X| :", 0));
	printf(" %d\n", printf("\nTest printf 43-b %%#8X : |%#8X| :", 0));
	printf(" %d\n", printf("\nTest printf 43-c %%#.6X : |%#.6X| :", 0));
	printf(" %d\n", printf("\nTest printf 43-d %%#15.6X : |%#15.6X| :", 0));
	printf(" %d\n", printf("\nTest printf 43-e %%#015.6X : |%#015.6X| :", 0));
	printf(" %d\n", printf("\nTest printf 43-f %%#6.15X : |%#6.15X| :", 0));

	printf(" %d\n", printf("\nTest printf 44-aa %%#.0X : |%#.0X| :", 1));
	printf(" %d\n", printf("\nTest printf 44-ab %%#.0X : |%#.0X| :", 10));
	printf(" %d\n", printf("\nTest printf 44-ac %%#.0X : |%#.0X| :", 1234));
	printf(" %d\n", printf("\nTest printf 44-ba %%#.0X : |%#.0X| :", -1));
	printf(" %d\n", printf("\nTest printf 44-bb %%#.0X : |%#.0X| :", -10));
	printf(" %d\n", printf("\nTest printf 44-bc %%#.0X : |%#.0X| :", -1234));
	printf(" %d\n", printf("\nTest printf 44-c %%#.0X : |%#.0X| :", 0));
	printf(" %d\n", printf("\nTest printf 44-d %%#.X : |%#.X| :", 0));
//	printf(" %d\n", printf("\nTest printf 44-e %%#.*X : |%#.*X| :", -5, 0));
//	printf(" %d\n", printf("\nTest printf 44-f %%#.*X : |%#.*X| :", 0, 0));
	printf(" %d\n", printf("\nTest printf 44-g %%#5.X : |%#.X| :", 0));
	printf(" %d\n", printf("\nTest printf 44-h %%#-5.X : |%#.X| :", 0));

	printf(" %d\n", printf("\nTest printf 45-a %%#-X : |%#-X| :", 45));
	printf(" %d\n", printf("\nTest printf 45-b %%#-8X : |%#-8X| :", 45));
	printf(" %d\n", printf("\nTest printf 45-c %%#-.6X : |%#-.6X| :", 45));
	printf(" %d\n", printf("\nTest printf 45-d %%#-15.6X : |%#-15.6X| :", 45));
	printf(" %d\n", printf("\nTest printf 45-e %%#-015.6X : |%#-015.6X| :", 45));
	printf(" %d\n", printf("\nTest printf 45-f %%#-6.15X : |%#-6.15X| :", 45));

	printf(" %d\n", printf("\nTest printf 46-a %%#-X : |%#-X| :", 0));
	printf(" %d\n", printf("\nTest printf 46-b %%#-8X : |%#-8X| :", 0));
	printf(" %d\n", printf("\nTest printf 46-c %%#-.6X : |%#-.6X| :", 0));
	printf(" %d\n", printf("\nTest printf 46-d %%#-15.6X : |%#-15.6X| :", 0));
	printf(" %d\n", printf("\nTest printf 46-e %%#-015.6X : |%#-015.6X| :", 0));
	printf(" %d\n", printf("\nTest printf 46-f %%#-6.15X : |%#-6.15X| :", 0));

	printf(" %d\n", printf("\nTest printf 47-aa %%#-.0X : |%#-.0X| :", 1));
	printf(" %d\n", printf("\nTest printf 47-ab %%#-.0X : |%#-.0X| :", 10));
	printf(" %d\n", printf("\nTest printf 47-ac %%#-.0X : |%#-.0X| :", 1234));
	printf(" %d\n", printf("\nTest printf 47-ba %%#-.0X : |%#-.0X| :", -1));
	printf(" %d\n", printf("\nTest printf 47-bb %%#-.0X : |%#-.0X| :", -10));
	printf(" %d\n", printf("\nTest printf 47-bc %%#-.0X : |%#-.0X| :", -1234));
	printf(" %d\n", printf("\nTest printf 47-c %%#-.0X : |%#-.0X| :", 0));
	printf(" %d\n", printf("\nTest printf 47-d %%#-.X : |%#-.X| :", 0));
//	printf(" %d\n", printf("\nTest printf 47-e %%#-.*X : |%#-.*X| :", -5, 0));
//	printf(" %d\n", printf("\nTest printf 47-f %%#-.*X : |%#-.*X| :", 0, 0));
	printf(" %d\n", printf("\nTest printf 47-g %%#-5.X : |%#-.X| :", 0));
	printf(" %d\n", printf("\nTest printf 47-h %%#--5.X : |%#-.X| :", 0));

	printf(" %d\n", printf("\nTest printf 48-aa %%8.0X : |%8.0X| :", 1));
	printf(" %d\n", printf("\nTest printf 48-ab %%8.0X : |%8.0X| :", 10));
	printf(" %d\n", printf("\nTest printf 48-ac %%8.0X : |%8.0X| :", 1234));
	printf(" %d\n", printf("\nTest printf 48-ba %%8.0X : |%8.0X| :", -1));
	printf(" %d\n", printf("\nTest printf 48-bb %%8.0X : |%8.0X| :", -10));
	printf(" %d\n", printf("\nTest printf 48-bc %%8.0X : |%8.0X| :", -1234));
	printf(" %d\n", printf("\nTest printf 48-c %%8.0X : |%8.0X| :", 0));
	printf(" %d\n", printf("\nTest printf 48-d %%8.X : |%8.X| :", 0));
//	printf(" %d\n", printf("\nTest printf 48-e %%8.*X : |%8.*X| :", -5, 0));
//	printf(" %d\n", printf("\nTest printf 48-f %%8.*X : |%8.*X| :", 0, 0));
	printf(" %d\n", printf("\nTest printf 48-g %%8.X : |%8.X| :", 0));
	printf(" %d\n", printf("\nTest printf 48-h %%-8.X : |%8.X| :", 0));

	printf(" %d\n", printf("\nTest printf 49-aa %%#8.0X : |%#8.0X| :", 1));
	printf(" %d\n", printf("\nTest printf 49-ab %%#8.0X : |%#8.0X| :", 10));
	printf(" %d\n", printf("\nTest printf 49-ac %%#8.0X : |%#8.0X| :", 1234));
	printf(" %d\n", printf("\nTest printf 49-ba %%#8.0X : |%#8.0X| :", -1));
	printf(" %d\n", printf("\nTest printf 49-bb %%#8.0X : |%#8.0X| :", -10));
	printf(" %d\n", printf("\nTest printf 49-bc %%#8.0X : |%#8.0X| :", -1234));
	printf(" %d\n", printf("\nTest printf 49-c %%#8.0X : |%#8.0X| :", 0));
	printf(" %d\n", printf("\nTest printf 49-d %%#8.X : |%#8.X| :", 0));
//	printf(" %d\n", printf("\nTest printf 49-e %%#8.*X : |%#8.*X| :", -5, 0));
//	printf(" %d\n", printf("\nTest printf 49-f %%#8.*X : |%#8.*X| :", 0, 0));
	printf(" %d\n", printf("\nTest printf 49-g %%#8.X : |%#8.X| :", 0));
	printf(" %d\n", printf("\nTest printf 49-h %%-#8.X : |%#8.X| :", 0));

	return (0);
}
