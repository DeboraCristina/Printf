/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:30:42 by desilva           #+#    #+#             */
/*   Updated: 2022/06/13 18:30:43 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_hex(int placeholder, int i)
{
	int		len;
	char	*s;

	s = ft_tohex(i, placeholder);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	if (s)
		free(s);
	return (len);
}
