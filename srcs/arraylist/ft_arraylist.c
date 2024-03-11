/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD:srcs/arraylist/arraylist.c
/*   arraylist.c                                        :+:      :+:    :+:   */
=======
/*   ft_arraylist.c                                     :+:      :+:    :+:   */
>>>>>>> eb62c49068a14f833a490c48e5f7c81cbebd8e6e:srcs/arraylist/ft_arraylist.c
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:43:53 by rde-mour          #+#    #+#             */
<<<<<<< HEAD:srcs/arraylist/arraylist.c
/*   Updated: 2024/03/11 08:46:18 by rde-mour         ###   ########.org.br   */
=======
/*   Updated: 2024/03/02 16:12:11 by rde-mour         ###   ########.org.br   */
>>>>>>> eb62c49068a14f833a490c48e5f7c81cbebd8e6e:srcs/arraylist/ft_arraylist.c
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"
#include "ft_stdlib.h"
#include "ft_string.h"
#include <stdlib.h>

<<<<<<< HEAD:srcs/arraylist/arraylist.c
void	*arradd(t_arraylist **array, void *node)
=======
void	arradd(t_array **array, void **node)
>>>>>>> eb62c49068a14f833a490c48e5f7c81cbebd8e6e:srcs/arraylist/ft_arraylist.c
{
	t_arraylist	*arr;

<<<<<<< HEAD:srcs/arraylist/arraylist.c
	if (!array || !(*array)->list || !node)
		return (NULL);
=======
	if (!array || !(*array)->list || !node || !(*node))
		return ;
>>>>>>> eb62c49068a14f833a490c48e5f7c81cbebd8e6e:srcs/arraylist/ft_arraylist.c
	arr = *array;
	if (arr->index == arr->size - 1)
	{
		arr->list = (void *) ft_realloc(arr->list,
				sizeof(void *) * arr->size * 2,
				sizeof(void *) * arr->index);
		if (!arr->list)
			return (NULL);
		arr->size *= 2;
	}
	arr->list[arr->index] = *node;
	arr->index++;
	arr->list[arr->index] = NULL;
	return (arr->list[arr->index - 1]);
}

void	arrdel(t_arraylist **array, void *node, int (*cmp)(void *, void *),
		void (*del)(void *))
{
	t_arraylist	*arr;
	size_t		i;

<<<<<<< HEAD:srcs/arraylist/arraylist.c
	if (!array || !(*array)->list || !node || !cmp)
=======
	if (!array || !(*array)->list || !node || !c)
>>>>>>> eb62c49068a14f833a490c48e5f7c81cbebd8e6e:srcs/arraylist/ft_arraylist.c
		return ;
	arr = *array;
	i = 0;
	while (arr->list[i])
	{
		if (cmp(arr->list[i], node))
		{
<<<<<<< HEAD:srcs/arraylist/arraylist.c
			if (del)
				del(arr->list[i]);
			if (arr->index > 1)
			{
				ft_memmove(arr->list[i], arr->list[arr->index - 1],
					sizeof(void *) * (arr->index - i));
=======
			if (f)
				f(&arr->list[i]);
			if (arr->index > 1)
			{
				arr->list[i] = arr->list[arr->index - 1];
>>>>>>> eb62c49068a14f833a490c48e5f7c81cbebd8e6e:srcs/arraylist/ft_arraylist.c
				arr->index--;
				i--;
			}
		}
		i++;
	}
}

void	arrclear(t_arraylist **array, void (*del)(void *))
{
<<<<<<< HEAD:srcs/arraylist/arraylist.c
	t_arraylist	*arr;
=======
	t_array	*arr;
>>>>>>> eb62c49068a14f833a490c48e5f7c81cbebd8e6e:srcs/arraylist/ft_arraylist.c

	if (!array || !(*array)->list)
		return ;
	arr = *array;
	while (arr->index--)
	{
<<<<<<< HEAD:srcs/arraylist/arraylist.c
		if (del)
			del(arr->list[arr->index]);
=======
		if (f)
			f(&arr->list[arr->index]);
>>>>>>> eb62c49068a14f833a490c48e5f7c81cbebd8e6e:srcs/arraylist/ft_arraylist.c
	}
	free(arr->list);
	free(arr);
}

void	*arrget(t_arraylist **array, void *node, int (*cmp)(void *, void *))
{
	t_arraylist	*arr;
	size_t		i;

	if (!array || !(*array)->list || !node | !cmp)
		return (NULL);
	arr = *array;
	i = 0;
	while (i < arr->index)
	{
		if (cmp(arr->list[i], node))
			return (arr->list[i]);
		i++;
	}
	return (NULL);
}

t_arraylist	*arrnew(void)
{
	t_arraylist	*arr;

	arr = (t_arraylist *) ft_calloc(1, sizeof(t_arraylist));
	if (!arr)
		return (arr);
	arr->list = (void *) ft_calloc(ARRAY_SIZE, sizeof(void *));
	if (!arr->list)
		return (arr);
	arr->size = ARRAY_SIZE;
	arr->index = 0;
<<<<<<< HEAD:srcs/arraylist/arraylist.c
=======
	arr->add = &arradd;
	arr->clear = &arrclear;
	arr->get = &arrget;
	arr->del = &arrdel;
>>>>>>> eb62c49068a14f833a490c48e5f7c81cbebd8e6e:srcs/arraylist/ft_arraylist.c
	return (arr);
}
