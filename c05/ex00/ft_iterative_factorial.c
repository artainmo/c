/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 13:52:22 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/19 13:52:26 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb);

int		ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 1;
	res = nb;
	if (nb > 0)
	{
		while (i < nb)
		{
			res = (nb - i) * res;
			i++;
		}
	}
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (res);
}
