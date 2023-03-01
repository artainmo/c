/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 11:14:18 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/19 16:58:57 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
		i++;
	while (src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (dest);
}
