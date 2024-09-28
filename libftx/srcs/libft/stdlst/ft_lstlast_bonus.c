/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:20:13 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:47:04 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlst.h"

t_list	*ft_lstlast(t_list *list)
{
	if (!list)
		return (0);
	while (list -> next != 0)
	{
		list = list -> next;
	}
	return (list);
}
