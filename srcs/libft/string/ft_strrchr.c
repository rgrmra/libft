/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:30:30 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:53:38 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strrchr(const char *s, int c)
{
	int		slen;

	slen = ft_strlen(s);
	if ((unsigned char) c == 0)
		return ((char *) s + slen);
	while (slen--)
		if (*(s + slen) == (unsigned char) c)
			return ((char *) s + slen);
	return (0);
}
