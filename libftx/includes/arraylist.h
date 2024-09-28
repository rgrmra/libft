/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arraylist.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:36:00 by rde-mour          #+#    #+#             */
/*   Updated: 2024/03/11 09:01:07 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAYLIST_H
# define ARRAYLIST_H

# include <stdlib.h>

# define ARRAY_SIZE 16

typedef struct s_array	t_array;

struct s_array
{
	size_t	size;
	size_t	index;
	void	**list;
};

void	*arradd(t_array **array, void *node);
void	arrclear(t_array **array, void (*del)(void *));
void	*arrget(t_array **array, void *node, int (*cmp)(void *, void *));
void	arrdel(t_array **array, void *node, int (*cmp)(void *, void *),
			void (*del)(void *));
t_array	*arrnew(void);

#endif
