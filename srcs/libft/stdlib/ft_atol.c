/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:19:41 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/17 12:15:26 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

long	ft_atol(const char *nptr)
{
	short	sign;
	long	nb;

	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	sign = 0;
	if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			sign++;
	nb = 0;
	while (ft_isdigit(*nptr))
	{
		nb *= 10;
		nb += *nptr - 48;
		nptr++;
	}
	if (sign)
		nb = -nb;
	return (nb);
}
