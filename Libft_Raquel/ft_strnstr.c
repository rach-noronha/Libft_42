/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 21:15:38 by rde-noro          #+#    #+#             */
/*   Updated: 2022/09/18 21:36:27 by rde-noro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*str;
	const char	*to_find;

	i = 0;
	str = haystack;
	to_find = needle;
	if (to_find[i] == '\0')
		return ((char *) haystack);
	j = 0;
	while (str[i] != '\0' && j < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0' && i + j < len)
		{
			if (to_find[j + 1] == '\0')
				return (&((char *) str)[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
