#include "ft_printf.h"

int	ft_isvalidparam(char c)
{
	if (c == '%' || c == 'x' || c == 'X')
		return (1);
	if (c == 'd' || c == 'i' || c == 'u')
		return (1);
	if (c == 'c' || c == 's' || c == 'p')
		return (1);
	return (0);
}

/*
int	ft_print_u_int()
{
}
*/
