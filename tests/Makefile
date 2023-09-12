# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 16:05:23 by pehenri2          #+#    #+#              #
#    Updated: 2023/09/12 11:19:34 by pehenri2         ###   ########.fr        #
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

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
	ar rcs $(NAME) $@

eval: eval.o $(NAME)
	$(CC) $(FLAGS) eval.o libftprintf.a -o eval && ./eval
	
eval.o: eval.c
	$(CC) $(FLAGS) -c $< -o $@

eval_b: eval_b.o bonus
	$(CC) $(FLAGS) eval_b.o libftprintf.a -o eval && ./eval
	
eval_b.o: eval_b.c
	$(CC) $(FLAGS) -c $< -o $@

norm:
	norminette -R CheckForbiddenSourceHeader $(FILES) $(FILES_BONUS) ft_printf.h

clean:
	rm -f $(OBJ) $(OBJ_BONUS) eval eval.o eval_b.o

fclean: clean
	rm -f $(NAME)

re: fclean all

all: $(NAME)

.PHONY: clean fclean re all norm
