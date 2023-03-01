/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validearg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 11:52:08 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/18 20:55:11 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_if_valid(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (!(argv[i] >= '1' && argv[i] <= '4'))
		{
			if (!(argv[i] == ' '))
				return (0);
		}
		i++;
	}
	return (1);
}
