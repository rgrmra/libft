/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:30:30 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/07 15:50:56 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last;

	i = 0;
	last = 0;
	while (*(s + i) != 0)
	{
		if (*(s + i) == c)
			last = i;
		if (*(s + i + 1) == '\0' && c == '\0')
			last = i + 1;
		i++;
	}
	if (*(s + last) == c)
		return ((char *) &(*(s + last)));
	return (0);
}
