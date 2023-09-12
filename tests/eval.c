/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:24:49 by pehenri2          #+#    #+#             */
/*   Updated: 2023/09/12 11:19:36 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "ft_printf_bonus.h"
#include <limits.h>

void	test_char(void);
void	test_string(void);
void	test_pointer(void);
void	test_decimal(void);
void	test_integer(void);
void	test_unsigned_integer(void);
void	test_lower_hex(void);
void	test_upper_hex(void);
void	test_percent(void);

int	main(void)
{
	test_char();
	test_string();
	test_pointer();
	test_decimal();
	test_integer();
	test_unsigned_integer();
	test_lower_hex();
	test_upper_hex();
	test_percent();
}

void	test_char(void)
{
	int	counter;

	counter = 0;
	ft_printf("************************\n1) %%c test\n************************\n");
	counter = ft_printf("ft_: %c\n", 'a');
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %c\n", 'a');
	printf("std counter: %d\n\n", counter);
	counter = ft_printf("ft_: %c\n", '%');
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %c\n", '%');
	printf("std counter: %d\n\n", counter);
}

void	test_string(void)
{
	int	counter;

	counter = 0;
	ft_printf("************************\n2) %%s test\n************************\n");
	counter = ft_printf("ft_: %s\n", "Hello");
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %s\n", "Hello");
	printf("std counter: %d\n\n", counter);
	counter = ft_printf("ft_: %s\n", "0123456789");
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %s\n", "0123456789");
	printf("std counter: %d\n\n", counter);
}

void	test_pointer(void)
{
	int		counter;
	char	*test;

	test = malloc(sizeof(char));
	counter = 0;
	ft_printf("************************\n3) %%p test\n************************\n");
	counter = ft_printf("ft_: %p\n", &counter);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %p\n", &counter);
	printf("std counter: %d\n\n", counter);
	counter = ft_printf("ft_: %p\n", test);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %p\n", test);
	printf("std counter: %d\n\n", counter);
	free (test);
}

void	test_decimal(void)
{
	int	counter;

	counter = 0;
	ft_printf("************************\n4) %%d test\n************************\n");
	counter = ft_printf("ft_: %d\n", INT_MAX);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %d\n", INT_MAX);
	printf("std counter: %d\n\n", counter);
	counter = ft_printf("ft_: %d\n", INT_MIN);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %d\n", INT_MIN);
	printf("std counter: %d\n\n", counter);
	counter = ft_printf("ft_: %d\n", 0);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %d\n", 0);
	printf("std counter: %d\n\n", counter);
}

void	test_integer(void)
{
	int	counter;

	counter = 0;
	ft_printf("************************\n5) %%i test\n************************\n");
	counter = ft_printf("ft_: %i\n", INT_MAX);
	ft_printf("ft_counter: %i\n\n", counter);
	counter = printf("std: %i\n", INT_MAX);
	printf("std counter: %i\n\n", counter);
	counter = ft_printf("ft_: %i\n", INT_MIN);
	ft_printf("ft_counter: %i\n\n", counter);
	counter = printf("std: %i\n", INT_MIN);
	printf("std counter: %i\n\n", counter);
	counter = ft_printf("ft_: %i\n", 0);
	ft_printf("ft_counter: %i\n\n", counter);
	counter = printf("std: %i\n", 0);
	printf("std counter: %i\n\n", counter);
}

void	test_unsigned_integer(void)
{
	int	counter;

	counter = 0;
	ft_printf("************************\n6) %%u test\n************************\n");
	counter = ft_printf("ft_: %u\n", INT_MAX);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %u\n", INT_MAX);
	printf("std counter: %d\n\n", counter);
	counter = ft_printf("ft_: %u\n", INT_MIN);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %u\n", INT_MIN);
	printf("std counter: %d\n\n", counter);
	counter = ft_printf("ft_: %u\n", 0);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %u\n", 0);
	printf("std counter: %d\n\n", counter);
}

void	test_lower_hex(void)
{
	int	counter;

	counter = 0;
	ft_printf("************************\n7) %%x test\n************************\n");
	counter = ft_printf("ft_: %x\n", INT_MAX);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %x\n", INT_MAX);
	printf("std counter: %d\n\n", counter);
	counter = ft_printf("ft_: %x\n", INT_MIN);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %x\n", INT_MIN);
	printf("std counter: %d\n\n", counter);
	counter = ft_printf("ft_: %x\n", 0);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %x\n", 0);
	printf("std counter: %d\n\n", counter);
}

void	test_upper_hex(void)
{
	int	counter;

	counter = 0;
	ft_printf("************************\n8) %%X test\n************************\n");
	counter = ft_printf("ft_: %X\n", INT_MAX);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %X\n", INT_MAX);
	printf("std counter: %d\n\n", counter);
	counter = ft_printf("ft_: %X\n", INT_MIN);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %X\n", INT_MIN);
	printf("std counter: %d\n\n", counter);
	counter = ft_printf("ft_: %X\n", 0);
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %X\n", 0);
	printf("std counter: %d\n\n", counter);
}

void	test_percent(void)
{
	int	counter;

	counter = 0;
	ft_printf("************************\n8) %% test\n************************\n");
	counter = ft_printf("ft_: %%\n");
	ft_printf("ft_counter: %d\n\n", counter);
	counter = printf("std: %%\n");
	printf("std counter: %d\n\n", counter);
}
