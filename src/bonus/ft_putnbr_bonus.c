/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:35:11 by pehenri2          #+#    #+#             */
/*   Updated: 2024/02/08 16:06:48 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	print_nbr_bonus(int n);

/**
 * @brief Function responsible for printing a number to the standard output.
 * When the flag is '+', the function prints the '+' sign before the number.
 * When the flag is ' ', the function prints the ' ' character before the number.
 * 
 * @param n Number to be printed.
 * @param flag Flag to be printed before the number.
 * @return The number of printed characters.
 */
int	ft_putnbr_bonus(int n, char flag)
{
	int	counter;

	counter = 0;
	if ((n >= 0) && (flag == '+'))
		counter += ft_putchar_bonus('+');
	if ((n >= 0) && (flag == ' '))
		counter += ft_putchar_bonus(' ');
	counter += print_nbr_bonus(n);
	return (counter);
}

/**
 * @brief Function responsible for printing a number.
 * 
 * @param n The number to be printed.
 * @return The number of printed characters.
 */
static int	print_nbr_bonus(int n)
{
	long	nbr;
	int		counter;

	counter = 0;
	nbr = n;
	if (n < 0)
	{
		counter += ft_putchar_bonus('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		counter += print_nbr_bonus(nbr / 10);
	}
	counter += ft_putchar_bonus(nbr % 10 + '0');
	return (counter);
}
