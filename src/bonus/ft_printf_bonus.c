/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:48:12 by pehenri2          #+#    #+#             */
/*   Updated: 2024/02/08 16:03:58 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	print_format(const char specifier, va_list args, const char flag);

/**
 * @brief Function that simulates part of the printf function from the C library.
 * It works with the following format specifiers: c, s, d, i, p, u, x, X and %
 * and supports the following flags: ' ', '#' and '+'. It does not support
 * width, precision or length modifiers.
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
	size_t	counter;
	size_t	i;

	if (str == NULL)
		return (-1);
	va_start(args, str);
	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			while (str[i] == ' ' || str[i] == '#' || str[i] == '+')
				i++;
			counter += print_format(str[i], args, str[i - 1]);
		}
		else
			counter += ft_putchar_bonus(str[i]);
		i++;
	}
	va_end(args);
	return (counter);
}

/**
 * @brief Function responsible for printing one of the arguments passed to the
 * ft_printf function based on the format specifier.
 * 
 * @param specifier Character that represents the format specifier.
 * @param args List of arguments as a va_list.
 * @param flag Flag to be printed before the number.
 * @return The number of printed characters.
 */
static int	print_format(const char specifier, va_list args, const char flag)
{
	if (specifier == 'c')
		return (ft_putchar_bonus(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_putstr_bonus(va_arg(args, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr_bonus(va_arg(args, int), flag));
	else if (specifier == '%')
		return (ft_putchar_bonus('%'));
	else if (specifier == 'p')
		return (ft_putptr_bonus(va_arg(args, long)));
	else if (specifier == 'u')
		return (ft_putunbr_bonus((va_arg(args, int))));
	else if (specifier == 'x')
		return (ft_puthexlow_bonus(va_arg(args, int), flag));
	else if (specifier == 'X')
		return (ft_puthex_bonus(va_arg(args, int), flag));
	else
		return (0);
}
