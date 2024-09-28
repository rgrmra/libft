/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:06:12 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/27 12:18:27 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	while (*(p1 + i) && *(p2 + i) && *(p1 + i) == *(p2 + i) && i < n)
		i++;
	if (i != n)
		return (*(p1 + i) - *(p2 + i));
	return (0);
}
