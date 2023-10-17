/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:53:50 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/14 13:38:59 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*new;
	int		i;

	if (!lst)
		return (0);
	i = 1;
	new = lst;
	while ((*new).next != 0)
	{
		i++;
		new = (*new).next;
	}
	return (i);
}
