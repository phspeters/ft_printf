/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:51:48 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/12 13:57:55 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

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

int	ft_puthexlow_bonus(unsigned int nbr, char flag)
{
	int	counter;

	counter = 0;
	if (flag == '#' && nbr != 0)
		counter += write(1, "0x", 2);
	counter += print_hexlow_bonus(nbr);
	return (counter);
}
