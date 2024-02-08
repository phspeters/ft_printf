/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:39:26 by pehenri2          #+#    #+#             */
/*   Updated: 2024/02/08 15:49:05 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Function responsible for printing a character to the standard output.
 * 
 * @param c Character to be printed.
 * @return The number of printed characters.
 */
int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
