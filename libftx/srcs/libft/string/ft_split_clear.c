/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:11:33 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/13 14:30:49 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_split_clear(char **str)
{
	char	**tmp;

	if (!str)
		return ;
	tmp = str;
	while (*tmp)
		free(*tmp++);
	free(str);
	str = NULL;
}
