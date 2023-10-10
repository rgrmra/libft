/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:19:41 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/09 16:00:01 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	nb;

	nb = 0;
	sign = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr++ == '-')
			sign++;
	}
	while (ft_isdigit(*nptr) == 1)
	{
		nb *= 10;
		nb += *nptr - 48;
		nptr++;
	}
	if (sign % 2 == 1)
		nb = -nb;
	return (nb);
}
/*
int main(void)
{
	printf("%d\n", atoi("   -21474 83649"));
	printf("%d\n", ft_atoi("   -21474 83649"));
}
*/
