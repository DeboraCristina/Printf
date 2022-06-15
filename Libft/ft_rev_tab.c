/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desilva <dede-2231@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 05:03:26 by desilva           #+#    #+#             */
/*   Updated: 2022/06/15 10:27:11 by desilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_tab(void *t, int size)
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
