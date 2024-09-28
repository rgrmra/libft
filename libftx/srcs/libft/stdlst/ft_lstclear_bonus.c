/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:53:43 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:46:33 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlst.h"

void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*tmp;

	if (!list || !del)
		return ;
	while (*list)
	{
		tmp = *list;
		*list = (*list)-> next;
		ft_lstdelone(tmp, del);
	}
	*list = 0;
}
