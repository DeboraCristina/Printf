#include "../ft_printf.h"

int	ft_print_hex(int placeholder, int i)
{
	int		len;
	char	*s;

	s = ft_tohex(i, placeholder);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	return (len);
}
