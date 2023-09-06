/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:35:11 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/06 16:44:50 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	unsigned long	nbr;
	int				counter;

	counter = 0;
	nbr = n;
	if (nbr > 9)
		counter += ft_putnbr(nbr / 10);
	counter += ft_putchar(nbr % 10 + '0');
	return (counter);
}
