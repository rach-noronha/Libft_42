/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-noro <rde-noro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:20:53 by rde-noro          #+#    #+#             */
/*   Updated: 2022/10/07 17:36:19 by rde-noro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	buffer[21];
	char	*res;
	int		isnegative;

	res = buffer + 21;
	*--res = '\0';
	isnegative = 0;
	if (n < 0)
		isnegative = 1;
	if (n == 0)
		*--res = '0';
	while (n != 0)
	{
		if (n > 0)
			*--res = 48 + (n % 10);
		else
			*--res = 48 - (n % 10);
		n /= 10;
	}
	if (isnegative == 1)
		*--res = '-';
	return (ft_strdup(res));
}
