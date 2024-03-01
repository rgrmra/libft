/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:43:53 by rde-mour          #+#    #+#             */
/*   Updated: 2024/03/01 19:30:22 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arrlst.h"
#include "ft_stdlib.h"
#include "ft_printf_bonus.h"

void	alst_add(t_alst **array, void *node)
{
	t_alst	*arr;

	if (!array || !(*array)->list || !node)
		return ;
	arr = *array;
	if (arr->index >= arr->size)
	{
		arr->list = (void *) ft_realloc(arr->list,
				sizeof(void *) * arr->index,
				sizeof(void *) * arr->size * 2);
		arr->size *= 2;
	}
	arr->list[arr->index] = node;
	arr->index++;
}

void	alst_remove(t_alst **array, void *node, int (*c)(), void (*f)())
{
	t_alst	*arr;
	size_t	i;

	if (!array || !(*array)->list || !node)
		return ;
	arr = *array;
	i = 0;
	while (i < arr->index)
	{
		if (c(arr->list[i], node))
		{
			if (*f)
				f(arr->list[i]);
			arr->list[i] = arr->list[arr->index - 1];
			arr->index--;
			i--;
		}
		i++;
	}
}

void	alst_clear(t_alst **array, void (*f)())
{
	t_alst	*arr;
	size_t	i;

	if (!array || !(*array)->list)
		return ;
	arr = *array;
	i = 0;
	while (i < arr->index)
	{
		if (f)
			f(arr->list[i]);
		i++;
	}
	free(arr->list);
	free(arr);
}

void	**alst_geta(t_alst **array, void *node, int (*c)())
{
	t_alst	*arr;
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

t_alst	*new_alst(void)
{
	t_alst	*arr;

	arr = (t_alst *) ft_calloc(1, sizeof(t_alst));
	if (!arr)
		return (arr);
	arr->list = (void *) ft_calloc(ARRAYLIST_SIZE, sizeof(void *));
	if (!arr->list)
		return (arr);
	arr->size = ARRAYLIST_SIZE;
	arr->index = 0;
	arr->add = &alst_add;
	arr->clear = &alst_clear;
	arr->get = &alst_geta;
	arr->remove = &alst_remove;
	return (arr);
}
