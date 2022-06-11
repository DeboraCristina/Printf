#include <stdio.h>
#include "ft_printf.h"

// # define P ("%s, %s %d%%%c\n%i %x %X\n", "ola", "mundo", 42, '!', 24, 427, 347);
# define P ("%uabc\n", -15);

void	mymain()
{
	int i;
	// char	*I;

	// i = ft_printf("%% %x %X %c %s %p %d %i %u %D", 'a', "bc", "bc", 4, 4, 4);
	// d c i % s x X -> u -> p
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
