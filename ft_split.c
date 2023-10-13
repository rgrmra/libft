/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:25:14 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/12 16:41:13 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	count_words(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*(s))
	{
		while (*(s) && *(s) == c)
			s++;
		if (*(s))
			words++;
		while (*(s) && *(s) != c)
			s++;
	}
	return (words);
}

static	char	*get_word(char **s, char c)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*word;

	i = 0;
	if (!c)
		return (0);
	while (*(*s + i) && *(*s + i) == c)
		i++;
	start = i;
	while (*(*s + i) && *(*s + i) != c)
		i++;
	end = i;
	if (*(*s + start) != c)
	{
		word = ft_substr(*s, start, end - start);
		i = 0;
		while (i++ < end)
		(*s)++;
		return (word);
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	words;
	char	**new;
	char	*back;

	if (!s)
		return (0);
	words = count_words(s, c);
	new = (char **) ft_calloc(words + 1, sizeof(char *));
	if (!new)
		return (0);
	i = 0;
	back = (char *) s;
	while (i < words)
	{
		new[i++] = get_word(&back, c);
	}
	return (new);
}
/*
int	main(void)
{
	int	i = 0;
	char **new = ft_split("split  ||this|for|me|||||!|", '|');
	while (new[i])
	{
		printf("a: %s\n", new[i]);
		free(new[i++]);
	}
	free(new);
	return (0);
}
*/
