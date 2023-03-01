/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 13:24:28 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/18 20:49:47 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int valid_row(int col, int row, int tab[][6]);
int	valid_col(int col, int row, int tab[][6]);
int valid_value_row_right(int col, int row, int tab[][6]);
int valid_value_row_left(int col, int row, int tab[][6]);
int valid_value_col_down(int col, int row, int tab[][6]);
int valid_value_col_up(int col, int row, int tab[][6]);

int	solve(int col, int row, int tab[][6], int k)
{
	int value[] = {1,2,3,4};

	while (col < 4)
	{	
		tab[row][col] = value[k];
		if (valid_row(col, row, tab) && valid_col(col, row, tab)
			   	&& valid_value_row_right(col,row, tab)
			   	&& valid_value_row_left(col,row,tab)
				&& valid_value_col_down(col,row,tab)
				&& valid_value_col_up(col,row,tab)) 
			solve(col + 1, row, tab, k);
		else
			solve(col, row, tab, k + 1);	
	}
	if (col == 4 && row == 4)
		return (1);
	if (col == 4)
	{
		col = 1;
		row++;
	}
	return (0);
}
