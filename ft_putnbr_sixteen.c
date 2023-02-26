/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_sixteen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:33:24 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/26 18:13:15 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr_sixteen(unsigned long int p)
{
	unsigned int	tmp;	
	int				output;

	output = 0;
	tmp = p % 16;
	p = p / 16;
	if (0 < tmp)
		output += ft_putnbr_sixteen(p);
	
}
