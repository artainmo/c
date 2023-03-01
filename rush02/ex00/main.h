/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elajimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 20:48:05 by elajimi           #+#    #+#             */
/*   Updated: 2019/08/25 21:09:46 by elajimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MAIN_H_
#define _MAIN_H_
#define BUFF_SIZE 100
#include <stdlib.h>
#include <unistd.h> 
#include <fcntl.h>

void	take_num_to_char(int x, int n);
void	ft_write_char(int x);
void	ft_putnbr(int nb, int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*file_to_str();
int		count_buffer(char *buf);
void	take_num_to_char(int x, int n);
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		++i;
	}
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		++i;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int i;
	int n;
	int result;

	i = 0;
	n = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		++i;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n *= -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result);
}

char	*ft_strstr(char *str, char *to_find)
{	
	int i;
	int j;
	int x;

	i = 0;
	j = 0;
	x = 0;
	while (str[++i])
	{
		if (to_find[0] == '\0')
		{
			write (1, "ERROR", 5);
			return (0);
		}
		while (str[x] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[x - j]);
			++j;
			++i;
			++x;
		}
		x -= j;
		j = 0;
		++x;
	}
	write (1, "ERROR", 5);
	return (0);
}

void	ft_putnbr(int nb, int n)
{
	int x;

	x = 0;
	++n;
	if (nb > 10)
		ft_putnbr(nb / 10, n);
	x = nb % 10;
	take_num_to_char(x, n);
}

void take_num_to_char(x, n)
{
		if (x != 0 && n == 0)
			ft_write_char(x);
		else if (n == 1 &&  x != 0)
			{
				x = x * 10;
				ft_write_char(x);
			}
		else if (n > 1 &&  x != 0)
		{
			if (n == 2)
			{
				ft_write_char(x);
				ft_write_char(100);
			}
			if (n == 3)
			{
				ft_write_char(x);
				ft_write_char(1000);
			}
			if (n == 4)
			{
				x = x * 10;
				ft_write_char(x);
				ft_write_char(1000);
			}
			if (n == 5)
			{
				ft_write_char(x);
				ft_write_char(100);
				ft_write_char(1000);
			}
			if (n == 6)
			{
				ft_write_char(x);
				ft_write_char(1000000);
			}
			if (n == 7)
			{
				x = x * 10;
				ft_write_char(x);
				ft_write_char(1000000);
			}
			if (n == 8)
			{
				ft_write_char(x);
				ft_write_char(100);
				ft_write_char(1000000);
			}
			if (n == 9)
			{
				ft_write_char(x);
				ft_write_char(1000000000);
			}
		}
}

int		count_buffer(char *str)
{
	int		i;
	int		count; 
	int		output; 
	char	buf[BUFF_SIZE];
	int		ret;

	count = 0;
	output = open(str, O_RDONLY); 
//	if (output != 1)
//	{
	//	ft_putstr("Dict Error\n"); 
//		return 0;	
//	}
	while ((ret = read(output, buf, BUFF_SIZE)))
		++count;
	if (close(output) == -1)
	{
		ft_putstr("Dict Error\n");
		return 0;
	}
	return (count * BUFF_SIZE);
}

char *file_to_str(char *str)
{
	int		size;
	int 	output;
	int 	ret;
	char	*str_dict;
	
	size = count_buffer(str);
	str_dict = malloc((size + 1) * sizeof(char));
	output = open(str, O_RDONLY);
	ret = read(output, str_dict, size);
	str_dict[ret] = '\0';

	return (str_dict);	
}

#endif
