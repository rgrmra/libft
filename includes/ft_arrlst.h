/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlst.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:36:00 by rde-mour          #+#    #+#             */
/*   Updated: 2024/03/01 19:33:38 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRLST_H
# define FT_ARRLST_H

# include "stdlib.h"

# define ARRAYLIST_SIZE 16

typedef struct s_alst	t_alst;

struct s_alst
{
	size_t	size;
	size_t	index;
	void	**list;
	void	(*add)();
	void	(*clear)();
	void	**(*get)();
	void	(*remove)();
};

void	alst_add(t_alst **array, void *node);
void	alst_clear(t_alst **array, void (*f)());
void	**alst_get(t_alst **array, void *node, int (*c)());
void	alst_remove(t_alst **array, void *node, int (*c)(), void (*f)());
t_alst	*new_alst(void);

#endif
