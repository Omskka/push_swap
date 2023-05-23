# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okirca <okirca@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 17:16:30 by okirca            #+#    #+#              #
#    Updated: 2023/05/23 16:55:40 by okirca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = src/checker.c src/push_swap.c src/push.c src/swap.c src/rotate.c src/reverse.c src/quicksort.c src/sort.c src/quicksort2.c src/sort2.c
FLAGS = -Wall -Wextra -Werror -g
CC = gcc
OBJ = $(SRC:.c=.o)

.SILENT:

all: $(NAME) 

$(NAME) : libfts $(OBJ)
	$(CC) $(OBJ) ./Libft/libft.a -o $(NAME)

libfts:
	make -C ./libft
	
clean :
	make clean -C ./libft
	rm -f $(OBJ)

fclean : clean
	make fclean -C ./libft
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean