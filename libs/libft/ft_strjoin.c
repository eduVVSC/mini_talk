/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:47:14 by edvieira          #+#    #+#             */
/*   Updated: 2024/05/23 18:16:46 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined_str;
	int		j;
	int		i;
	int		total_length;

	j = 0;
	i = 0;
	total_length = ft_strlen(s1) + ft_strlen(s2);
	joined_str = (char *)malloc((total_length + 1) * sizeof(char));
	if (!joined_str)
		return (NULL);
	while (s1[i] != '\0')
	{
		joined_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		joined_str[i + j] = s2[j];
		j++;
	}
	joined_str[i + j] = '\0';
	return (joined_str);
}
