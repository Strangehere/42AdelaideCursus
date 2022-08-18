# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 22:07:27 by aaattwoo          #+#    #+#              #
#    Updated: 2022/08/15 15:28:06 by aaattwoo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS 	= -Wall -Werror -Wextra
CC 		= clang

NAME 	= libft.a
SRCS 	= 	ft_atoi.c ft_isdigit.c ft_memmove.c ft_strlen.c ft_toupper.c \
			ft_bzero.c ft_isprint.c ft_memset.c ft_strncmp.c ft_isalnum.c \
			ft_memchr.c ft_strchr.c ft_strnstr.c ft_isalpha.c ft_memcmp.c \
			ft_strlcat.c ft_strrchr.c ft_isascii.c ft_memcpy.c ft_strlcpy.c \
			ft_tolower.c ft_calloc.c ft_itoa.c ft_strdup.c \
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
			ft_split.c ft_striteri.c ft_strjoin.c ft_strmapi.c ft_substr.c ft_strtrim.c
BSRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		  ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= ${SRCS:.c=.o}
BOBJS	= ${BSRCS:.c=.o}

.c.o:
	${CC} $(CFLAGS) -g -I . -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

bonus: $(OBJS) $(BOBJS)
		$(AR) -r $(NAME) $?

clean:
		rm -f $(OBJS) $(BOBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
