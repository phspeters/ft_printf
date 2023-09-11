/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:35:11 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/11 18:40:04 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	print_nbr_bonus(int n)
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
		counter += print_nbr_bonus(nbr / 10);
	}
	counter += ft_putchar(nbr % 10 + '0');
	return (counter);
}

int	ft_putnbr_bonus(int n, char flag)
{
	int	counter;

	counter = 0;
	if ((n >= 0) && (flag == '+'))
		counter += ft_putchar('+');
	if (flag == ' ')
		counter += ft_putchar(' ');
	counter += print_nbr_bonus(n);
	return (counter);
}
