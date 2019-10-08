/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:55:02 by tom               #+#    #+#             */
/*   Updated: 2019/10/08 12:23:52 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_splits(char const *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	len = 0;
	while (s[i])
	{
		if ((i > 0 && s[i - 1] == c && s[i] != c) || (i == 0 && s[i] != c))
			len++;
		i++;
	}
	return (len);
}

size_t	str_len_start(char *s, int start, char c)
{
	int i;

	i = 0;
	while (s[i + start] && s[i + start] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char **res;

	res = malloc(sizeof(char *) * (count_splits(s, c) + 1));
	if (!res)
		return (NULL);
	return (res);
}
