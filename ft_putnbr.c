//
// Created by c1142 on 2023/02/26.
//
#include"ft_printf.h"

void	ft_putnbr(int n)
{
	long long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0')
}
