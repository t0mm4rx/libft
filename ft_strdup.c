/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 04:28:09 by tom               #+#    #+#             */
/*   Updated: 2019/10/04 04:36:54 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef DEBUG2
#include <stdio.h>
int main()
{
	char a[20] = "Hello world !";
	char *b = ft_strdup(a);
	printf("%s\n%s", a, b);
}
#endif

char *ft_strdup(const char *s)
{
	char *new;
	int i;

	i = 0;
	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new)
	{
		while (i < ft_strlen(s))
		{
			new[i] = s[i];
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (0);
}
