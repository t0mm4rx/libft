/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:06:45 by tom               #+#    #+#             */
/*   Updated: 2019/10/07 15:44:56 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef DEBUG
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strtrim("Hello world !", " o"));
}
#endif

int		in_charset(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	int		j;
	char	*res;

	len = 0;
	i = 0;
	j = 0;
	while (s1[i])
		len += 1 - in_charset(set, s1[i++]);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s1[j])
	{
		if (!in_charset(set, s1[j]))
			res[i++] = s1[j];
		j++;
	}
	res[i] = '\0';
	return (res);
}
