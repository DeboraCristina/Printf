#include "../ft_printf.h"

int	ft_print_str(char *s)
{
	int		len;

	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	return (len);
}
