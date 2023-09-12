/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:51:46 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/12 13:59:03 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	print_address_bonus(unsigned long nbr)
{
	int		counter;
	char	*base;

	counter = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		counter += print_address_bonus(nbr / 16);
		counter += ft_putchar_bonus(base[nbr % 16]);
	}
	else
	{
		counter += ft_putchar_bonus(base[nbr % 16]);
	}
	return (counter);
}

int	ft_putptr_bonus(unsigned long nbr)
{
	int	counter;

	counter = 0;
	if (nbr == 0)
		counter += write(1, "(nil)", 5);
	else
	{
		counter += write(1, "0x", 2);
		counter += print_address_bonus(nbr);
	}
	return (counter);
}
