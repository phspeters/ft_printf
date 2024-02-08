/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:51:46 by pehenri2          #+#    #+#             */
/*   Updated: 2024/02/08 16:01:13 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_address(unsigned long nbr);

/**
 * @brief Function responsible for printing a pointer to the standard output.
 * 
 * @param nbr Pointer to be printed.
 * @return The number of printed characters.
 */
int	ft_putptr(unsigned long nbr)
{
	int	counter;

	counter = 0;
	if (nbr == 0)
		counter += write(1, "(nil)", 5);
	else
	{
		counter += write(1, "0x", 2);
		counter += print_address(nbr);
	}
	return (counter);
}

/**
 * @brief Function responsible for printing the hexadecimal value of a pointer.
 * 
 * @param nbr Pointer to be printed.
 * @return The number of printed characters.
 */
static int	print_address(unsigned long nbr)
{
	int		counter;
	char	*base;

	counter = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		counter += print_address(nbr / 16);
		counter += ft_putchar(base[nbr % 16]);
	}
	else
	{
		counter += ft_putchar(base[nbr % 16]);
	}
	return (counter);
}
