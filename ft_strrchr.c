/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 13:58:57 by tom               #+#    #+#             */
/*   Updated: 2019/10/08 09:41:22 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef DEBUG
#include <stdio.h>
int main()
{
	char test[] = "bonjour";
	printf("%s\n", ft_strrchr(test, 'n'));
}
#endif

char *ft_strrchr(const char *s, int c)
{
	int i;

	if (c == '\0' || *s == '\0')
		return (0);
	i = ft_strlen(s) - 1;
	while (i && c != s[i])
		i--;
	if (i == 0 && c == s[i])
		return ((char *) s);
	else if (i == 0 && c != s[i])
		return (NULL);
	return ((char *)s + i);
}

