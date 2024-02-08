/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:35:11 by pehenri2          #+#    #+#             */
/*   Updated: 2024/02/08 15:50:24 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Function responsible for printing a number to the standard output.
 * 
 * @param n Number to be printed.
 * @return The number of printed characters.
 */
int	ft_putnbr(int n)
{
	long	nbr;
	int		counter;

	counter = 0;
	nbr = n;
	if (n < 0)
	{
		counter += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		counter += ft_putnbr(nbr / 10);
	}
	counter += ft_putchar(nbr % 10 + '0');
	return (counter);
}
