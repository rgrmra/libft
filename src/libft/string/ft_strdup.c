/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:24:19 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/27 12:09:46 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *) malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	ft_memcpy((void *) dup, s, len);
	*(dup + len) = '\0';
	return (dup);
}
