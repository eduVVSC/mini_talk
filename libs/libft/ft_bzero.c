/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:15:12 by edvieira          #+#    #+#             */
/*   Updated: 2024/04/18 15:23:36 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t operations)
{
	size_t	i;

	i = 0;
	while (i < operations)
	{
		*(unsigned char *)(str + i) = (unsigned char)('\0');
		i++;
	}
}
