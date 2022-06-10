#include "ft_printf.h"

int	ft_print_int(int i)
{
	char	*s;
	int		len;

	s = ft_itoa(i);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	return (len);
}
