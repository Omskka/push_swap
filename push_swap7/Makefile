# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okirca <<okirca@student.42.fr>>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 17:16:30 by okirca            #+#    #+#              #
#    Updated: 2023/04/16 23:56:09 by okirca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = src\checker.c src\push_swap.c src\push.c src\swap.c src\rotate.c src\reverse.c src\quicksort.c
FLAGS = -Wall -Wextra -Werror -g
CC = gcc
OBJ = $(SRC:.c=.o)

.SILENT:

all: $(NAME) 

$(NAME) : libfts $(OBJ)
	$(CC) $(OBJ) .\Libft\libft.a -o $(NAME)

libfts:
	make -C .\libft
	
clean :
	make clean -C .\libft
	del -f $(OBJ)

fclean : clean
	make fclean -C .\libft
	del -f $(NAME)

re : fclean all

.PHONY: all clean fclean