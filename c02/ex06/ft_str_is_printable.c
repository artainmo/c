/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:33:57 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/13 23:07:33 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
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
		if (c >= 32 && c <= 126)
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
