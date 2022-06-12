static void	ft_takenbr(char	*dest, long long int n, int index)
{
	if (n / 10 != 0)
		ft_takenbr(dest, n / 10, index - 1);
	dest[index] = (n % 10) + 48;
}

char	*ft_utoa(int u)
{
	long long int	lln;
	int				len;
	char			*num;

	lln = n;
	if (lln < 0)
		lln = 4294967295 + u + 1;
	len = ft_count_digits(lln);
	num = (char *) malloc(len + 1);
	if (!num)
		return (0);
	ft_bzero(num, len);
	ft_takenbr(num, lln, len - 1);
	if (!num[0])
		num[0] = '-';
	num[len] = 0;
	return (num);
}
