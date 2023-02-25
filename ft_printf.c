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

	else if (input[i] == 'd' || input[i] == 'i')
		output = ft_putnbr(va_arg(args, int));
	else if (input[i] == 'u')

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
	while (imput[i] != '\0')
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
