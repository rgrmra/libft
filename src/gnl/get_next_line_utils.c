/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:37:59 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/28 11:18:17 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "get_next_line.h"

void	gnl_lstadd_back(t_buffered **list, int character)
{
	t_buffered	*new;
	t_buffered	*tmp;

	if (!list)
		return ;
	new = (t_buffered *) malloc(1 * sizeof(t_buffered));
	if (!new)
		return ;
	new->character = character;
	new->next = NULL;
	if (*list)
	{
		tmp = *list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		return ;
	}
	*list = new;
}

int	gnl_lstfind_character(t_buffered *list, int character, int eof)
{
	size_t	i;

	if (!list)
		return (0);
	i = 1;
	while (list)
	{
		i++;
		if (list->character == character)
			return (i);
		list = list->next;
	}
	return (i * eof);
}

char	*gnl_lstclear(t_buffered **list)
{
	t_buffered	*tmp;

	if (!list || !(*list))
		return (NULL);
	while (*list)
	{
		tmp = *list;
		*list = (*list)->next;
		free(tmp);
	}
	return (NULL);
}
