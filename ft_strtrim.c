/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:56:49 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/27 13:06:05 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	if (!size)
		return (ft_strdup(""));
	while (&(*(s1 + size)) && ft_strchr(set, *(s1 + size)))
		size--;
	p = ft_substr(s1, 0, ++size);
	return (p);
}
