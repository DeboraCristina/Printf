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

int	ft_printf(const char *template, ...)
{
	va_list	parameters;
	char	*temp;
	int		s;
	int		i;

	ft_putstr_fd((char *) template, 1);
	ft_putstr_fd("\n", 1);

	i = 0;
	while (template[i])
	{
		s = i;
		while (template[i] && template[i] != '%') // && ft_isvalidparam(template[i + 1]))
			i++;
		temp = ft_substr(template, s, i - s);
		ft_putstr_fd(temp, 1);
		free(temp);
		ft_putstr_fd("\n", 1);
		i++;
	}

	va_start(parameters, template);
	va_end(parameters);
	return(0);
}
