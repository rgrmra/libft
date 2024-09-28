/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:35:40 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:48:08 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlst.h"

void	ft_lstadd_front(t_list **list, t_list *new)
{
	if (!list || !new)
		return ;
	new -> next = *list;
	*list = new;
}
