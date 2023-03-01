/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 11:46:24 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/18 13:16:34 by hbuisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
