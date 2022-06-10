#include "ft_printf.h"

int	ft_replace_placeholder(int ph, va_list items)
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
	return (len);
}

int	ft_printf(const char *template, ...)
{
	va_list	parameters;
	char	*temp;
	int		s;
	int		i;
	int		len;

	va_start(parameters, template);
	i = 0;
	len = 0;
	while (template[i])
	{
		s = i;
		while (template[i] && template[i] != '%')
			i++;
		temp = ft_substr(template, s, i - s);
		ft_putstr_fd(temp, 1);
		len += ft_strlen(temp);
		if (template[i] == '%' && ft_isvalidparam(template[i + 1]))
		{
			len += ft_replace_placeholder(template[i + 1], parameters);
			i++;
		}
		free(temp);
		if (template[i])
			i++;
	}
	va_end(parameters);
	return(len);
}
