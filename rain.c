#include <stdio.h>
#include "ft_printf.h"

// # define P ("%s, %s %d%%%c\n%i %x %X\n", "ola", "mundo", 42, '!', 24, 427, 347);
# define P ("%p %x %X\n", p , 29, 29);

void	mymain()
{
	int	i;
	int	a;
	int	*p;

	a = 5;
	p = &a;

	i = ft_printf P
	printf("----\ntamanho que retorna: %d\n----\n", i);
	i = printf P
	printf("tamanho correto: %d\n", i);
}

int	main(void)
{
	mymain();
	return (0);
}
