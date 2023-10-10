/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:49:17 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/09 20:29:04 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	size = ft_strlen(little);
	if (size == 0)
		return ((char *) big);
	if (size > len)
		size = len;
	i = 0;
	j = 0;
	while (*(big + i) != '\0' && len-- > 0)
	{
		if (*(big + i) != *(little + j))
			j = 0;
		else
			if (++j == size)
				return ((char *) &big[++i - j]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char *str = "hello, world!";
	const char *str1 = "helxo";

	printf("%s\n", ft_strnstr(str, str1, 1));
	return (0);
}
*/
