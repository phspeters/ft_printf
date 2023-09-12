/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:24:49 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/12 11:18:24 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "ft_printf_bonus.h"
#include <limits.h>

void	test_hashtag(void);
void	test_space(void);
void	test_plus(void);

int	main(void)
{
	test_hashtag();
	test_space();
	test_plus();
}

void	test_hashtag(void)
{
	int	counter;

	counter = 0;
	ft_printf("************************\n1) # test\n************************\n");
	counter = ft_printf("ft_: %#x\n", INT_MAX);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %#X\n", INT_MAX);
	printf("std counter: %d\n\n", counter);
}

void	test_space(void)
{
	int	counter;

	counter = 0;
	ft_printf("************************\n2) ' ' test\n************************\n");
	counter = ft_printf("ft_:_% i\n", INT_MAX);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std:_% i\n", INT_MAX);
	printf("std counter: %d\n\n", counter);
	counter = ft_printf("ft_:_% d\n", INT_MAX);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std:_% d\n", INT_MAX);
	printf("std counter: %d\n\n", counter);
}

void	test_plus(void)
{
	int	counter;

	counter = 0;
	ft_printf("***********************\n3) + test\n***********************\n");
	counter = ft_printf("ft_: %+i\n", INT_MAX);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %+i\n", INT_MAX);
	printf("std counter: %d\n\n", counter);
	counter = ft_printf("ft_: %+d\n", INT_MAX);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %+d\n", INT_MAX);
	printf("std counter: %d\n\n", counter);
	counter = ft_printf("ft_: %+i\n", INT_MIN);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %+i\n", INT_MIN);
	printf("std counter: %d\n\n", counter);
	counter = ft_printf("ft_: %+d\n", INT_MIN);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %+d\n", INT_MIN);
	printf("std counter: %d\n\n", counter);
}
