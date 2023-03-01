# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    make                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artainmo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/25 13:17:10 by artainmo          #+#    #+#              #
#    Updated: 2019/08/25 14:13:01 by artainmo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all : name make compile clean rename

name :
	mv rush-02 main.c

make :
	gcc -Wall -Wextra -Werror main.c

compile :
	./a.out

clean :
	rm ./a.out

rename :
	mv main.c rush-02

fclean :
	rm *.o
