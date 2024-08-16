/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:25:08 by edvieira          #+#    #+#             */
/*   Updated: 2024/05/23 18:15:11 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	comparator(char character, const char *to_compare)
{
	int	i;

	i = 0;
	while (to_compare[i] != '\0')
	{
		if (to_compare[i] == character)
			return (0);
		i++;
	}
	return (1);
}

int	precomparator(const char *s1, const char *set, int which)
{
	int	i;
	int	s_len;

	s_len = ft_strlen(s1) - 1;
	i = 0;
	if (which == 1)
	{
		while (comparator(s1[i], set) == 0)
			i++;
	}
	if (which == 2)
	{
		while (comparator(s1[s_len - i], set) == 0)
			i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		s1_len;
	int		t_beg;
	int		t_end;
	char	*trimmed;

	i = 1;
	s1_len = ft_strlen(s1);
	t_beg = precomparator(s1, set, 1);
	t_end = precomparator(s1, set, 2);
	if (t_beg == s1_len)
		trimmed = (char *)malloc(sizeof(char));
	else
		trimmed = (char *)malloc(sizeof(char) * (s1_len - (t_end + t_beg) + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while ((t_beg + i) < (s1_len - t_end))
	{
		trimmed[i] = s1[t_beg + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
