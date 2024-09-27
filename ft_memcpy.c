/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:41:54 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/27 12:44:43 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (!dest && !src)
		return (NULL);
	p1 = (unsigned char *) dest;
	p2 = (unsigned char *) src;
	while (n--)
		*(p1 + n) = *(p2 + n);
	return (dest);
}
