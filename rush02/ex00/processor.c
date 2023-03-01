/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elajimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 13:55:33 by elajimi           #+#    #+#             */
/*   Updated: 2019/08/25 17:43:11 by gkreit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		whtspce_checking(int i)
{
	if (i == '\t' || i == ' ')
		return (0);
	return (1);
}

char	*ft_format(char *str)
{
	int j;
	int i;
	char *dest;

	j = 0;
	i = 0;
	while (whtspce_checking(str[i]) || str[i])
		++i;
	while ((!(str[i] >= '0' && str[i] <= '9')) || str[i])
	{
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		dest[++j] = str[++i];
	}
	return (dest);
}

int		main(int argc, char **argv)
{
	char *str;
	int i;

	i = 0;
	if (argc == 2)
		str = ft_format(&argv[1][i]);
	printf("%s", str);
	return (0);
}
