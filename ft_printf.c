#include "ft_printf.h"

static int	ft_replace_placeholder(const char *ph, va_list items)
{
	int	len;

	len = 0;
	if (ft_isvalidtype(*ph))
		ft_printtype((*ph), items);
	return (len);
}

static int	ft_printcommunstr(int *index, const char *str)
{
	char	*temp;
	int		start;
	int		len;

	start = *index;
	while (str[*index] && str[*index] != '%')
		(*index)++;
	temp = ft_substr(str, start, (*index) - start);
	ft_putstr_fd(temp, 1);
	len = ft_strlen(temp);
	free(temp);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	parameters;
	int		len;
	int		i;

	va_start(parameters, str);
	i = 0;
	while (str[i])
	{
		len = ft_printcommunstr(&i, str);
		if (str[i] == '%' && ft_isvalidparam(str + (i + 1)))
		{
			len += ft_replace_placeholder(str + (i + 1), parameters);
			i++;
		}
		if (str[i])
			i++;
	}
	va_end(parameters);
	return (len);
}
