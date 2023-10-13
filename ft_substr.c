/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:47:43 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/12 15:25:09 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*sub;

	if (!s)
		return (0);
	size = ft_strlen(s);
	if (start > size)
		return (ft_strdup(""));
	if (!size || !len)
		return (0);
	if (size - start < len)
		len = size - start;
	sub = (char *) ft_calloc((len + 1), sizeof(char));
	if (!sub)
		return (0);
	i = 0;
	while (*(s + start) != '\0' && i < len)
		*(sub + i++) = *(s + start++);
	*(sub + len) = '\0';
	return (sub);
}
/*
int	main(void)
{
	char *str = "Essa é a string verdadeira!";
	char *sub2 = ft_substr(NULL, 0, 12);

	printf("%s\n", sub2);

	free(sub2);
	return (0);
}
*/
