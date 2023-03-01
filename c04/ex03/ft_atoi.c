/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 12:29:13 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/20 21:21:49 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	ft_minus(char *str, int *i, int *negative);
void	ft_zero(char *str, int *i, int *out);
void	ft_res(int *res, int *negative);

void	ft_zero(char *str, int *i, int *out)
{
	if (str[*i] == '\t' || str[*i] == '\n' || str[*i] == '\v')
		*i += 1;
	else if (str[*i] == '\f' || str[*i] == ' ' || str[*i] == '\r')
		*i += 1;
	else
	{
		*out = 1;
	}
}

void	ft_minus(char *str, int *i, int *negative)
{
	if (str[*i] == '-')
		*negative = *negative + 1;
	*i = *i + 1;
}

void	ft_res(int *res, int *negative)
{
	if (*negative % 2 != 0)
		*res = *res * -1;
}

int		ft_atoi(char *str)
{
	int i;
	int negative;
	int out;
	int res;

	i = 0;
	negative = 0;
	out = 0;
	res = 0;
	while (str[i] && out != 1)
	{
		ft_zero(str, &i, &out);
	}
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		ft_minus(str, &i, &negative);
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	ft_res(&res, &negative);
	return (res);
}
