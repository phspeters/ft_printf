# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pehenri2 <pehenri2@student.42sp.org.br     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 16:05:23 by pehenri2          #+#    #+#              #
#    Updated: 2024/02/08 15:28:15 by pehenri2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			=	libftprintf.a
CC 				=	cc
CFLAGS 			=	-Wall -Wextra -Werror -Wunreachable-code -g3
HEADERS			=	-I ./include
SRC_PATH		=	./src/mandatory/
FILES			=	ft_printf.c		ft_putchar.c	ft_puthex.c		ft_puthexlow.c		ft_putnbr.c		\
					ft_putptr.c		ft_putstr.c		ft_putunbr.c	ft_strlen.c
SRC				=	$(addprefix $(SRC_PATH), $(FILES))
OBJS 			=	${SRC:%.c=%.o}
BONUS_PATH		=	./src/bonus/
FILES_BONUS 	=	ft_printf_bonus.c	ft_putchar_bonus.c	ft_puthex_bonus.c	ft_puthexlow_bonus.c	\
					ft_putnbr_bonus.c	ft_putptr_bonus.c	ft_putstr_bonus.c 	ft_putunbr_bonus.c		\
					ft_strlen_bonus.c
SRC_BONUS		=	$(addprefix $(BONUS_PATH), $(FILES_BONUS))
OBJS_BONUS 		=	${SRC_BONUS:%.c=%.o}

${NAME}: $(OBJS)

bonus: $(OBJS_BONUS)

%.o: %.c
	@$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@ && printf "Compiling: $(notdir $<\n)"
	@ar rcs $(NAME) $@

norm:
	@norminette -R CheckForbiddenSourceHeader

clean:
	@rm -f $(OBJS)
	@rm -f $(OBJS_BONUS)
	@echo "Deleted object files"

fclean: clean
	@rm -f $(NAME)
	@echo "Deleted static library"

re: fclean all

all: $(NAME) bonus

.PHONY: clean fclean re all norm
