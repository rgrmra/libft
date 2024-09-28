/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:39:15 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/27 12:45:39 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (!n || src == dest)
		return (dest);
	p1 = (unsigned char *) dest;
	p2 = (unsigned char *) src;
	if (dest > src)
		ft_memcpy(dest, src, n);
	else
		while (n--)
			*p1++ = *p2++;
	return (dest);
}
