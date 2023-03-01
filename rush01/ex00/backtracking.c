/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-eyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 19:29:41 by mvan-eyn          #+#    #+#             */
/*   Updated: 2019/08/18 11:15:41 by mvan-eyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		valid_row(int col, int row, char *tab[]) //verif doublon row    OK
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
int		valid_col(int col, int row, char *tab[]) //verif doublon col
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

int valid_value_row_right(int col, int row, char *tab[])  //verif block en row to right.
{
	int block_to_see;
	int i;

	block_to_see = tab[row][0];
	i = 1;
	while (i < col)
	{
		if (tab[row][i] < tab[row][i + 1])
		   	{
				block_to_see--;
				if (block_to_see < 0)
					return (0);
			}
		i++;
	}
	i = 4;
	while (i > col)
	{
		if (tab[row][i] > tab[row][i - 1])
		{
			block_to_see--;
			if (block_to_see < 0)
				return(0);
		}
	}
	return (1);
}

int valid_value_row_left(int col, int row, char *tab[]) //verif block en row to left.
{
	int block_to_see;
	int i;

	block_to_see = tab[row][5];
	i = 4;
	while (i > col)
	{
		if (tab[row][i] < tab[row][i -1])
		{
			block_to_see--;
			if (block_to_see < 0)
				return (0);
		}
		i--;
	}
	i = 1;
	while (i < col)
	{
		if (tab[row][i] > tab[row][i + 1])
		{
			block_to_see--;
			if (block_to_see < 0)
				return (0);
		}
		i++;
	}
	return (1);
}

int valid_value_col_down(int col, int row, char *tab[]) //verif block en col to down.
{
	int block_to_see;
	int i;

	block_to_see = tab[0][col];
	i = 1;
    while (i < row)
	{
		if (tab[i][row] < tab[i + 1][row])
		{
			block_to_see--;
			if (block_to_see < 0)
				return(0);
		}
		i++;
	}
	i = 4
	while (i > row)
	{
		if (tab[i][row] > tab[i - 1][row])
		{
			block_to_see--;
			if (block_to_see < 0)
				return (0);
		}
		i--;
	}
	return (1);
}

int valid_value_col_up(int col, int row,char *tab[]) //verif block en col to up.
{
	int block_to_see;
	int i;

	block_to_see = tab[5][col];
	i = 4;
	while (i > row)
	{
		if (tab[i][col] < tab[i - 1][col])
		{
			block_to_see--;
			if (block_to_see < 0)
				return (0);
		}
		i--;
	}
	i = 1;
	while (i < row)
	{
		if (tab[i][col] > tab[i + 1][col])
		{
			block_to_see--;
			if (block_to_see < 0)
				return (0);
		}
		i++;	
	}
	return (1);
}

int		solve(int col, int row, char *tab[], int k) //recursive backtracking.
{
	int value[] = {1,2,3,4};

	while (col < 4)
	{	
		tab[row][col] = value[k];
		if ((valid_row(col,row,tab)) && (valid_col(col,row,tab))) 
		{
			solve(col + 1, row, tab , value);
		}
		else
			solve(col,row,tab,k + 1);
	}
	if (col == 4 && row == 4)
		return (1);
	if (col == 4)
	{
		col = 1;
		row++;
	}
}
int main()
{
	int tab[6][6] = {{0,1,1,3,1,0},
					{1,0,0,0,0,4},
					{1,0,0,0,0,1},
					{2,0,0,0,0,4},
					{3,0,0,0,0,1},
					{0,1,1,1,1,0}};

	int k;
	int col;
	int row;

	k = 0;
	col = 1;
	row = 1;

	if (solve(col,row,tab,k));
		display(tab);
	else
		return ("ERROR");
}
