/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlowerhexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:04:22 by marvin            #+#    #+#             */
/*   Updated: 2024/04/29 16:04:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printlowerhexa(unsigned int nbr)
{
	char	*hexa_characters;

	hexa_characters = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_printlowerhexa(nbr / 16);
		ft_putchar(hexa_characters[nbr % 16]);
	}
	else
		ft_putchar(hexa_characters[nbr % 16]);
}

/*
int	main(void)
{
	int	value_to_convert;

	value_to_convert = 12;
	printf("|%x|\n", value_to_convert);
	ft_printlowerhexa(value_to_convert);
	return (0);
}
*/
