/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:48:12 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/06 17:26:35 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(const char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (specifier == '%')
		return (ft_putchar('%'));
	else if (specifier == 'p')
		return (ft_putptr(va_arg(args, long)));
	else if (specifier == 'u')
		return (ft_putunbr((va_arg(args, int))));
	else if (specifier == 'x')
		return (ft_puthexl(va_arg(args, int)));
	else if (specifier == 'X')
		return (ft_puthex(va_arg(args, int)));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		counter;

	va_start(args, str);
	counter = 0;
	while (*str)
	{
		if (*str == '%')
			counter += print_format(*(++str), args);
		else
			counter += write(1, str, 1);
		str++;
	}
	va_end (args);
	return (counter);
}
