/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 11:54:19 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/19 22:13:19 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int l;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
		i++;
	while (src[l] != '\0' && l < nb)
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (dest);
}
