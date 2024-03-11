/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getenv.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:22:22 by rde-mour          #+#    #+#             */
/*   Updated: 2024/03/11 09:07:15 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GETENV_H
# define GETENV_H

# include "stdlib.h"
# include <stdlib.h>
# include "arraylist.h"
# include "ft_string.h"

typedef struct s_var	t_var;

struct s_var
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
t_var	*envget(t_array **var, char *name);
void	envnew(t_array **var, char **envp);
void	envprint(t_array **var);

#endif
