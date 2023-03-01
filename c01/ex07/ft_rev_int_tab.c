/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 02:25:57 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/13 21:20:27 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int l;
	int str[size];

	i = 0;
	l = size - 2;
	while (i < size - 1)
	{
		str[i] = tab[l - i];
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		tab[i] = str[i];
		i++;
	}
}
