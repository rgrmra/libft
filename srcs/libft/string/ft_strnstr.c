/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:49:17 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:53:28 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	llen;
	size_t	i;

	llen = ft_strlen(little);
	if (!llen)
		return ((char *) big);
	i = 0;
	while (len && *(big + i) && llen <= len--)
	{
		if (ft_strncmp(big + i, little, llen) == 0)
			return ((char *) big + i);
		i++;
	}
	return (0);
}
