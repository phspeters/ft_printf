/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:51:50 by pehenri2          #+#    #+#             */
/*   Updated: 2024/02/08 16:05:10 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	print_hex_bonus(unsigned int nbr);

/**
 * @brief Function responsible for printing a number in uppercase hexadecimal
 * to the standard output.
 * When the flag is '#', the function prints the prefix "0X" before the number.
 * 
 * @param nbr 
 * @param flag 
 * @return int 
 */
int	ft_puthex_bonus(unsigned int nbr, char flag)
{
	int	counter;

	counter = 0;
	if (flag == '#' && nbr != 0)
		counter += write(1, "0X", 2);
	counter += print_hex_bonus(nbr);
	return (counter);
}

/**
 * @brief Function responsible for printing a number in uppercase hexadecimal
 * to the standard output.
 * 
 * @param nbr Number to be printed.
 * @param flag Flag to be printed.
 * @return The number of printed characters.
 */
static int	print_hex_bonus(unsigned int nbr)
{
	unsigned long	nb;
	int				counter;
	char			*base;

	base = "0123456789ABCDEF";
	nb = nbr;
	counter = 0;
	if (nb >= 16)
	{
		counter += print_hex_bonus(nb / 16);
		counter += ft_putchar_bonus(base[nb % 16]);
	}
	else
	{
		counter += ft_putchar_bonus(base[nb % 16]);
	}
	return (counter);
}
