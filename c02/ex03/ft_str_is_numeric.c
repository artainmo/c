/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:38:43 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/13 23:01:11 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
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
		if (c >= 48 && c <= 57)
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
