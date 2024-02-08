/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:48:12 by pehenri2          #+#    #+#             */
/*   Updated: 2024/02/08 16:02:56 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(const char specifier, va_list args);

/**
 * @brief Function that simulates part of the printf function from the C library.
 * It works with the following format specifiers: c, s, d, i, p, u, x, X and %
 * and does not support flags, width, precision or length modifiers.
 * It receives a format string and a variable number of arguments and prints
 * the formatted string to the standard output. 
 * 
 * @param str Format string to be printed.
 * @param ... Variable arguments.
 * @return Number of printed characters. 
 */
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		counter;

	if (str == NULL)
		return (-1);
	va_start(args, str);
	counter = 0;
	while (*str)
	{
		if (*str == '%')
			counter += print_format(*(++str), args);
		else
			counter += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (counter);
}

/**
 * @brief Function responsible for printing one of the variable arguments
 * passed to the ft_printf function based on the format specifier.
 * 
 * @param specifier Character that represents the format specifier.
 * @param args List of arguments as a va_list.
 * @return The number of printed characters.
 */
static int	print_format(const char specifier, va_list args)
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
		return (ft_puthexlow(va_arg(args, int)));
	else if (specifier == 'X')
		return (ft_puthex(va_arg(args, int)));
	else
		return (0);
}
