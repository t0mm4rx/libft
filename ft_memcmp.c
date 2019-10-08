/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 04:20:10 by tom               #+#    #+#             */
/*   Updated: 2019/10/08 10:09:01 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef DEBUG
#include <stdio.h>
int main()
{
	char a[4] = {2, 4, 2, 4};
	char b[4] = {2, 4, 3, 9};
	printf("%d\n%d", ft_memcmp(a, b, 1), memcmp(a, b, 1));
}
#endif

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;

	i = 0;
	if (!n)
		return (0);
	while (i < (int) n - 1 && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
