
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>
# include <string.h>
# include <stdio.h>

int		ft_printf(const char *input, ...);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);

#endif
