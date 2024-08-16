/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:37:29 by marvin            #+#    #+#             */
/*   Updated: 2024/04/29 11:37:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printupperhexa(unsigned int nbr)
{
	char	*hexa_characters;

	hexa_characters = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_printupperhexa(nbr / 16);
		ft_putchar(hexa_characters[nbr % 16]);
	}
	else
		ft_putchar(hexa_characters[nbr % 16]);
}

/*
int	main(void)
{
	int	value_to_convert;

	value_to_convert = -1;
	printf("printf: |%X|\n mine :", value_to_convert);
	ft_printupperhexa(value_to_convert);
	return (0);
}

void	ft_putchar(const char c)
{
	write (1, &c ,1);
}

void	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
*/
