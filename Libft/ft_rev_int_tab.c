/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 05:03:26 by desilva           #+#    #+#             */
/*   Updated: 2022/06/09 21:16:18 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(void *t, int size)
{
	int		in;
	int		tam;
	char	res;
	char	*tab;

	in = 0;
	tam = size - 1;
	tab = (char *) t;
	while (in < tam)
	{
		res = tab[in];
		tab[in] = tab[tam];
		tab[tam] = res;
		tam--;
		in++;
	}
}
