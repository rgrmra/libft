/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:19:41 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:44:19 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

int	ft_atoi(const char *nptr)
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
	return ((int) nb);
}
