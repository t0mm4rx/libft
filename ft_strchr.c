/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 13:38:13 by tom               #+#    #+#             */
/*   Updated: 2019/10/04 13:48:49 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef DEBUG
#include <stdio.h>
int main()
{
	char test[20] = "Hello world !";
	printf("%s", ft_strchr(test,'l'));
}
#endif

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (c != s[i++]);
	return ((char *)s + i - 1);
}
