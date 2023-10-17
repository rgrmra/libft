/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:41:54 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/15 13:17:44 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!dest && !src)
		return (0);
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (dest < src)
		while (n--)
			*d++ = *s++;
	else
		ft_memmove(dest, src, n);
	return (dest);
}
