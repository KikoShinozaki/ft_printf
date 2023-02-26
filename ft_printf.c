/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:19:17 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/26 16:37:06 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	distr_af_pc(const char *input, va_list args)
{
	size_t	i;
	int		output;

	i = 0;
	if (input[i] == 'c')
		output = ft_putchar(va_arg(args, int));
	else if (input[i] == 's')
		output = ft_putstr(va_arg(args, char *));
	else if (input[i] == 'p')
		output = ft_putadrs(va_arg(args, uintptr_t));
	else if (input[i] == 'd' || input[i] == 'i')
		output = ft_putnbr(va_arg(args, int));
	else if (input[i] == 'u')
		output =
	else if (input[i] == 'x')

	else if (input[i] == 'X')

	else if (input[i] == '%')
		output = ft_putchar('%');
}

int	ft_printf(const char *input, ...)
{
	va_list		args;
	size_t		i;
	long long	output;

	va_start(args, input);
	i = 0;
	output = 0;
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
			output += distr_af_pc(input[i], args);
		}
		else
			output += ft_putchar(*input);
		i++;
	}
	if (output == -1 || output > INT_MAX)
		return (-1);
	va_end(args);
	return ((int)output);
}

int	main(void)
{
	printf("printf:%c\n", "a");
	ft_printf("ft_printf:%c\n--------------\n", "a");
	printf("printf:%s\n", "abc");
	ft_printf("ft_printf:%s\n--------------\n", "abc");
	printf("--------------\n");
	printf("printf:%p\n", "abc");
	ft_printf("ft_printf:%p\n--------------\n", "abc");
	printf("printf:%d\n", '1234567890');
	ft_printf("ft_printf:%d\n--------------\n", '1234567890');
	printf("printf:%i\n", 1234567890);
	ft_printf("ft_printf:%i\n--------------\n", 1234567890);
	printf("printf:%u\n", 0.1234567891);
	ft_printf("ft_printf:%u\n--------------\n", 0.1234567891);
	printf("printf:%x\n", 0.1234567891);
	ft_printf("ft_printf:%x\n--------------\n", 0.1234567891);
	printf("printf:%X\n", 0.1234567891);
	ft_printf("ft_printf:%X\n--------------\n", 0.1234567891);
	printf("printf:%%\n", '%');
	ft_printf("ft_printf:%%\n--------------\n", '%');
}
