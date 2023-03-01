/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:16:46 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/19 14:20:21 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power);

int		ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	i = 0;
	res = 1;
	if (power > 0)
	{
		while (i < power)
		{
			res = res * nb;
			i++;
		}
	}
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (res);
}
