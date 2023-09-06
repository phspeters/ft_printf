/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:24:49 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/06 17:15:50 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	int	counter;

	counter = 0;
	counter = ft_printf("ft_: %p\n", (void *)0);
	ft_printf("ft_: %d\n", counter);
	counter = printf("ft_: %p\n", (void *)0);
	printf("std: %d\n", counter);
}
