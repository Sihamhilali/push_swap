# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/04 14:15:56 by selhilal          #+#    #+#              #
#    Updated: 2023/04/13 23:32:43 by selhilal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc 

CFLAGS = -Wall -Wextra -Werror


SRC = check_utilis.c ft_split.c ft_strjoin.c main.c linkdlist.c utilis.c rules_a.c rules_b.c case2.c case3.c case4.c case5.c help.c bigcase.c rules_ab.c

OBJ = $(SRC:.c=.o)

all :$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -g $(SRC) -o $(NAME)

%.o : %.c Push_swap.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re : fclean all 

.PHONY: clean fclean all re