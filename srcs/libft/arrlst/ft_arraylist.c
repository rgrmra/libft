/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:43:53 by rde-mour          #+#    #+#             */
/*   Updated: 2024/03/02 16:12:11 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arrlst.h"
#include "ft_stdlib.h"

void	arradd(t_array **array, void **node)
{
	t_array	*arr;

	if (!array || !(*array)->list || !node || !(*node))
		return ;
	arr = *array;
	if (arr->index >= arr->size)
	{
		arr->list = (void *) ft_realloc(arr->list,
				sizeof(void *) * arr->index,
				sizeof(void *) * arr->size * 2);
		arr->size *= 2;
	}
	arr->list[arr->index] = *node;
	arr->index++;
}

void	arrdel(t_array **array, void *node, int (*c)(), void (*f)())
{
	t_array	*arr;
	size_t	i;

	if (!array || !(*array)->list || !node || !c)
		return ;
	arr = *array;
	i = 0;
	while (i < arr->index)
	{
		if (c(arr->list[i], node))
		{
			if (f)
				f(&arr->list[i]);
			if (arr->index > 1)
			{
				arr->list[i] = arr->list[arr->index - 1];
				arr->index--;
				i--;
			}
		}
		i++;
	}
}

void	arrclear(t_array **array, void (*f)())
{
	t_array	*arr;

	if (!array || !(*array)->list)
		return ;
	arr = *array;
	while (arr->index--)
	{
		if (f)
			f(&arr->list[arr->index]);
	}
	free(arr->list);
	free(arr);
}

void	**arrget(t_array **array, void *node, int (*c)())
{
	t_array	*arr;
	size_t	i;

	if (!array || !(*array)->list || !node | !c)
		return (NULL);
	arr = *array;
	i = 0;
	while (i < arr->index)
	{
		if (c(arr->list[i], node))
			return (&arr->list[i]);
		i++;
	}
	return (NULL);
}

t_array	*arrnew(void)
{
	t_array	*arr;

	arr = (t_array *) ft_calloc(1, sizeof(t_array));
	if (!arr)
		return (arr);
	arr->list = (void *) ft_calloc(ARRAY_SIZE, sizeof(void *));
	if (!arr->list)
		return (arr);
	arr->size = ARRAY_SIZE;
	arr->index = 0;
	arr->add = &arradd;
	arr->clear = &arrclear;
	arr->get = &arrget;
	arr->del = &arrdel;
	return (arr);
}
