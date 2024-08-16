/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:18:38 by edvieira          #+#    #+#             */
/*   Updated: 2024/05/28 15:17:43 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	many_nums(unsigned long nbr, unsigned long base)
{
	int	nums;

	nums = 0;
	while (nbr >= base)
	{
		nbr = nbr / base;
		nums++;
	}
	if (nbr < base)
		nums++;
	return (nums);
}

void	hexa_mem(unsigned long nbr)
{
	char	*hexa_characters;

	hexa_characters = "0123456789abcdef";
	if (nbr >= 16)
	{
		hexa_mem(nbr / 16);
		ft_putchar(hexa_characters[nbr % 16]);
	}
	else
		ft_putchar(hexa_characters[nbr % 16]);
}

int	ft_printpointer(unsigned long memory_num)
{
	if (memory_num == 0)
		return (write(1, "(nil)", 5));
	ft_putstr("0x");
	hexa_mem(memory_num);
	return (many_nums(memory_num, 16) + 2);
}
