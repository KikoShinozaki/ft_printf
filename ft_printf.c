/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:19:17 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/27 21:17:03 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	distr_af_pc(const char input, va_list *args)
{
	if (input == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (input == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (input == 'p')
		return (ft_putstr("0x")
			+ ft_putnbr_sixteen(va_arg(args, unsigned long int), "small"));
	else if (input == 'd' || input == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (input == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	else if (input == 'x')
		return (ft_putnbr_sixteen(va_arg(args, unsigned int)), "small");
	else if (input == 'X')
		return (ft_putnbr_sixteen(va_arg(args, unsigned int)), "big");
	else if (input == '%')
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
			output += distr_af_pc(input[++i], &args);
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
	char	putc;
	char	putp;

	putc = 'a';
	strcpy(putp, "abc");
	printf("printf:%c\n", putc);
	ft_printf("ft_printf:%c\n--------------\n", putc);
	printf("printf:%s\n", putp);
	ft_printf("ft_printf:%s\n--------------\n", putp);
	printf("printf:%p\n", putp);
	ft_printf("ft_printf:%p\n--------------\n", putp);
	printf("printf:%d\n", INT_MIN);
	ft_printf("ft_printf:%d\n--------------\n", INT_MIN);
	printf("printf:%i\n", INT_MIN);
	ft_printf("ft_printf:%i\n--------------\n", INT_MIN);
	printf("printf:%u\n", UINT_MAX);
	ft_printf("ft_printf:%u\n--------------\n", UINT_MAX);
	printf("printf:%x\n", UINT_MAX);
	ft_printf("ft_printf:%x\n--------------\n", UINT_MAX);
	printf("printf:%X\n", UINT_MAX);
	ft_printf("ft_printf:%X\n--------------\n", UINT_MAX);
	printf("printf:%%\n", '%');
	ft_printf("ft_printf:%%\n--------------\n", '%');
}
