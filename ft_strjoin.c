/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:17:55 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/12 15:28:26 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	size1;
	size_t	size2;
	size_t	i;

	if (!s1 || !s2)
		return (0);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	new = (char *) ft_calloc(size1 + size2 + 1, sizeof(char));
	if (!new)
		return (0);
	i = 0;
	while (*s1)
		*(new + i++) = (char) *(s1)++;
	while (*s2)
		*(new + i++) = (char) *(s2)++;
	*(new + i) = '\0';
	return (new);
}
