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

int	ft_print_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}
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
int	ft_print_str(char *s)
{
	int		len;

	ft_putstr_fd(s, 1);
	return (len);
}
/*
int	ft_print_u_int()
{
}
*/
