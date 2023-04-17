# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/04 14:15:56 by selhilal          #+#    #+#              #
#    Updated: 2023/04/17 23:15:02 by selhilal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAMEB = checker

CC = cc 

CFLAGS = -Wall -Wextra -Werror


SRC = check_utilis.c ft_split.c ft_strjoin.c main.c linkdlist.c utilis.c rules_a.c cases.c rules_b.c case2.c case3.c case4.c case5.c help.c position_index.c rules_ab.c ab.c

SRCB = check_utilis.c ft_split.c ft_strjoin.c linkdlist.c utilis.c rules_a.c cases.c rules_b.c \
		case2.c case3.c case4.c case5.c help.c position_index.c rules_ab.c ab.c checkersteps.c checkersteps2.c ft_checker.c \
		get_nextline/get_next_line.c get_nextline/get_next_line_utils.c help


OBJ = $(SRC:.c=.o)

OBJB = $(SRCB:.c=.o)

all :$(NAME)

bonus :$(NAMEB)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

$(NAMEB): $(OBJB) get_nextline/get_next_line.h
	$(CC) $(CFLAGS) $(SRCB) -o $(NAMEB)

%.o : %.c Push_swap.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME) $(NAMEB)

re : fclean all 

.PHONY: clean fclean all re