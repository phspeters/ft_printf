/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:24:49 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/11 16:41:17 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	int	counter;

	counter = 0;
	counter = ft_printf("ft_: %s\n", "test");
	ft_printf("ft_: %d\n", counter);
	counter = printf("std: %s\n", "test");
	printf("std: %++++  d\n", counter);
}
