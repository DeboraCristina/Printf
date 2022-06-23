#include "../ft_printf.h"

int	ft_isvalidparam(const char *c)
{
	if (ft_isvalidtype(*c)) // || ft_isvalidbonus(*c))
		return (1);
	return (0);
}

int	ft_isvalidtype(char c)
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
int	ft_isvalidbonus(const char *c)
{

}
*/

int	ft_printtype(int type, va_list items)
{
	int	len;

	len = 0;
	if (ph == 'd' || ph == 'i')
		len = ft_print_int(va_arg(items, int));
	else if (ph == 'c')
		len = ft_print_char(va_arg(items, int));
	else if (ph == '%')
		len = ft_print_char('%');
	else if (ph == 's')
		len = ft_print_str(va_arg(items, char *));
	else if (ph == 'x' || ph == 'X')
		len = ft_print_hex(ph, va_arg(items, int));
	else if (ph == 'u')
		len = ft_print_unint(va_arg(items, unsigned int));
	else if (ph == 'p')
		len = ft_print_ptr(va_arg(items, unsigned long int));
	return (len);
}
