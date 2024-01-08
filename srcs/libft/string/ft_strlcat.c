/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:30:54 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:54:41 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;

	dlen = 0;
	if (dst && size)
		dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dlen > size)
		return (size + slen);
	return (dlen + ft_strlcpy(dst + dlen, src, size - dlen));
}
