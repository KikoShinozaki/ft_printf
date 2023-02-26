/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:19:17 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/26 18:08:49 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	distr_af_pc(const char *input, va_list args)
{
	size_t	i;

	i = 0;
	if (input[i] == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (input[i] == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (input[i] == 'p')
		return (ft_putstr("0x")
			+ ft_putnbr_sixteen(va_arg(args, unsigned long int), "small"));
	else if (input[i] == 'd' || input[i] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (input[i] == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	else if (input[i] == 'x')
		return (ft_putnbr_sixteen(va_arg(args, unsigned int)), "small");
	else if (input[i] == 'X')
		return (ft_putnbr_sixteen(va_arg(args, unsigned int)), "big");
	else if (input[i] == '%')
		return (ft_putchar('%'));
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
			output += distr_af_pc(input[++i], args);
		else
			output += ft_putchar(input[i]);
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
