/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:37:20 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:52:52 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;
	size_t			size;

	if (!s)
		return (0);
	size = ft_strlen(s);
	new = (char *) ft_calloc(size + 1, sizeof(char));
	if (!new)
		return (0);
	i = 0;
	while (*(s + i))
	{
		*(new + i) = f(i, *(s + i));
		i++;
	}
	*(new + i) = '\0';
	return (new);
}
