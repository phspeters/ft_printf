# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 16:05:23 by pehenri2          #+#    #+#              #
#    Updated: 2023/09/12 14:06:20 by pehenri2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FILES = ft_printf.c		ft_putchar.c	ft_putstr.c		ft_putnbr.c		\
		ft_putunbr.c	ft_puthex.c		ft_puthexlow.c	ft_putptr.c		\
		ft_strlen.c
FILES_BONUS = 	ft_printf_bonus.c		ft_putchar_bonus.c		ft_putstr_bonus.c		ft_putnbr_bonus.c	\
				ft_putunbr_bonus.c		ft_puthex_bonus.c		ft_puthexlow_bonus.c	ft_putptr_bonus.c	\
				ft_strlen_bonus.c
FILES_EVAL = eval.c eval_b.c
OBJ = ${FILES:.c=.o}
OBJ_BONUS = ${FILES_BONUS:.c=.o}
OBJ_EVAL = ${FILES_EVAL:.c=.o}
CC = cc
FLAGS = -Wall -Wextra -Werror -g3

${NAME}: $(OBJ)

bonus: $(OBJ_BONUS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
	ar rcs $(NAME) $@

eval: eval.o $(NAME)
	$(CC) $(FLAGS) eval.o libftprintf.a -o eval && ./eval

eval_b: eval_b.o bonus
	$(CC) $(FLAGS) eval_b.o libftprintf.a -o eval && ./eval

norm:
	norminette -R CheckForbiddenSourceHeader $(FILES) $(FILES_BONUS) ft_printf.h ft_printf_bonus.h

clean:
	rm -f $(OBJ) $(OBJ_BONUS) $(OBJ_EVAL)

fclean: clean
	rm -f $(NAME) eval

re: fclean all

all: $(NAME) bonus

.PHONY: clean fclean re all norm
