# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jshantay <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/31 10:26:57 by jshantay          #+#    #+#              #
#    Updated: 2021/01/31 14:33:30 by jshantay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
rm -f libft.a
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
rm -f ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
