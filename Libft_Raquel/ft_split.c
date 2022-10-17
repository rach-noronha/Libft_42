/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-noro <rde-noro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:28:13 by rde-noro          #+#    #+#             */
/*   Updated: 2022/10/11 03:09:16 by rde-noro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_str(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (i == 0 && s[i] == c)
			i++;
		if (s[i] != c && s[i + 1] == c)
			count++;
		if (s[i] != c && s[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		isstr;
	int		i;
	int		itab;
	char	**tab;

	isstr = 0;
	i = 0;
	itab = 0;
	tab = (char **) malloc (sizeof(char *) * (count_str(s, c) + 1));
	while (s[i] && count_str(s, c) > 0)
	{
		while (s[i] && s[i] == c)
			i++;
		isstr = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > isstr)
		{
			tab[itab] = ft_substr(s, isstr, i - isstr);
			itab++;
		}
	}
	tab[itab] = NULL;
	return (tab);
}
