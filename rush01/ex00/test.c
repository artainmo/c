/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-eyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 10:22:39 by mvan-eyn          #+#    #+#             */
/*   Updated: 2019/08/18 11:18:32 by mvan-eyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		valid_col(int col, int row, char tab[6][6]) //verif doublon col
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


int main()
{
	int tab[6][6] = {{0,1,1,3,1,0},
					{1,1,2,3,1,4},
					{1,1,0,0,0,1},
					{2,0,0,0,0,4},
					{3,1,0,0,0,1},
					{0,1,1,1,1,0}};

	int k;
	int col;
	int row;

	k = 0;
	col = 1;
	row = 1;
	printf("%d",valid_col(col,row,tab));
}
