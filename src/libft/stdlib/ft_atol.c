/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:19:41 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/28 10:19:10 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_isdigit(int c);
int	ft_isspace(int c);

int	ft_atol(const char *nptr)
{
	short	sign;
	long	nb;

	while (ft_isspace(*nptr))
		nptr++;
	sign = 1;
	if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			sign = -1;
	nb = 0;
	while (ft_isdigit(*nptr))
		nb = 10 * nb + *nptr++ - '0';
	return (sign * nb);
}
