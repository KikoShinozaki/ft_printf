/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:19:17 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/22 19:10:45 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	va_end(args);
}

int	main(void)
{
// %c
	printf("printf:%c\n", "a");
	ft_printf("ft_printf:%c\n", "a");
	printf("--------------\n");
// %s
	printf("printf:%s\n", "abc");
	ft_printf("ft_printf:%s\n", "abc");
	printf("--------------\n");
// %p need fix here
	printf("printf:%p\n", "abc");
	ft_printf("ft_printf:%p\n", "abc");
	printf("--------------\n");
// %d
	printf("printf:%d\n", '1234567890');
	ft_printf("ft_printf:%d\n", '1234567890');
	printf("--------------\n");
// %i
	printf("printf:%i\n", 1234567890);
	ft_printf("ft_printf:%i\n", 1234567890);
	printf("--------------\n");
// %u
	printf("printf:%u\n", 0.1234567891);
	ft_printf("ft_printf:%u\n", 0.1234567891);
	printf("--------------\n");
// %x
	printf("printf:%x\n", 0.1234567891);
	ft_printf("ft_printf:%x\n", 0.1234567891);
	printf("--------------\n");
// %X
	printf("printf:%X\n", 0.1234567891);
	ft_printf("ft_printf:%X\n", 0.1234567891);
	printf("--------------\n");
// %%
	printf("printf:%%\n", '%');
	ft_printf("ft_printf:%%\n", '%');
	printf("--------------\n");
}
