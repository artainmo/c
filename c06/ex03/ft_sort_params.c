/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 00:42:49 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/22 17:09:22 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (i++ < argc - 1)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &(argv[i][j]), 1);
			j++;
		}
		write(1, "\n", 1);
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_strswap(char **a, char **b)
{
	char	*tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

int		main(int argc, char **argv)
{
	int i;
	int k;

	i = 1;
	while (i < argc - 1)
	{
		k = argc - 1;
		while (k > i)
		{
			if (ft_strcmp(argv[i], argv[k]) > 0)
				ft_strswap(&argv[i], &argv[k]);
			k--;
		}
		i++;
	}
	display(argc, argv);
	return (0);
}
