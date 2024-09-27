/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:04:22 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/27 11:32:41 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc;
	size_t	total_size;

	alloc = NULL;
	total_size = nmemb * size;
	if (!nmemb || !size || nmemb == total_size / size)
		alloc = (void *) malloc(total_size);
	if (alloc)
		ft_bzero(alloc, total_size);
	return (alloc);
}
