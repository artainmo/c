/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-eyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 15:08:28 by mvan-eyn          #+#    #+#             */
/*   Updated: 2019/08/18 17:53:10 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int valid_value_row_right(int col, int row, int tab[6][6])  //verif block en row to right.     ok...
{
	int visible_blocks;
	int i;
	int highest;

	visible_blocks = 1;
	i = 1;
	highest = tab[row][i];
	while (i < 4)
	{
		if (highest < tab[row][i + 1])
		{
			visible_blocks++;
			highest = tab[row][i + 1];
		}
		i++;
	}
	if (visible_blocks == tab[row][0])
		return (1);
	else if (visible_blocks < tab[row][0])
	{
	i = 1;
	while (i <= 4)
	{
		if (tab[row][i] == 0)
			visible_blocks++;
		i++;
	}
	}
	if (visible_blocks == tab[row][0])
		return (1);
	else
		return (0);
}

int valid_value_row_left(int col, int row, int tab[6][6]) //verif block en row to left.    ok...
{
	int visible_blocks;
	int i;
	int highest;

	visible_blocks = 1;
	i = 4;
	highest = tab[row][i];
	while (i > 1)
	{
		if (highest <= tab[row][i - 1] && highest != 0)
		{
			visible_blocks++;
			highest = tab[row][i - 1];
		}
		i--;
	}
	if (visible_blocks == tab[row][5])
		return(1);
	i = 1;
	while (i <= 4)
	{
		if(tab[row][i] == 0 && visible_blocks != tab[row][5])
			visible_blocks++;
		i++;
	}
	if (visible_blocks == tab[row][5])
		return(1);
	else
		return (0);
}

int valid_value_col_down(int col, int row, int tab[6][6]) //verif block en col to down.     ok...
{
	int visible_blocks;
	int i;
	int highest;

	visible_blocks = 1;
	i = 4;
	highest = tab[i][col];
	while (i > 1)
	{
		if (highest < tab[i - 1][col] && highest != 0)
		{
			visible_blocks++;
			highest = tab[i - 1][col];
		}
		i--;
	}
	if (visible_blocks == tab[5][col])
		return (1);
	i = 1;
	while (i < 5)
	{
		if (tab[i][col] == 0 && visible_blocks != tab[5][col])
			visible_blocks++;
		i++;
	}
	if (visible_blocks == tab[5][col])
		return (1);
	else
		return (0);
}

int valid_value_col_up(int col, int row, int tab[6][6]) //verif block en col to down.     ok...
{
	int visible_blocks;
	int i;
	int highest;

	visible_blocks = 1;
	i = 1;
	highest = tab[i][col];
	while (i < 4)
	{
		if (highest < tab[i + 1][col])
		{
			visible_blocks++;
			highest = tab[i + 1][col];
		}
		i++;
	}
	i = 1;
	if (visible_blocks == tab[0][col])
		return (1);
	while (i < 5)
	{
		if (tab[i][col] == 0)
			visible_blocks++;
		i++;
	}
	if (visible_blocks == tab[0][col])
		return (1);
	else
		return (0);
}
