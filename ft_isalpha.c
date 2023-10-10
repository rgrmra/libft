/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:57:17 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/09 17:18:32 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 't' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
