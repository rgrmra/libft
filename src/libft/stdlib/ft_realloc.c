/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:41:07 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/28 10:22:50 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*new;

	if (old_size > new_size)
		old_size = new_size;
	new = (void *) malloc(new_size);
	if (!ptr || !new)
		return (new);
	ft_memcpy(new, (unsigned char *) ptr, old_size);
	free(ptr);
	return (new);
}
