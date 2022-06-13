#include "../ft_printf.h"

int	ft_print_unint(unsigned int u)
{
	char	*s;
	int		len;

	s = ft_utoa(u);
	ft_putstr_fd(s, 1);
	len = (int) ft_strlen(s);
	free(s);
	return (len);
}
