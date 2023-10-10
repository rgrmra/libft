/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:04:22 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/09 21:22:31 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc;
	size_t	total_size;

	alloc = 0;
	total_size = nmemb * size;
	if (!nmemb || !size || nmemb == total_size / size)
		alloc = malloc(total_size);
	if (alloc)
		ft_bzero(alloc, size * nmemb);
	return (alloc);
}
/*
int	main(void)
{
	int	size = 2;
	int	type = 2;

	void *t = calloc(size, type);
	void *y = ft_calloc(size, type);

	int i = 0;
	while (i < size * type + 3)
	{
		printf("%d: T: %p %c | Y: %p %c\n", i, &t[i], *(((unsigned char *) t) + i),
				&y[i], *(((unsigned char *) y) + i));
		i++;
	}
	free(t);
	free(y);
}
*/
