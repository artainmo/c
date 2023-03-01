/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 16:46:53 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/14 00:02:07 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int l;

	i = 0;
	l = 0;
	while (dest[i] == '\0')
	{
		i++;
	}
	while (i < size && src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
