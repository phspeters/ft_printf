/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:34:22 by pehenri2          #+#    #+#             */
/*   Updated: 2024/02/08 15:51:15 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

/**
 * @brief Function responsible for counting the number of characters in a string.
 * 
 * @param str String to be counted.
 * @return The number of characters in the string.
 */
size_t	ft_strlen_bonus(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
