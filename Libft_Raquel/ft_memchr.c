/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-noro <rde-noro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:15:21 by rde-noro          #+#    #+#             */
/*   Updated: 2022/09/27 19:15:27 by rde-noro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	char	*str;

	str = (char *)s;
	c = (char)c;
	if (len == '\0')
		return (NULL);
	while (len - 1 > 0)
	{
		if (*str == c)
			return ((char *) str);
		str++;
		len--;
	}
	if (*str == c)
		return ((char *) str);
	return (NULL);
}
