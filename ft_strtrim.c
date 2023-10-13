/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:56:49 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/12 15:29:30 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	size;

	if (!s1 || !set)
		return (0);
	if (!ft_strlen(s1))
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	if (!size)
		return (ft_strdup(""));
	while (&s1[size] && ft_strchr(set, *(s1 + size)))
		size--;
	new = ft_substr(s1, 0, ++size);
	return (new);
}
/*
int	main(void)
{
	const char *str = "  \t \t \n   \n\n\n\t";

	printf("%s\n", ft_strtrim(str, "\n\t "));
	return (0);
}
*/
