/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 09:44:14 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/18 11:03:34 by hbuisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		chech_if_valid(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (!(argv[i] >= '0' && argv[i] <= '9'))
		{
			if (!(argv[i] == ' '))
				return (0);
		}
		i++;
	}
	return (1);
}

void	ft_put_arg(int size, int tab[][size], char *argv)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j < size - 1)
	{
		tab[0][j] = argv[i - 1];
		i = i + 2;
		j++;
	}
	i = 1;
	j = 1;
	while (j < size - 1)
	{
		tab[size - 1][j] = argv[i - 1 + (size + 2)];
		i = i + 2;
		j++;
	}
	i = 1;
	j = 1;
	while (j < size - 1)
	{
		tab[j][0] = argv[i - 1 + ((size + 2) * 2)];
		i = i + 2;
		j++;
	}
	i = 1;
	j = 1;
	while (j < size - 1)
	{
		tab[j][size - 1] = argv[i - 1 + ((size + 2) * 3)];
		i = i + 2;
		j++;
	}
}

void	ft_initialize_tab(int size, int tab[][size])
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			tab[i][j] = '0';
			j++;
		}
		i++;
	}
}

void	ft_read_tab(int size, int tab[][size])
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	int size;
	int tab[6][6];
	
	argc = 0;
	size = 6;
	if (argv[2])
		return ('\0');
//	if (!(ft_check_if_valid(argv[1])))
//		return ('\0');
	ft_initialize_tab(size, tab);
	ft_put_arg(size, tab, argv[1]);
//	ft_solve(size, tab);
	ft_read_tab(size, tab);
	return (0);
}
