/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:24:49 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/04 18:20:59 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	int	counter;

	counter = 0;
	counter = ft_printf("ft_: %p\n", &counter);
	ft_printf("ft_: %d\n", counter);
	counter = printf("std: %p\n", &counter);
	printf("std: %d\n", counter);
}
