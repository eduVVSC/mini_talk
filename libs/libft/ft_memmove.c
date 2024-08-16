/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:16:17 by edvieira          #+#    #+#             */
/*   Updated: 2024/05/23 18:16:01 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	int	z;

	z = (int)n - 1;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (z >= 0)
		{
			*(unsigned char *)(dest + z) = *(unsigned char *)(src + z);
			z--;
		}
	}
	else
	{
		while (i < (int)n)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dest);
}
