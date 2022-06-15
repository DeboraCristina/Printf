/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:31:22 by desilva           #+#    #+#             */
/*   Updated: 2022/06/15 02:34:13 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_unint(unsigned int u)
{
	char	*s;
	int		len;

	s = ft_utoa(u);
	ft_putstr_fd(s, 1);
	len = (int) ft_strlen(s);
	if (s)
		free(s);
	return (len);
}
