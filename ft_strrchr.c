/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 13:58:57 by tom               #+#    #+#             */
/*   Updated: 2019/10/09 16:36:26 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	i = ft_strlen(s) - 1;
	while (i && c != s[i])
		i--;
	if (i == 0 && c == s[i])
		return ((char *)s);
	else if (i == 0 && c != s[i])
		return (NULL);
	return ((char *)s + i);
}
