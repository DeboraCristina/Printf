#include <stdio.h>
#include "ft_printf.h"

void	printgeral()
{
	int i;
	char	*I;

	i = ft_printf("print int(D): {%d}\n");
	I = ft_itoa(i);
	ft_putendl_fd(I, 1);
	free(I);

	i = ft_printf("print int(I): {%i}\n");
	I = ft_itoa(i);
	ft_putendl_fd(I, 1);
	free(I);

	i = ft_printf("print char: {%c}\n");
	I = ft_itoa(i);
	ft_putendl_fd(I, 1);
	free(I);

	i = ft_printf("print string: {%s}\n");
	I = ft_itoa(i);
	ft_putendl_fd(I, 1);
	free(I);

	i = ft_printf("print pointer: {%p}\n");
	I = ft_itoa(i);
	ft_putendl_fd(I, 1);
	free(I);

	i = ft_printf("print miniHex: {%x}\n");
	I = ft_itoa(i);
	ft_putendl_fd(I, 1);
	free(I);

	i = ft_printf("print BigHex: {%X}\n");
	I = ft_itoa(i);
	ft_putendl_fd(I, 1);
	free(I);

	i = ft_printf("print porcent: {%%}\n");
	I = ft_itoa(i);
	ft_putendl_fd(I, 1);
	free(I);
}

void	soma(int n, ...)
{
	va_list	args;
	int		s;
	va_start(args, n);

	s = 0;
	for (int i = 0; i < n; i++)
		s += va_arg(args, int);

	va_end(args);
	printf("%d\n", s);
}

void	testwhitslpit()
{
	char	*temp;
	char	*str;
	int		i;
	int		s;

	i = 0;
	str = "abc_{%d}_def_{%c}_ghi";
	while (str[i] && str[i] != '%')
		i++;
	temp = ft_substr(str, 0, i - 0);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd(temp, 1);
	ft_putstr_fd("\n", 1);
	free(temp);
	printf("%d\n", i);
	i++;
	s = i;
	while (str[i] && str[i] != '%')
		i++;
	temp = ft_substr(str, s, i - s);
	ft_putstr_fd(temp, 1);
	ft_putstr_fd("\n", 1);
	free(temp);
	printf("%d\n", i);
}
int	main(void)
{
	// int i;
	// char	*I;

	// i = ft_printf("%% %x %X %c %s %p %d %i %u %D", 4);
	ft_printf("abc_{%d}_def_{%c}_ghi", 4, 'a');
	// I = ft_itoa(i);
	// ft_putendl_fd(I, 1);
	// free(I);
	//printgeral();
	//printf("{%%} - {%d} - {% d} - {%-d} - {%-10d} - {%10d}", 3, 3, 3, 3, 3);
	// printf("\n");
	// soma(2, 2, 3);
	testwhitslpit();
	return (0);
}
