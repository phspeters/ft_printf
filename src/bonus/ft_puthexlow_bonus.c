/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:51:48 by pehenri2          #+#    #+#             */
/*   Updated: 2024/02/08 15:54:55 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	print_hexlow_bonus(unsigned int nbr);

/**
 * @brief Function responsible for printing a number in lowercase hexadecimal
 * to the standard output.
 * When the flag is '#', the function prints the prefix "0x" before the number.
 * 
 * @param nbr Number to be printed.
 * @param flag Flag to be printed.
 * @return The number of printed characters.
 */
int	ft_puthexlow_bonus(unsigned int nbr, char flag)
{
	int	counter;

	counter = 0;
	if (flag == '#' && nbr != 0)
		counter += write(1, "0x", 2);
	counter += print_hexlow_bonus(nbr);
	return (counter);
}

/**
 * @brief Function responsible for printing a number in lowercase hexadecimal
 * 
 * @param nbr The number to be printed.
 * @return The number of printed characters.
 */
static int	print_hexlow_bonus(unsigned int nbr)
{
	unsigned long	nb;
	int				counter;
	char			*base;

	base = "0123456789abcdef";
	nb = nbr;
	counter = 0;
	if (nb >= 16)
	{
		counter += print_hexlow_bonus(nb / 16);
		counter += ft_putchar_bonus(base[nb % 16]);
	}
	else
	{
		counter += ft_putchar_bonus(base[nb % 16]);
	}
	return (counter);
}
