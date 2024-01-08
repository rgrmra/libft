/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:24:32 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:45:54 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlst.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	if (!list || !new)
		return ;
	if (!(*list))
		*list = new;
	else
		ft_lstlast(*list)-> next = new;
}
