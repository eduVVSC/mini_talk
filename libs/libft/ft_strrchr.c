/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:47:37 by edvieira          #+#    #+#             */
/*   Updated: 2024/05/16 17:32:19 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	length;

	length = ft_strlen(str);
	while (length >= 0)
	{
		if (str[length] == (char)c)
			return ((char *)&str[length]);
		length--;
	}
	return (NULL);
}
