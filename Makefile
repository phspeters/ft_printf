# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 16:05:23 by pehenri2          #+#    #+#              #
#    Updated: 2023/09/11 18:50:59 by pehenri2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FILES = ft_printf.c		ft_putchar.c	ft_putstr.c		ft_putnbr.c		\
		ft_putunbr.c	ft_puthex.c		ft_puthexlow.c	ft_putptr.c		\
		ft_strlen.c
FILES_BONUS = 	ft_printf_bonus.c	ft_putchar.c		ft_putstr.c				ft_putnbr_bonus.c	\
				ft_putunbr.c		ft_puthex_bonus.c	ft_puthexlow_bonus.c	ft_putptr.c			\
				ft_strlen.c
OBJ = ${FILES:.c=.o}
OBJ_BONUS = ${FILES_BONUS:.c=.o}
CC = cc
FLAGS = -Wall -Wextra -Werror -g3

${NAME}: $(OBJ)

bonus: $(OBJ_BONUS)

%.o: %.c ft_printf.h ft_printf_bonus.h
	$(CC) $(FLAGS) -c $< -o $@
	ar rcs $(NAME) $@

eval:
	$(CC) $(FLAGS) main.c libftprintf.a -o eval
	
norm:
	norminette -R CheckForbiddenSourceHeader $(FILES) $(FILES_BONUS) ft_printf.h

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

all: $(NAME)

.PHONY: clean fclean re all norm
