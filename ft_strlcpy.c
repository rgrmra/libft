/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:01:39 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/27 12:15:49 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	len;

	slen = ft_strlen(src);
	if (!size)
		return (slen);
	if (slen >= size)
		len = size - 1;
	else
		len = slen;
	ft_memcpy(dst, src, len);
	*(dst + len) = '\0';
	return (slen);
}
