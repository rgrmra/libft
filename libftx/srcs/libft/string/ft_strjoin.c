/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:17:55 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:51:54 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	size1;
	size_t	size2;

	if (!s1 || !s2)
		return (0);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	new = (char *) ft_calloc(size1 + size2 + 1, sizeof(char));
	if (!new)
		return (0);
	ft_strlcpy(new, s1, size1 + 1);
	ft_strlcat(new, s2, size1 + size2 + 1);
	return (new);
}
