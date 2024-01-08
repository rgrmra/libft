/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:45:42 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:47:19 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlst.h"

t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new;
	t_list	*tmp;

	if (!list || !f || !del)
		return (0);
	new_list = 0;
	while (list)
	{
		tmp = f(list -> content);
		new = ft_lstnew(tmp);
		if (!new)
		{
			ft_lstclear(&new_list, del);
			free (tmp);
			return (0);
		}
		ft_lstadd_back(&new_list, new);
		list = list -> next;
	}
	return (new_list);
}
