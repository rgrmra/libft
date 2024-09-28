/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getenv_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:40:39 by rde-mour          #+#    #+#             */
/*   Updated: 2024/03/11 09:13:13 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"
#include "arraylist.h"
#include "getenv.h"

static int	compare(void *src, void *str)
{
	t_var	*p_src;
	char	*p_str;

	p_src = (t_var *) src;
	p_str = (char *) str;
	if (!p_src || !p_src->name || !p_str || !(*p_str))
		return (FAILURE);
	if (!ft_strncmp(p_src->name, str, ft_strlen(p_src->name) + 1))
		return (SUCCESS);
	return (FAILURE);
}

static void	delete(void	*list)
{
	t_var	*p_list;
	size_t	i;

	if (!list)
		return ;
	p_list = (t_var *) list;
	if (p_list->name)
		free(p_list->name);
	i = 0;
	if (p_list->values)
	{
		while (p_list->values[i])
			free(p_list->values[i++]);
		free(p_list->values);
	}
	free(list);
	list = NULL;
}

void	envdel(t_array **var, char *name)
{
	if (!var || !(*var) || !name)
		return ;
	arrdel(var, name, &compare, &delete);
}

void	envclear(t_array **var)
{
	if (!var || !(*var))
		return ;
	arrclear(var, &delete);
}

t_var	*envget(t_array **var, char *name)
{
	if (!var || !(*var) || !name)
		return (NULL);
	return ((t_var *) arrget(var, name, &compare));
}
