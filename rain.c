#include "ft_printf.h"
#include <stdio.h>

# define RESULT_O printf("The printf original return [\e[1;94m%d\e[0m] of length.\n\n", len);
# define RESULT_M ft_printf("My Function return [\e[1;94m%d\e[0m] of length.\n\n", len);

void	test_integer(void)
{
	int	len;

	printf("\e[96m-+-+-+-+-+     Test Integer %%d and %%i     -+-+-+-+-+\n\n\n\e[0m");

	ft_printf("\e[91mMy Function\e[0m\n");

	len = ft_printf("{%%d negative ==> [%d]}\n", -10);
	RESULT_M

	len = ft_printf("{%%d positive ==> [%d]}\n", 10);
	RESULT_M

	len = ft_printf("{%%d overflow positive ==> [%d]}\n", 2147483647);
	RESULT_M

	len = ft_printf("{%%d overflow negative ==> [%d]}\n", -2147483648);
	RESULT_M

	len = ft_printf("{%%i negative ==> [%i]}\n", -10);
	RESULT_M

	len = ft_printf("{%%i positive ==> [%i]}\n", 10);
	RESULT_M

	len = ft_printf("{%%i overflow positive ==> [%i]}\n", 2147483647);
	RESULT_M

	len = ft_printf("{%%i overflow negative ==> [%i]}\n", -2147483648);
	RESULT_M

	printf("\n\n\n");

	printf("\e[95mThe printf original\e[0m\n");

	len = printf("{%%d negative ==> [%d]}\n", -10);
	RESULT_O

	len = printf("{%%d positive ==> [%d]}\n", 10);
	RESULT_O

	len = printf("{%%d overflow positive ==> [%d]}\n", 2147483647);
	RESULT_O

	len = printf("{%%d overflow negative ==> [%ld]}\n", -2147483648);
	RESULT_O

	len = printf("{%%i negative ==> [%i]}\n", -10);
	RESULT_O

	len = printf("{%%i positive ==> [%i]}\n", 10);
	RESULT_O

	len = printf("{%%i overflow positive ==> [%i]}\n", 2147483647);
	RESULT_O

	len = printf("{%%i overflow negative ==> [%li]}\n", -2147483648);
	RESULT_O

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
	char	*s;
	int	len;

	s = NULL;
	printf("\e[96m-+-+-+-+-+     Test String %%s     -+-+-+-+-+\n\n\n\e[0m");

	ft_printf("\e[91mMy Function\e[0m\n");

	len = ft_printf("{%%s ==> [%s]}\n", "Hello, World!");
	RESULT_M 
	len = ft_printf("{%%s ==> [%s]}\n", s);
	RESULT_M 

	printf("\n\n\n");

	printf("\e[95mThe printf original\e[0m\n");

	len = printf("{%%s ==> [%s]}\n", "Hello, World!");
	RESULT_O 
	len = printf("{%%s ==> [%s]}\n", s);
	RESULT_O 

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
	RESULT_M 
	len = ft_printf("{%%p ==> [%p]}\n", NULL);
	RESULT_M 
	len = ft_printf("{%%p ==> [%p]}\n", &len);
	RESULT_M 

	printf("\n\n\n");

	printf("\e[95mThe printf original\e[0m\n");

	len = printf("{%%p ==> [%p]}\n", "ABC");
	RESULT_O 
	len = printf("{%%p ==> [%p]}\n", NULL);
	RESULT_O 
	len = printf("{%%p ==> [%p]}\n", &len);
	RESULT_O 

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
