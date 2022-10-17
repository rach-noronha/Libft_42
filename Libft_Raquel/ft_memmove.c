/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-noro <rde-noro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 04:59:42 by rde-noro          #+#    #+#             */
/*   Updated: 2022/10/15 20:48:00 by rde-noro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*temp;
	size_t				i;

	i = 0;
	d = (unsigned char *) dest;
	temp = (const unsigned char *) src;
	if ((!d && !temp) || !n)
		return (dest);
	if (d <= temp)
	{
		while (i < n)
		{
			d[i] = temp[i];
			i++;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
