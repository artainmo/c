/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 23:10:04 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/13 23:52:46 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == ' ') && (str[i] <= 'z' && str[i] >= 'a'))
			str[i] -= 32;
		else if (str[i - 1] >= 33 && str[i - 1] <= 47)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
				str[i] -= 32;
		}
		else if (str[i - 1] >= 91 && str[i - 1] <= 96)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
