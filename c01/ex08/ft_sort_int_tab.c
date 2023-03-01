/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 14:54:33 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/13 22:25:01 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int l;
	int k;
	int m;

	i = 0;
	while (i < (size - 1))
	{
		m = 0;
		k = i;
		while (k >= 0)
		{
			if (tab[i - m] < tab[k])
			{
				l = tab[i - m];
				tab[i - m] = tab[k];
				tab[k] = l;
				m++;
			}
			k--;
		}
		i++;
	}
}
