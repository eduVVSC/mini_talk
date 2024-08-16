/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:52:08 by edvieira          #+#    #+#             */
/*   Updated: 2024/05/21 14:46:25 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstring;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	if (len > s_len - start)
		len = s_len - start;
	if (start > s_len)
		newstring = (char *)malloc((1) * sizeof(char));
	else
		newstring = (char *)malloc((len + 1) * sizeof(char));
	if (!newstring)
		return (NULL);
	while (i < len && start <= s_len && s[start + i] != '\0')
	{
		newstring[i] = s[start + i];
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
