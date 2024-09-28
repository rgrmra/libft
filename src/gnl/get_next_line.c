/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:21:28 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/28 11:16:37 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

static char	*gnl_build_string(t_buffered **list)
{
	int			i;
	int			size;
	char		*str;
	t_buffered	*tmp;

	if (!list || !(*list))
		return (NULL);
	size = gnl_lstfind_character(*list, '\n', END_LINE);
	str = (char *) malloc(size * sizeof(char));
	if (!str)
		return (gnl_lstclear(list));
	i = 0;
	tmp = *list;
	while (--size)
	{
		tmp = *list;
		*(str + i++) = (*list)->character;
		*list = (*list)->next;
		free(tmp);
	}
	*(str + i) = '\0';
	return (str);
}

char	*get_next_line(int fd)
{
	ssize_t				i;
	ssize_t				status;
	static char			buffer[BUFFER_SIZE];
	static t_buffered	*list;

	if (fd < 0)
		return (gnl_lstclear(&list));
	if (gnl_lstfind_character(list, '\n', NEW_LINE))
		return (gnl_build_string(&list));
	status = read(fd, buffer, BUFFER_SIZE);
	if (status < 0)
		return (gnl_lstclear(&list));
	i = 0;
	while (i < status)
		gnl_lstadd_back(&list, *(buffer + i++));
	if (!status)
		return (gnl_build_string(&list));
	return (get_next_line(fd));
}