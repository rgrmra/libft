/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arraylist.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:36:00 by rde-mour          #+#    #+#             */
<<<<<<< HEAD:includes/arraylist.h
/*   Updated: 2024/03/05 10:23:48 by rde-mour         ###   ########.org.br   */
=======
/*   Updated: 2024/03/02 13:08:02 by rde-mour         ###   ########.org.br   */
>>>>>>> eb62c49068a14f833a490c48e5f7c81cbebd8e6e:includes/ft_arrlst.h
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAYLIST_H
# define ARRAYLIST_H

# include "ft_stdlib.h"
# include <stdlib.h>

# define ARRAY_SIZE 16

typedef struct s_arraylist	t_arraylist;

struct s_arraylist
{
	size_t	size;
	size_t	index;
	void	**list;
};

<<<<<<< HEAD:includes/arraylist.h
void		*arradd(t_arraylist **array, void *node);
void		arrclear(t_arraylist **array, void (*f)());
void		*arrget(t_arraylist **array, void *node, int (*c)());
void		arrdel(t_arraylist **array, void *node, int (*c)(), void (*f)());
t_arraylist	*arrnew(void);
=======
void	arradd(t_array **array, void **node);
void	arrclear(t_array **array, void (*f)());
void	**arrget(t_array **array, void *node, int (*c)());
void	arrdel(t_array **array, void *node, int (*c)(), void (*f)());
t_array	*arrnew(void);
>>>>>>> eb62c49068a14f833a490c48e5f7c81cbebd8e6e:includes/ft_arrlst.h

#endif
