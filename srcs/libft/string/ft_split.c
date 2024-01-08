/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:25:14 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:54:27 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static size_t	count_words(char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			words++;
		while (*s && *s != c)
			s++;
	}
	return (words);
}

static char	*find_word(const char **s, char c)
{
	size_t	end;
	char	*word;

	while (**s == c && **s)
		(*s)++;
	if (!ft_strchr(*s, c))
		end = ft_strlen(*s);
	else
		end = ft_strchr(*s, c) - *s;
	word = ft_substr(*s, 0, end);
	while (**s != c && **s)
		(*s)++;
	return (word);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	words;
	char	**new;

	if (!s)
		return (0);
	words = 0;
	words = count_words((char *)s, c);
	new = (char **) ft_calloc(words + 1, sizeof(char *));
	if (!new)
		return (0);
	i = 0;
	while (words--)
	{
		*(new + i) = find_word(&s, c);
		if (!(*(new + i++)))
		{
			i = 0;
			while (*(new + i))
				free(*(new + i++));
			free(new);
			return (0);
		}
	}
	return (new);
}
