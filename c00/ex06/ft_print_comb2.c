/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 16:29:48 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/11 18:20:14 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_print(int a, int b, int c, int d);
void	ft_write(int a, int b, int c, int d);

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 48;
	b = 48;
	c = 48;
	d = 48;
ft_print(a, b, c, d);
}

void	ft_print(a, b, c, d)
{
	while (d < 58)
	{
		c = 48;
		while (c < 58 && d < 58)
		{
			b=48;
			while(b<58 && d<58)
			{
				a=48;
				while(a<58 && d<58)
				{
					ft_write(a, b, c, d);
					a++;
				}
				b++;
			}
			c++;
		}
		d++;
	}
}

void	ft_write(a, b, c, d)
{
	if (d == 57 && c == 57 && b == 57 && a == 57)
	{
		write(1, &d, 1);
		write(1, &c, 1);
		write(1, " ", 1);
		write(1, &b, 1);
		write(1, &a, 1);
	}
	else
	{
		write(1, &d, 1);
		write(1, &c, 1);
		write(1, " ", 1);
		write(1, &b, 1);
		write(1, &a, 1);
		write(2, " ,", 2);
	}
}
