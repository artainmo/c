/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:17:36 by artainmo          #+#    #+#             */
/*   Updated: 2019/08/13 19:05:13 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_non_printable(char *str);
void ft_print_hexa(char nb);

void ft_putstr_non_printable(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
  if ( str[i] < 32 && str[i] > 126 )
  {
    write(1, "\\" , 1);
    if(str[i] < 16)
    write(1, "0" , 1);
    ft_print_hexa(str[i]);
  }
  else
  write(1, &str[i], 1);
  i++;
  }
}

void ft_print_hexa(char nb)
{
  char	*hex;

	hex = "0123456789abcdef";
	if (nb > 16)
	{
		ft_print_hexa(nb / 10);
		ft_print_hexa(nb % 10);
	}
	else
		write(1, &hex[nb], 1);
}
