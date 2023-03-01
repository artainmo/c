/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:13:13 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/13 23:03:00 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int i;
	int c;
	int ret;

	i = 0;
	ret = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		i++;
		if (c >= 97 && c <= 122)
		{
			ret = 1;
		}
		else
		{
			ret = 0;
			return (ret);
		}
	}
	return (ret);
}
