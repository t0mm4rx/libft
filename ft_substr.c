/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:24:51 by tom               #+#    #+#             */
/*   Updated: 2019/10/16 11:52:50 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (!s || len == 0 || ft_strlen(s) == 0 || start >= ft_strlen(s) - 1)
		return (ft_calloc(sizeof(char), 1));
	i = 0;
	while (s[i + start] && i < len)
		i++;
	res = ft_calloc(sizeof(char), i + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i + start] && i < len)
	{
		res[i] = s[i + start];
		i++;
	}
	return (res);
}
