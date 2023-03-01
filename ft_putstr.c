/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:41:51 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/26 13:41:51 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include"libft/libft.h"

int	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	return (ft_strlen(str));
}
