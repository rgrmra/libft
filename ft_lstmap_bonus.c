/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:45:42 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/27 12:38:49 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstadd_back(t_list **list, t_list *new);

t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new;
	t_list	*tmp;

	if (!list || !f || !del)
		return (NULL);
	new_list = NULL;
	while (list)
	{
		tmp = f(list->content);
		new = ft_lstnew(tmp);
		if (!new)
		{
			ft_lstclear(&new_list, del);
			free (tmp);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new);
		list = list->next;
	}
	return (new_list);
}
