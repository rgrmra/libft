/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:24:19 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/09 18:43:13 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	size;
	char	*dup;

	size = ft_strlen(s);
	dup = (char *) malloc((size + 1) * sizeof(char));
	if (!dup)
		return (0);
	i = 0;
	while (i < size)
		*(dup + i++) = *(s)++;
	*(dup + i) = '\0';
	return (dup);
}
/*
int	main(void)
{
	char *str = "teste";

	char *dest1 = ft_strdup(str);
	char *dest = ft_strdup(str);

	printf("%p %s \n%p %s\n", str, str, dest, dest);
	printf("\n%p %s \n%p %s\n", str, str, dest1, dest1);

	free(dest1);
	free(dest);

	return (0);
}
*/
