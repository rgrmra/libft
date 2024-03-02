/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlst.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:36:00 by rde-mour          #+#    #+#             */
/*   Updated: 2024/03/02 01:06:59 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRLST_H
# define FT_ARRLST_H

# include "stdlib.h"

# define ARRAY_SIZE 16

typedef struct s_array	t_array;

struct s_array
{
	size_t	size;
	size_t	index;
	void	**list;
	void	(*add)();
	void	(*clear)();
	void	**(*get)();
	void	(*del)();
};

void	arradd(t_array **array, void *node);
void	arrclear(t_array **array, void (*f)());
void	**arrget(t_array **array, void *node, int (*c)());
void	arrdel(t_array **array, void *node, int (*c)(), void (*f)());
t_array	*arrnew(void);

#endif
