/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 13:57:51 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/20 22:15:10 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int l;
	unsigned int k;
	unsigned int m;

	i = 0;
	l = 0;
	k = 0;
	m = 0;
	if (size == 0)
		return (0);
	while (dest[i] != '\0')
		i++;
	m = i;
	while (src[k] != '\0')
		k++;
	while (dest[l] != '\0' && l < size)
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (m + k);
}
