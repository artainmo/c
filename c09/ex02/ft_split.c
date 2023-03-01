/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 17:36:36 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/28 16:17:25 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		separate_string(char ch, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

int		ft_str_end(char *charset, char *str, int *i)
{
	int str_counter;

	str_counter = 0;
	while (str[*i] && separate_string(str[*i], charset) == 0)
	{
		*i = *i + 1;
		str_counter++;
	}
	return (str_counter);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		l;
	int		lenght;
	char	**strs;

	i = 0;
	l = 0;
	lenght = 0;
	while (str[i])
	{
		if (i == 0)
			strs[l] = &str[i];
		lenght = ft_str_end(charset, str, &i);
		strs[l][lenght] = 0;
		if (!(strs = malloc(sizeof(char) * lenght)))
			return (0);
		lenght = 0;
		l++;
		strs[l] = &str[i + 1];
		i++;
	}
	return (strs);
}
