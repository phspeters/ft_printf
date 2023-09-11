/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:51:48 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/11 18:38:14 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlow(unsigned int nbr)
{
	unsigned long	nb;
	int				counter;
	char			*base;

	base = "0123456789abcdef";
	nb = nbr;
	counter = 0;
	if (nb >= 16)
	{
		counter += ft_puthexlow(nb / 16);
		counter += ft_putchar(base[nb % 16]);
	}
	else
	{
		counter += ft_putchar(base[nb % 16]);
	}
	return (counter);
}
