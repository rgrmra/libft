/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:38:25 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/07 19:34:21 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n
		&& (*(((unsigned char *) s1) + i) == *(((unsigned char *) s2) + i)))
		i++;
	if (i != n)
		return (*(((unsigned char *) s1) + i) - *(((unsigned char *) s2) + i));
	return (0);
}
/*
int	main(void)
{
	char	*str = "hello, world";
	char	*str1 = "tello";
	void	*src[20] = {};
	void	*src1[20] = {};
	void	*dest[20] = {};
	void	*dest1[20] = {};
	int 	size = 5;

	int i = 0;
	while (*(str + i) != '\0' && i < 20)
	{
		*(((unsigned char *) src) + i) = *(str + i);
		*(((unsigned char *) src1) + i) = *(str1 + i);
		i++;
	}
	printf("%d\n", memcmp(src, src1, size));
	printf("%d\n", ft_memcmp(src, src1, size));
	return (0);
}
*/
