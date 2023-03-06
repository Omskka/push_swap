# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okirca <okirca@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 15:59:15 by okirca            #+#    #+#              #
#    Updated: 2023/03/06 20:27:28 by okirca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# gcc *c ../libft/libft.a -ggdb -o push_swap
# gcc ./src/*c ./libft/libft.a -ggdb -o push_swap

NAME = push_swap
SRC = src/checker.c src/push_swap.c src/swap.c src/push.c
FLAGS = -Wall -Wextra -Werror
CC = gcc
OBJ = $(SRC:.c=.o)

.SILENT:

all: $(NAME)

$(NAME) : libfts $(OBJ)
	$(CC) $(OBJ) ./Libft/libft.a $(FLAGS) -o $(NAME)

libfts:
	make -C ./libft

# .gcc : $(OBJ)
# 	$(CC) $(FLAGS) -o $(SRC)
	
clean :
	make clean -C ./libft
	rm -f $(OBJ)

fclean : clean
	make fclean -C ./libft
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re