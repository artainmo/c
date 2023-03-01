/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 12:01:13 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/27 16:09:16 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *par)
{
	int l;

	l = 0;
	while (par[l])
	{
		write(1, &par[l], 1);
		l++;
	}
}

void	ft_putnbr(int nb)
{
	int a;
	int b;

	a = 0;
	b = 45;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		write(1, &b, 1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	if (!(nb == -2147483648))
	{
		a = nb % 10 + 48;
		write(1, &a, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
