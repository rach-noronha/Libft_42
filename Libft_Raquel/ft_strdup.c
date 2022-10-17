/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-noro <rde-noro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:03:47 by rde-noro          #+#    #+#             */
/*   Updated: 2022/09/27 23:41:46 by rde-noro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*result;
	int		i;

	result = (char *)malloc(ft_strlen(src) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (*src)
		result[i++] = *src++;
	result[i] = '\0';
	return (result);
}
