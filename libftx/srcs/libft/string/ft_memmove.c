/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:39:15 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:51:12 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (src == dest || !n)
		return (dest);
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
		while (n--)
			*(d + n) = *(s + n);
	return (dest);
}
