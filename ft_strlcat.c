/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:30:54 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/12 23:21:58 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
//	if (!size)
//		return (0);
	while (*(dst + i) != '\0' && i < size)
		i++;
	while (*(src + j) != '\0')
		j++;
	if (i == size || j == size)
		return (i + j);
	while (*(src + k) != '\0' && (i + k) < (size - 1))
	{
		*(dst + i + k) = *(src + k);
		k++;
	}
	*(dst + i + k) = '\0';
	return (i + j);
}
/*
int	main(void)
{
	char	dst[6] = "está ";
	char	src[20] = "testando";

	printf("%zu %s\n", ft_strlcat(dst, src, 10), dst);
	return (0);
}
*/
