/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:35:11 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/12 13:57:53 by pehenri2         ###   ########.fr       */
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
