/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:47:07 by edvieira          #+#    #+#             */
/*   Updated: 2024/05/23 18:16:18 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*duplicated;
	int		many_characters;
	int		i;

	i = 0;
	many_characters = ft_strlen(str);
	duplicated = (char *)malloc(sizeof(char) * (many_characters + 1));
	if (!duplicated)
		return (NULL);
	while (i < many_characters)
	{
		duplicated[i] = str[i];
		i++;
	}
	duplicated[i] = '\0';
	return (duplicated);
}
