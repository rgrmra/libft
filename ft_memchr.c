/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:26:59 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/07 17:36:59 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*((unsigned char *) s) == (unsigned char) c)
			return (&(*((unsigned char *) s)));
		s++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str = "hello, world!";
	void	*s[20] = {};
	int c = '!';
	int i = 0;
	while (*(str + i) != '\0' && i < 20)
	{
		*(((unsigned char *) s) + i) = *(str + i);
		i++;
	}
	printf("%s\n", (char *) memchr(s, c, 13));
	printf("%s\n", (char *) ft_memchr(s, c, 13));
}
*/
