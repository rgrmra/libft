/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:41:07 by rde-mour          #+#    #+#             */
/*   Updated: 2024/03/02 12:24:26 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_string.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*new;

	if (old_size > new_size)
		old_size = new_size;
	new = (void *) ft_calloc(1, new_size);
	if (!ptr || !new)
		return (new);
	ft_memcpy(new, (unsigned char *) ptr, old_size);
	free(ptr);
	return (new);
}
