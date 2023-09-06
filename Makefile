# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 16:05:23 by pehenri2          #+#    #+#              #
#    Updated: 2023/09/06 17:28:32 by pehenri2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FILES = ft_printf.c		ft_putchar.c	ft_putstr.c		ft_putnbr.c		\
		ft_putunbr.c	ft_puthex.c		ft_puthexl.c	ft_putptr.c		\
		ft_strlen.c
OBJ = ${FILES:.c=.o}
CC = cc
FLAGS = -Wall -Wextra -Werror -g3

${NAME}: $(OBJ)
	ar rcs ${NAME}

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@
	ar rcs $(NAME) $@

norm:
	norminette -R CheckForbiddenSourceHeader $(FILES) $(FILES_BONUS) ft_printf.h

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

all: $(NAME)

.PHONY: clean fclean re all norm
