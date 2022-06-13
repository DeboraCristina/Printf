/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:30:55 by desilva           #+#    #+#             */
/*   Updated: 2022/06/13 18:31:01 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_ptr(unsigned long int i)
{
	int		len;
	char	*s;

	s = ft_tohex(i, 'x');
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s) + 2;
	if (s)
		free(s);
	return (len);
}
