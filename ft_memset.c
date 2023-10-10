/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:45:41 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/10 15:31:50 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		*(((unsigned char *) s) + i++) = c;
	return (s);
}

int	main(void)
{
	int c = 'm';
	void	*t[10];

	ft_memset(t, c, 10);

	c = 'r';
	int i = 0;
	while (i < 10)
		printf("%c\n", *(((unsigned char *) t) + i++));
	return (0);
}
