/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 13:54:57 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/19 14:06:56 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb);

int		ft_recursive_factorial(int nb)
{
	int res;
	int i;

	i = 0;
	res = 1;
	if (nb > 0)
	{
		res = nb * ft_recursive_factorial(nb - 1);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	return (res);
}
