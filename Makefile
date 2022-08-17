# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/11 11:26:39 by iryoga            #+#    #+#              #
#    Updated: 2022/08/18 05:11:54 by iryoga           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= 	gcc
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libftprintf.a
SRCS	=	ft_printf.c \
			ft_print_char.c \
			ft_print_str.c \
			ft_print_address.c \
			ft_print_nbr.c \
			ft_print_unnbr.c \
			ft_print_hex.c

OBJS	= $(SRCS:.c=.o)

INCLUDESDIR := ./includes

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDESDIR) -c $< -o $@

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean:clean
	rm -rf $(NAME)

re:fclean all