/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 12:31:10 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/19 22:20:34 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int find_index;
	int remember;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		find_index = 0;
		if (str[i] == to_find[find_index])
		{
			remember = i;
			while (str[i] == to_find[find_index])
			{
				if (to_find[find_index + 1] == '\0')
					return (&str[remember]);
				find_index++;
				i++;
			}
			i = remember;
		}
		i++;
	}
	return (0);
}
