# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 02:31:39 by aaattwoo          #+#    #+#              #
#    Updated: 2023/02/10 13:04:17 by aaattwoo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS := ./ft_printf.c	./ft_pnumerical.c	./ft_pchar.c	./ft_pint.c	./ft_pstring.c
OBJS := $(SRCS:.c=.o)

%.o: %.c
	${CC} $(CFLAGS) -g -I . -c $< -o $@

all:	$(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
