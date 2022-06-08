#include "ft_printf.h"
#include <stdio.h>

/*
char	*ft_placeholder(const char *template)
{
	int		c;
	int		i;
	char	*dest;

	c = ft_c_char(template, '%');
	if (!c)
		return (NULL);
	dest = (char *) malloc(c);
	if (!dest)
		return (NULL);
	i = 0;
	c = 0;
	while(template[i])
	{
		if(template[i] == '%' && ft_isvalidparam(template[i + 1]))
		{
			dest[c] = template[i + 1];
			c++;
		}
		i++;
	}
	dest[c] = '\0';
	return (dest);
}


int	ft_printf(const char *template, ...)
{
	char	*ph;
	char	**txt;
	va_list	parameters;

	va_start(parameters, template);
	ph = ft_placeholder(template);
	txt = ft_split(template, '%');

	while (*txt)
	{
		ft_putstr_fd(*txt, 1);
		free(*txt);
		txt++;
	}

	printf("\n%s\n", ph);
	free(ph);
	va_end(parameters);
	return (1);
}
*/
void	ft_replace_placeholder(int ph, va_list items)
{
	char	*temp;

	temp = NULL;
	if (ph == 'd' || ph == 'i')
	{
		temp = ft_itoa(va_arg(items, int));
		ft_putstr_fd(temp, 1);
		free(temp);
	}
	else if (ph == 'c')
		ft_putchar_fd(va_arg(items, int), 1);
	else if (ph == '%')
		ft_putchar_fd('%', 1);
}

int	ft_printf(const char *template, ...)
{
	va_list	parameters;
	char	*temp;
	int		s;
	int		i;

	va_start(parameters, template);
	i = 0;
	while (template[i])
	{
		s = i;
		while (template[i] && template[i] != '%')
			i++;
		temp = ft_substr(template, s, i - s);
		ft_putstr_fd(temp, 1);
		if (template[i] == '%' && ft_isvalidparam(template[i + 1]))
		{
			ft_replace_placeholder(template[i + 1], parameters);
			i++;
		}
		free(temp);
		i++;
	}
	va_end(parameters);
	return(0);
}
