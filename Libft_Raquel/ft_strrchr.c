/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-noro <rde-noro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 04:25:45 by rde-noro          #+#    #+#             */
/*   Updated: 2022/10/15 20:29:09 by rde-noro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_str;

	len_str = ft_strlen(s);
	c = (char)c;
	while (len_str > 0)
	{
		if (*(s + len_str) == c)
			return ((char *) s + len_str);
		len_str--;
	}
	if (*s == c)
		return ((char *) s);
	return (NULL);
}
