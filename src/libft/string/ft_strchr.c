/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:48:45 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/27 13:06:16 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);
void	*ft_memchr(const void *s, int c, size_t n);

char	*ft_strchr(const char *s, int c)
{
	size_t	size;
	char	*p;

	size = ft_strlen(s);
	p = (char *) ft_memchr(s, c, size + 1);
	return (p);
}
