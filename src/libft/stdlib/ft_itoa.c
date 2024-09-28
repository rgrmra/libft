/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:03:57 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/27 13:32:51 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static int	count_digits(long nbr)
{
	int	digits;

	if (!nbr)
		return (1);
	digits = 0;
	while (nbr)
	{
		nbr /= 10;
		digits++;
	}
	return (digits);
}

static int	check_sign(long *nbr)
{
	if (*nbr >= 0)
		return (0);
	*nbr = *nbr * -1;
	return (1);
}

char	*ft_itoa(int n)
{
	int		size;
	int		sign;
	long	nbr;
	char	*p;

	nbr = (long) n;
	sign = check_sign(&nbr);
	size = count_digits(nbr);
	p = (char *) malloc(sizeof(char) * (sign + size + 1));
	if (!p)
		return (NULL);
	if (!nbr)
		*(p) = '0';
	*(p + sign + size--) = '\0';
	while (nbr)
	{
		*(p + size-- + sign) = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (sign)
		*(p) = '-';
	return (p);
}
