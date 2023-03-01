/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 20:25:09 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/29 14:47:32 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *str1;
	int			i;

	if (!(str1 = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	if (ac == 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		str1[i].str = av[i];
		str1[i].size = ft_strlen(av[i]);
		str1[i].copy = ft_strdup(av[i]);
		i++;
	}
	str1[i].str = 0;
	return (str1);
}
