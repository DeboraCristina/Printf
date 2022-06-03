#include "ft_printf.h"

int	count_params(const char *template)
{
	int c;

	c = 0;
	while(*template)
	{
		if(*template == "%")
			c ++;
		template++;
	}

}
int	ft_printf(const char *template, ...)
{
	if (template)
		return (count_params(template));
}

int main(void)
{
	int i = ft_printf("a%db%c");
	
}
