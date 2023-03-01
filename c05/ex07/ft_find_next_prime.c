/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 01:17:13 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/21 16:15:59 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		nb = 2;
	i = nb;
	if (nb > 2147483647)
		return (0);
	while (i < 2 * nb)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
