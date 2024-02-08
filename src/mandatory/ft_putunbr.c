/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:35:11 by pehenri2          #+#    #+#             */
/*   Updated: 2024/02/08 15:50:06 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Function responsible for printing an unsigned number to the standard
 * output.
 * 
 * @param n Number to be printed.
 * @return The number of printed characters.
 */
int	ft_putunbr(unsigned int n)
{
	unsigned long	nbr;
	int				counter;

	counter = 0;
	nbr = n;
	if (nbr > 9)
		counter += ft_putunbr(nbr / 10);
	counter += ft_putchar(nbr % 10 + '0');
	return (counter);
}
