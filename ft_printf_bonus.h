/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:48:15 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/12 13:54:38 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putchar_bonus(char c);
int		ft_putstr_bonus(char *str);
int		ft_putnbr_bonus(int n, char flag);
int		ft_putunbr_bonus(unsigned int n);
int		ft_puthex_bonus(unsigned int nbr, char flag);
int		ft_puthexlow_bonus(unsigned int nbr, char flag);
int		ft_putptr_bonus(unsigned long nbr);
// libft
size_t	ft_strlen_bonus(const char *str);

#endif