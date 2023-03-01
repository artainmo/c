/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elajimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 22:24:17 by elajimi           #+#    #+#             */
/*   Updated: 2019/08/25 21:08:10 by elajimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char **argv)
{
	int		nbr;
	int		n;
	int		size;
	char	*dict_str;


	if (argc == 3)
	{
		dict_str = file_to_str(argv[1]);
		nbr = ft_atoi(argv[2]);
	}
	else if (argc == 2)
	{
		dict_str = file_to_str("dict.txt");
		nbr = ft_atoi(argv[1]);
	}
	else
	{
		write(1, "Error\n", 5);
		return (0);
	}
	if (nbr < 0)
		write(1, "Error\n", 5);
	if (nbr == 0)
		write(1, "zero", 4);
	n = -1;
	ft_putnbr(nbr, n);
}
