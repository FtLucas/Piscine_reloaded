# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luwargni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 00:22:39 by luwargni          #+#    #+#              #
#    Updated: 2018/11/08 02:11:02 by luwargni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = ./srcs/main.c \
	   ./srcs/ft_putchar.c \
	   ./srcs/ft_putstr.c

OBJ = $(SRCS:.c=.o)

CFLAGS += -Werror -Wextra -Wall -I./includes

all: $(NAME)

$(NAME): $(OBJ)
		gcc -o $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
