/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:48:30 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/28 00:33:51 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	return (i);
}

void	ft_separator(char *str, char *sep, int *m)
{
	int i;

	i = 0;
	while (sep[i])
	{
		str[*m] = sep[i];
		i++;
		*m = *m + 1;
	}
}

void	ft_join(int size, char *str, char **strs, char *sep)
{
	int i;
	int l;
	int m;

	i = 0;
	l = 0;
	m = 0;
	while (i < size)
	{
		while (strs[i][l])
		{
			str[m] = strs[i][l];
			l++;
			m++;
		}
		if (i + 1 < size)
			ft_separator(str, sep, &m);
		i++;
		l = 0;
	}
	str[m] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	i = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char));
		str = 0;
		return (0);
	}
	while (i < size)
	{
		if (!(str = malloc(sizeof(char) * ft_strlen(strs[i]))))
			return (NULL);
		i++;
	}
	ft_join(size, str, strs, sep);
	return (str);
}
