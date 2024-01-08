/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:30:08 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:46:54 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlst.h"

void	ft_lstiter(t_list *list, void (*f)(void *))
{
	if (!list || !f)
		return ;
	while (list)
	{
		f(list -> content);
		list = list -> next;
	}
}
