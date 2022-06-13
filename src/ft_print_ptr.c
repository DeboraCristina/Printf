#include "../ft_printf.h"

int	ft_print_ptr(unsigned long int i)
{
	int		len;
	char	*s;

	s = ft_tohex(i, 'x');
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s) + 2;
	free(s);
	return (len);
}
