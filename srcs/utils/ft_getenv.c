/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:40:39 by rde-mour          #+#    #+#             */
/*   Updated: 2024/03/02 18:00:00 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_arrlst.h"
#include "ft_getenv.h"

static int	compare(t_envp *src, char *str)
{
	if (!src || !src->name || !str || !(*str))
		return (FAILURE);
	if (!ft_strncmp(src->name, str, ft_strlen(src->name) + 1))
		return (SUCCESS);
	return (FAILURE);
}

static int	delete(t_envp **list)
{
	size_t	i;

	if (!list || !(*list))
		return (FAILURE);
	if ((*list)->name)
		free((*list)->name);
	i = 0;
	if ((*list)->values)
	{
		while ((*list)->values[i])
			free((*list)->values[i++]);
		free((*list)->values);
	}
	free(*list);
	*list = NULL;
	return (SUCCESS);
}

void	envdel(t_array **var, char *name)
{
	if (!var || !(*var) || !name)
		return ;
	(*var)->del(var, "PATH", &compare, &delete);
}

void	envclear(t_array **var)
{
	if (!var || !(*var))
		return ;
	(*var)->clear(var, &delete);
}

t_envp	**envget(t_array **var, char *name)
{
	if (!var || !(*var) || !name)
		return (NULL);
	return ((t_envp **)(*var)->get(var, name, &compare));
}
