/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:35:11 by pehenri2          #+#    #+#             */
/*   Updated: 2024/02/08 15:51:27 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

/**
 * @brief Function responsible for printing an unsigned number to the standard
 * output.
 * 
 * @param n Number to be printed.
 * @return The number of printed characters.
 */
int	ft_putunbr_bonus(unsigned int n)
{
	unsigned long	nbr;
	int				counter;

	counter = 0;
	nbr = n;
	if (nbr > 9)
		counter += ft_putunbr_bonus(nbr / 10);
	counter += ft_putchar_bonus(nbr % 10 + '0');
	return (counter);
}
