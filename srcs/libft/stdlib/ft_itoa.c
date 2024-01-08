/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:03:57 by rde-mour          #+#    #+#             */
/*   Updated: 2024/01/08 14:45:19 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

static int	count_digits(long nbr)
{
	int	digits;

	if (nbr == 0)
		return (1);
	digits = 0;
	while (nbr > 0)
	{
		nbr /= 10;
		digits++;
	}
	return (digits);
}

static int	check_sign(long *nbr)
{
	if (*nbr < 0)
	{
		*nbr = *nbr * -1;
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	int		size;
	int		sign;
	long	nbr;
	char	*new;

	nbr = (long) n;
	sign = check_sign(&nbr);
	size = count_digits(nbr);
	new = (char *) ft_calloc(sign + size + 1, sizeof(char));
	if (!new)
		return (0);
	if (nbr == 0)
		*(new) = '0';
	*(new + sign + size--) = '\0';
	while (nbr > 0)
	{
		*(new + size-- + sign) = (nbr % 10) + 48;
		nbr /= 10;
	}
	if (sign)
		*(new) = '-';
	return (new);
}
