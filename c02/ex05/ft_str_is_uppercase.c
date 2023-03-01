/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:24:14 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/13 23:05:06 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
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
		if (c >= 65 && c <= 90)
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
