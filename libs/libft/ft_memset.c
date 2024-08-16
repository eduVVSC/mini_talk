/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:16:28 by edvieira          #+#    #+#             */
/*   Updated: 2024/04/26 21:12:12 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
this function copies the character passed as parameter
to a number of character in the string
that was also passed as a parameter. Ex:

character =  x
str = how are you todaay
n = 4
result = xxxxare you today
*/

#include "libft.h"

void	*ft_memset(void *str, int swc_character, size_t operations)
{
	size_t	i;

	i = 0;
	while (i < operations)
	{
		*(unsigned char *)(str + i) = (unsigned char)(swc_character);
		i++;
	}
	return (str);
}
