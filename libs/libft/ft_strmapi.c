/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:54:26 by edvieira          #+#    #+#             */
/*   Updated: 2024/04/17 12:54:26 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		string_length;
	char	*after_func;

	i = 0;
	string_length = ft_strlen(s);
	after_func = (char *)malloc(sizeof(char) * (string_length + 1));
	if (!after_func)
		return (NULL);
	while (i < string_length)
	{
		after_func[i] = f((unsigned int)i, s[i]);
		i++;
	}
	after_func [i] = '\0';
	return (after_func);
}
