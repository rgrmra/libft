/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:37:20 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/27 12:17:49 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*p;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	p = (char *) malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(p + i) = f(i, *(s + i));
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
