/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 04:11:57 by tom               #+#    #+#             */
/*   Updated: 2019/10/04 04:19:34 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef DEBUG
#include <stdio.h>
int main()
{
	char test[30] = "Salut ! Ca va ?";
	printf("%s\n", memchr(test, 'u', 1));
}
#endif

void *memchr(const void *s, int c, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n && ((unsigned char *)s)[i] != c)
		i++;
	return ((unsigned char *)s + i);
}

