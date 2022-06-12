/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:00:59 by desilva           #+#    #+#             */
/*   Updated: 2022/06/12 22:01:49 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_utoa(unsigned int u)
{
	unsigned int	len;
	char			*num;

	len = ft_count_digits(u);
	num = (char *) calloc(len + 1, sizeof(char));
	if (!num)
		return (NULL);
	while (len > 0)
	{
		num[len - 1] = (u % 10) + '0';
		u = u / 10;
		len--;
	}
	return (num);
}
