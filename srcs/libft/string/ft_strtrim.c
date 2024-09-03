/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:56:49 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/03 12:34:05 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	size;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	if (!size--)
		return (ft_strdup(""));
	while (size && *(s1 + size) && ft_strchr(set, *(s1 + size)))
		size--;
	new = ft_substr(s1, 0, ++size);
	return (new);
}
