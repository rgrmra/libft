/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:19:41 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/27 11:28:09 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_isdigit(int c);

int	ft_atoi(const char *nptr)
{
	short	sign;
	long	nb;

	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	sign = 1;
	if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			sign = -1;
	nb = 0;
	while (ft_isdigit(*nptr))
		nb = 10 * nb + *nptr++ - '0';
	return ((int) sign * nb);
}
