/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:21:16 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/19 14:21:58 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power);

int		ft_recursive_power(int nb, int power)
{
	int i;
	int res;

	i = 0;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
