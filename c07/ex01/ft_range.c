/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:05:46 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/26 14:27:51 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int lenght;
	int *res;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	lenght = max - min;
	if (!(res = malloc(sizeof(int) * lenght)))
		return (NULL);
	while (i < lenght)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
