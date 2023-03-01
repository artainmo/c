/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:05:05 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/26 14:55:01 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int lenght;
	int *res;
	int i;

	i = 0;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	lenght = max - min;
	if (!(res = malloc(sizeof(int) * lenght)))
		return (-1);
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	*range = res;
	return (i);
}
