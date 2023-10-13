/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:30:30 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/12 23:38:55 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
//	int	last;

	i = ft_strlen(s);
//	last = 0;
	while (i + 1 > 0)
	{
		if (*(s + i) == c)
			return ((char *) &(*(s + i)));
		i--;
	}
	/*while (*(s + i) != 0)
	{
		if (*(s + i) == c)
			last = i;
		if (*(s + i + 1) == '\0' && c == '\0')
			last = i + 1;
		i++;
	}
	if (*(s + last) == c)
		return ((char *) &(*(s + last)));
		*/
	return (0);
}
