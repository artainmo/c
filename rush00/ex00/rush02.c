/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrieven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 12:41:36 by vbrieven          #+#    #+#             */
/*   Updated: 2019/08/11 12:56:09 by vbrieven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
** Writing the middle lines horizontally
*/

void	ft_print_middle_colunms_results(int length, int y)
{
	if (length == 0 || length == y - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

/*
** Writing the first and last lines horizontally
*/

void	ft_length_print(int length, int y, int x, int width)
{
	if (width == 0 || width == x - 1)
	{
		if (length == 0)
			ft_putchar('A');
		else if (length == y - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		ft_print_middle_colunms_results(length, y);
	}
}

/*
** Calling the functions to write lines horizontally + new line return
*/

void	rush(int x, int y)
{
	int width;
	int length;

	if ((x > 0) && (y > 0))
	{
		length = 0;
		while (length < y)
		{
			width = 0;
			while (width < x)
			{
				ft_length_print(length, y, x, width);
				width++;
			}
			ft_putchar('\n');
			length++;
		}
	}
}
