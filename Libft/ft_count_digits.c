/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:03:08 by desilva           #+#    #+#             */
/*   Updated: 2022/06/09 19:03:50 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_digits(int n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}