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

int	ft_c_char(const char *template, int c)
{
	int n;
	int i;

	n = 0;
	i = 0;
	while(template[i])
	{
		if(template[i] == c && ft_isvalidparam(template[i + 1]))
			n ++;
		i++;
	}
	return (n);
}
