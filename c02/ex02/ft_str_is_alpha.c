/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 14:51:21 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/13 22:58:43 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
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
		if ((c >= 65 && c <= 122) && !(c > 90 && c < 97))
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
