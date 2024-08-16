/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:46:17 by edvieira          #+#    #+#             */
/*   Updated: 2024/05/28 09:17:46 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_many_characters(int n)
{
	int	num;

	num = 0;
	if (n <= 0)
		num++;
	while (n != 0)
	{
		num++;
		n = n / 10;
	}
	return (num);
}

int	ft_power(int many_characters)
{
	int	i;
	int	power;

	i = 1;
	power = 10;
	if ((many_characters - 1) == 0)
		return (1);
	while (i < (many_characters - 1))
	{
		power = power * 10;
		i++;
	}
	return (power);
}

int	ft_putnbr(char *num_in_char, int i, int many_characters, double conv)
{
	int	save_num;

	while (many_characters >= 1 && conv >= 0)
	{
		save_num = conv / ft_power(many_characters);
		num_in_char[i] = '0' + save_num;
		conv = conv - (save_num * ft_power(many_characters));
		i++;
		many_characters--;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*num_in_char;
	double	conv;
	int		many_characters;
	int		i;

	i = 0;
	many_characters = ft_many_characters(n);
	conv = n;
	num_in_char = (char *)malloc(sizeof(char) * many_characters + 1);
	if (num_in_char == NULL)
		return (NULL);
	if (conv < 0)
	{
		num_in_char[0] = '-';
		conv = -conv;
		i++;
		many_characters--;
	}
	i = ft_putnbr(num_in_char, i, many_characters, conv);
	num_in_char[i] = '\0';
	return (num_in_char);
}
