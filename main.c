#include <stdio.h>
#include "ft_printf.h"

int	soma(int n, ...)
{
	va_list	args;
	va_start(args, n);

	va_end(args);
	return (n);
}

int	count_params(const char *template)
{
	int c;

	c = 0;
	while(*template)
	{
		if(*template == '%')
			c ++;
		template++;
	}
	return (c);

}
int	ft_printf(const char *template, ...)
{
		return (count_params(template));
}

int	main(void)
{
	int i = ft_printf("a%db%c%%%%");
	printf("Hello, World!%d\n", i);
	soma(2);
	return (0);
}
