#include "ft_printf.h"
#include <stdio.h>

void	test_integer(void)
{
	int	len;

	printf("\e[96m-+-+-+-+-+     Test Integer %%d and %%i     -+-+-+-+-+\n\n\n\e[0m");

	ft_printf("\e[91mMy Function\e[0m\n");

	len = ft_printf("{%%d negative ==> [%d]}\n", -10);
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);
	len = ft_printf("{%%d positive ==> [%d]}\n", 10);
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);
	len = ft_printf("{%%i negative ==> [%i]}\n", -10);
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);
	len = ft_printf("{%%i positive ==> [%i]}\n", 10);
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);

	printf("\n\n\n");

	printf("\e[95mThe printf original\e[0m\n");

	len = printf("{%%d ==> [%d]}\n", -10);
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);
	len = printf("{%%d ==> [%d]}\n", 10);
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);
	len = printf("{%%i ==> [%i]}\n", -10);
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);
	len = printf("{%%i ==> [%i]}\n", 10);
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);

	printf("\e[96m\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\e[0m");
}

void	test_char(void)
{
	int	len;

	printf("\e[96m-+-+-+-+-+     Test Char %%c     -+-+-+-+-+\n\n\n\e[0m");

	ft_printf("\e[91mMy Function\e[0m\n");

	len = ft_printf("{%%c ==> [%c]}\n", 'a');
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);
	len = ft_printf("{%%c ==> [%c]}\n", 'a' + 256);
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);

	printf("\n\n\n");

	printf("\e[95mThe printf original\e[0m\n");

	len = printf("{%%c ==> [%c]}\n", 'a');
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);
	len = printf("{%%c ==> [%c]}\n", 'a' + 256);
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);

	printf("\e[96m\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\e[0m");
}

void	test_str(void)
{
	int	len;

	printf("\e[96m-+-+-+-+-+     Test String %%s     -+-+-+-+-+\n\n\n\e[0m");

	ft_printf("\e[91mMy Function\e[0m\n");

	len = ft_printf("{%%s ==> [%s]}\n", "Hello, World!");
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);

	printf("\n\n\n");

	printf("\e[95mThe printf original\e[0m\n");

	len = printf("{%%s ==> [%s]}\n", "Hello, World!");
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);

	printf("\e[96m\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\e[0m");
}

void	test_percent(void)
{
	int	len;

	printf("\e[96m-+-+-+-+-+     Test Percent %%     -+-+-+-+-+\n\n\n\e[0m");

	ft_printf("\e[91mMy Function\e[0m\n");

	len = ft_printf("{%% ==> [%%]}\n");
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);

	printf("\n\n\n");

	printf("\e[95mThe printf original\e[0m\n");

	len = printf("{%% ==> [%%]}\n");
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);

	printf("\e[96m\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\e[0m");
}

void	test_hex(void)
{
	int	len;

	printf("\e[96m-+-+-+-+-+     Test Hexadecimal %%x and %%X     -+-+-+-+-+\n\n\n\e[0m");

	ft_printf("\e[91mMy Function\e[0m\n");

	len = ft_printf("{%%x ==> [%x]}\n", 28);
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);
	len = ft_printf("{%%X ==> [%X]}\n", 28);
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);
	len = ft_printf("{%%x ==> [%x]}\n", -28);
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);
	len = ft_printf("{%%X ==> [%X]}\n", -28);
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);

	printf("\n\n\n");

	printf("\e[95mThe printf original\e[0m\n");

	len = printf("{%%x ==> [%x]}\n", 28);
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);
	len = printf("{%%X ==> [%X]}\n", 28);
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);
	len = printf("{%%x ==> [%x]}\n", -28);
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);
	len = printf("{%%X ==> [%X]}\n", -28);
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);

	printf("\e[96m\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\e[0m");
}

void	test_pointer(void)
{
	int	len;

	printf("\e[96m-+-+-+-+-+     Test Pointer %%p     -+-+-+-+-+\n\n\n\e[0m");

	ft_printf("\e[91mMy Function\e[0m\n");

	len = ft_printf("{%%p ==> [%p]}\n", "ABC");
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);
	len = ft_printf("{%%p ==> [%p]}\n", NULL);
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);

	printf("\n\n\n");

	printf("\e[95mThe printf original\e[0m\n");

	len = printf("{%%p ==> [%p]}\n", "ABC");
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);
	len = printf("{%%p ==> [%p]}\n", NULL);
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);

	printf("\e[96m\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\e[0m");
}

void	test_unsigned(void)
{
	int	len;

	printf("\e[96m-+-+-+-+-+     Test Unsigned Integer %%u     -+-+-+-+-+\n\n\n\e[0m");

	ft_printf("\e[91mMy Function\e[0m\n");

	len = ft_printf("{%%u ==> [%u]}\n", 10);
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);
	len = ft_printf("{%%u ==> [%u]}\n", -10);
	ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);

	printf("\n\n\n");

	printf("\e[95mThe printf original\e[0m\n");

	len = printf("{%%u ==> [%u]}\n", 10);
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);
	len = printf("{%%u ==> [%u]}\n", -10);
	printf("The printf original return [\e[1;94m%d\e[0m] of length.\n", len);

	printf("\e[96m\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\e[0m");
}

int	main(void)
{
	switch (TEST)
	{
		case 1:
			test_integer();
			break ;
		case 2:
			test_char();
			break ;
		case 3:
			test_str();
			break ;
		case 4:
			test_percent();
			break ;
		case 5:
			test_hex();
			break ;
		case 6:
			test_pointer();
			break ;
		case 7:
			test_unsigned();
			break ;
		default:
			printf("(nill)\n");
	}
	return (0);
}
