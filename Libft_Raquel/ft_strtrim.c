/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-noro <rde-noro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:23:41 by rde-noro          #+#    #+#             */
/*   Updated: 2022/10/10 23:01:47 by rde-noro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	char	*res;

	i = 0;
	end = ft_strlen(s1) - 1;
	while (s1 && ft_strchr(set, s1[i]))
		i++;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	if ((end - i + 1) < 0)
		return (ft_calloc(1, 1));
	res = ft_substr(s1, i, (end - i) + 1);
	if (!res)
		return (NULL);
	return (res);
}
