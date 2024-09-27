/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:17:55 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/27 12:14:33 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	size1;
	size_t	size2;

	if (!s1 || !s2)
		return (NULL);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	p = (char *) malloc(sizeof(char) * (size1 + size2 + 1));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, size1 + 1);
	ft_strlcat(p, s2, size1 + size2 + 1);
	return (p);
}
