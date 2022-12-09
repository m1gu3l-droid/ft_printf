# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 17:54:47 by fnovais-          #+#    #+#              #
#    Updated: 2022/11/30 17:59:34 by fnovais-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_strlen.c ft_putnbr_base.c ft_putnbr_ubase.c ft_putnbr.c \
	ft_putchar.c ft_putstr.c ft_itoa.c ft_putnbr_unsigned.c ft_putptr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
