/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:53:43 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/12 19:45:00 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *head;
	t_list *next;

	if (!lst || !del)
		return ;
	head = (*lst);
	next = (*lst);
	while (next)
	{
		head = head -> next;
		ft_lstdelone(next, del);
		next = head;
	}
	*lst = 0;
}
