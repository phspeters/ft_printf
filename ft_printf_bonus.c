/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:48:12 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/12 13:57:06 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

// Self made test on https://github.com/phspeters/ft_printf/

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
