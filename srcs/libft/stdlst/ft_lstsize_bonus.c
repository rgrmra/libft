/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:53:50 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:47:40 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlst.h"

int	ft_lstsize(t_list *list)
{
	int		size;

	if (!list)
		return (0);
	size = 0;
	while (list)
	{
		size++;
		list = list -> next;
	}
	return (size);
}
