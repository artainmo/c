/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 11:27:52 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/18 20:50:12 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_if_valid(char *argv);
int		ft_initialize_tab(int size, int tab[][size]);
void	ft_put_arg(int size, int tab[][size], char *argv);
void	ft_read_tab(int size, int tab[][size]);
int		solve(int col, int row, int tab[][6], int k);

int		main(int argc, char **argv)
{
	int size;
	int tab[6][6];
	int col;
	int row;
	int k;

	argc = 0;
	size = 6;
	col = 1;
	row = 1;
	k = 0;
	if (argv[2])
		return ('\n');
	if (!(ft_check_if_valid(argv[1])))
		return ('\n');
	ft_initialize_tab(size, tab);
	ft_put_arg(size, tab, argv[1]);
	if (solve(col, row, tab, k))
		ft_read_tab(size, tab);
	else
		return ('\n');
	return (0);
}
