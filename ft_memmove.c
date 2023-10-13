/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:39:15 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/12 23:16:50 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
//	size_t				i;

//	i = 0;
	if (!dest && !src)
		return (0);
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (n--)
			*(((char *) dest) + n) = *(((char *) src) + n);
	}
	return (dest);
}
/*
int	main(void)
{
	int i = 0;
	char	*str = "hello, world!";
		
	void	*src[20];
	void	*dest[3];
	void	*dest1[3];

	while (*(str + i) != '\0')
	{
		*(((unsigned char *) src) + i) = *(str + i);
		i++;
	}
	printf("%s\n", (unsigned char *) memmove(dest, src, 19));
	printf("%s\n", (unsigned char *) ft_memmove(dest1, src, 19));
	return (0);
}
*/
