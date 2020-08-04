# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luwargni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 00:22:39 by luwargni          #+#    #+#              #
#    Updated: 2018/11/08 02:08:24 by luwargni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SRCS = ./srcs/ft_putchar.c \
	   ./srcs/ft_putstr.c \
	   ./srcs/ft_strlen.c \
	   ./srcs/ft_strcmp.c \
	   ./srcs/ft_swap.c

OBJ = $(SRCS:.c=.o)

CFLAGS += -Werror -Wextra -Wall -I./includes

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
