#include "libft.h"
#include <stdio.h>

char	*ft_inttohex(int i, int type)
{
	char	n;
	char	*l;

	if (i >= 10 && i <= 15)
	{
		if (type >= 'A' && type <= 'Z')
			n = (i + 55); // D
		else
			n = (i + 87); // D
	}
	else
		n = (i + 48); // 1
	l = (char *) malloc(2);
	if (!l)
		return (NULL);
	l[0] = n;
	l[1] = '\0';
	return (l);
}

char	*ft_tohex(int n, int type)
{
	char	*hex;
	char	*temp;
	char	*res;

	hex = NULL;
	while (n > 0)
	{
		temp = hex;
		res = ft_inttohex((n % 16), type);
		hex = ft_strjoin(hex, res);
		free (temp);
		free(res);
		if (!hex)
			return (NULL);
		n = n / 16;
	}
	ft_rev_int_tab(hex, ft_strlen(hex));
	return (hex);
}
