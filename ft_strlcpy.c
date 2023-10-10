/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:01:39 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/09 14:34:17 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	len;

	len = 0;
	if (size > 0)
	{
		while (*src != '\0' && len < (size - 1))
			*(dst + len++) = *src++;
		*(dst + len) = '\0';
	}
	while (*src++ != '\0')
		len++;
	return (len);
}
/*
int	main(void)
{
	char dst[0] = "";
	char src[20]= "testando";

	printf("%zu %s\n", ft_strlcpy(dst, src, 5), dst);
	return (0);
}
*/
