/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:41:54 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/11 18:38:13 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		*(((unsigned char *) dest) + i) = *(((unsigned char *) src) + i);
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*str = "";
	void	*s[20] = {};
	void	*dest[20] = {};
	void	*dest1[20] = {};
	int i = 0;
	while (*(str + i) != '\0' && i < 20)
	{
		*(((unsigned char *) s) + i) = *(str + i);
		i++;
	}
	printf("%s\n", (char *) memcpy(dest, s, 21));
	printf("%s\n", (char *) ft_memcpy(dest1, s, 21));
	return (0);
}
*/
