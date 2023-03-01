/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doublon.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 13:31:36 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/18 14:17:54 by hbuisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_row(int col, int row, int tab[][6])		 //verif doublon row    OK
{
	int i;

	i = 1;
	while (i < col)
	{
		if (tab[row][col] == tab[row][i])
			return (0);
		i++;
	}
	i = 4;
	while (i > col)
	{	
		if (tab[row][col] == tab[row][i])
			return (0);
		i--;
	}
	return (1);
}

int	valid_col(int col, int row, int tab[][6])		//verif doublon col
{
	int i;

	i = 1;
	while (i < col)
	{
		if (tab[row][col] == tab[i][col])
			return (0);
		i++;
	}
	i = 4;
	while (i > col)
	{
		if (tab[row][col] == tab[i][col])
			return (0);
		i--;
	}
	return (1);
}
