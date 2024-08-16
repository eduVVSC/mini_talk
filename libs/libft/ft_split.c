/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:46:55 by edvieira          #+#    #+#             */
/*   Updated: 2024/05/23 18:10:41 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char separator)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != separator && (s[i - 1] == separator || s[i - 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

int	word_length(const char *s, int word_to, char separator)
{
	int	i;
	int	word_now;
	int	num_c;

	i = 0;
	num_c = 0;
	word_now = -1;
	while (s[i] != '\0' && word_now < word_to)
	{
		if (s[i] != separator && (s[i - 1] == separator || s[i - 1] == '\0'))
			word_now++;
		if (word_now == word_to)
		{
			while (s[i] != separator && s[i] != '\0')
			{
				num_c++;
				i++;
			}
		}
		i++;
	}
	return (num_c);
}

void	put_word(char **split, const char *s, int word_to, char separator)
{
	int	i;
	int	word_now;
	int	j;

	i = 0;
	j = 0;
	word_now = -1;
	while (s[i] != '\0' && word_now < word_to)
	{
		if (s[i] != separator && (s[i - 1] == separator || s[i - 1] == '\0'))
			word_now++;
		if (word_now == word_to)
		{
			while (s[i] != separator && s[i] != '\0')
			{
				split[word_to][j] = s[i];
				j++;
				i++;
			}
			split[word_to][j] = '\0';
		}
		i++;
	}
}

void	to_free(char **split, int num)
{
	while (num >= 0)
	{
		free(split[num]);
		num--;
	}
	free(split);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		i;
	int		words;

	i = 0;
	words = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	while (i < words)
	{
		split[i] = (char *)malloc(sizeof(char) * (word_length(s, i, c) + 1));
		if (!split[i])
		{
			to_free(split, i);
			return (NULL);
		}
		put_word(split, s, i, c);
		i++;
	}
	split[i] = NULL;
	return (split);
}
