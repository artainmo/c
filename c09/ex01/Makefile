# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artainmo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/22 00:46:59 by artainmo          #+#    #+#              #
#    Updated: 2019/08/25 15:02:38 by artainmo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

srcs = $(wildcard *.c)

all : libft.a

includes = ft.h

libft.a :
	gcc -c -Wall -Wextra -Werror $(srcs)
	ar rc libft.a *.o

clean :
	rm *.o

fclean : clean
	rm -f libft.a

re : fclean all
