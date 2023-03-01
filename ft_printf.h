/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:41:25 by mnanke            #+#    #+#             */
/*   Updated: 2023/03/01 14:19:53 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>
# include <stdarg.h>
# include <string.h>
# include <stdio.h>
# include "libft/libft.h"

int	ft_printf(const char *input, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_sixteen(unsigned long int p, char *dist);
int	ft_putnbr_unsigned(unsigned int args);

#endif
