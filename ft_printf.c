#include "ft_printf.h"

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
	// if (template)
		return (count_params(template));
}

int main(void)
{
	int i = ft_printf("a%db%cc%s");
	char	*I = ft_itoa(i);
	ft_putendl_fd(I, 1);
	free(I);
	return (0);
}
