/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 03:45:24 by tom               #+#    #+#             */
/*   Updated: 2019/10/08 09:49:09 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef DEBUG
#include <stdio.h>
int main()
{
	char test[20] = "Salut, ça va ?";
	char test2[20] = "Très bien !";
	printf("%s\n", test);
	ft_memccpy(test, test2, 's', 10);
	printf("%s\n", test);
}
#endif

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	d = (char *) dest;
	s = (char *) src;
	i = 0;
	while (i < (int) n && s[i] != c)
	{
		d[i] = s[i];
		i++;
	}
	if (i == (int) n)
		return (NULL);
	else {
		d[i] = s[i];
		return (d + i + 1);
	}
}
