/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:36:57 by rde-mour          #+#    #+#             */
/*   Updated: 2024/03/02 17:49:52 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_arrlst.h"
#include "ft_getenv.h"

void	envnew(char **env, t_array **var)
{
	size_t	size;
	char	*tmp;
	t_envp	*content;

	if (!env || !var)
		return ;
	while (*env)
	{
		tmp = ft_strchr(*env, '=');
		size = ++tmp - (*env) - 1;
		content = (t_envp *) ft_calloc(1, sizeof(t_envp));
		if (!content)
			return ;
		content->name = ft_substr(*env, 0, size);
		content->values = ft_split(tmp, ':');
		(*var)->add(var, &content);
		env++;
	}
}

void	envprint(t_array **var)
{
	t_envp	*content;
	size_t	i;
	size_t	j;

	i = 0;
	while (i < (*var)->size)
	{
		content = (*var)->list[i++];
		if (!content)
			break ;
		if (content->name)
			ft_printf("%s=", content->name);
		j = 0;
		while (content->values[j])
		{
			ft_printf("%s", content->values[j++]);
			if (content->values[j])
				ft_printf(":");
		}
		ft_printf("\n");
	}
}

void	envadd(t_array **var, char *name, char *values)
{
	t_envp	*content;

	content = (t_envp *) ft_calloc(1, sizeof(t_envp));
	if (!content)
		return ;
	content->name = ft_strdup(name);
	content->values = ft_split(values, ':');
	envdel(var, name);
	(*var)->add(var, &content);
}
