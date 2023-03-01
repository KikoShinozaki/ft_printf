
#include"ft_printf.h"

int	ft_putnbr_unsigned(unsigned int ap)
{
	long long	num;
	int			output;

	num = ap;
	output = 0;
	if (num < 0)
		output = ft_putnbr_unsigned(UINT_MAX);
	if (num > 9)
	{
		output += ft_putnbr_unsigned(num / 10);
		output += ft_putnbr_unsigned(num % 10);
	}
	else
		output += ft_putchar(num + '0');
	return (output);
}

