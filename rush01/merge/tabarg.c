/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabarg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 11:35:49 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/18 17:52:34 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
