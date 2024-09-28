/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:25:14 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/27 13:05:49 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(const char *s, unsigned int start, size_t len);

static size_t	count_words(const char *s, char c)
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
	char	*p;

	while (**s == c && **s)
		(*s)++;
	if (!ft_strchr(*s, c))
		end = ft_strlen(*s);
	else
		end = ft_strchr(*s, c) - *s;
	p = ft_substr(*s, 0, end);
	while (**s != c && **s)
		(*s)++;
	return (p);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	words;
	char	**p;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	p = (char **) malloc(sizeof(char *) * (words + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (words--)
	{
		*(p + i) = find_word(&s, c);
		if (!(*(p + i++)))
		{
			i = 0;
			while (*(p + i))
				free(*(p + i++));
			free(p);
			return (NULL);
		}
	}
	*(p + i) = NULL;
	return (p);
}
