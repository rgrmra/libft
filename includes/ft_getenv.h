/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:22:22 by rde-mour          #+#    #+#             */
/*   Updated: 2024/03/02 18:00:55 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GETENV_H
# define FT_GETENV_H

typedef struct s_envp	t_envp;

struct s_envp
{
	char	*name;
	char	**values;
};

enum e_status
{
	FAILURE,
	SUCCESS
};

void	envadd(t_array **var, char *name, char *values);
void	envclear(t_array **var);
void	envdel(t_array **var, char *name);
t_envp	**envget(t_array **var, char *name);
void	envnew(char **env, t_array **var);
void	envprint(t_array **var);

#endif
