/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_sixteen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:33:24 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/27 15:23:42 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr_sixteen(unsigned long int p, char *dist)
{
	unsigned int	tmp;

	tmp = p % 16;
	p = p / 16;
	if (0 < tmp)
		return (ft_putnbr_sixteen(p, dist));
	if (0 <= tmp && tmp <= 9)
		return (ft_putchar((char)tmp + '0'));
	else if (tmp > 9 && dist == "small")
		return (ft_putchar('a' + (char)tmp - 10));
	else if (tmp > 9 && dist == "big")
		return (ft_putchar('A' + (char)tmp - 10));
}
