/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 03:45:24 by tom               #+#    #+#             */
/*   Updated: 2019/10/04 03:55:30 by tom              ###   ########.fr       */
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
	(void) dest;
	(void) src;
	(void) c;
	(void) n;
	/*char	*d;
	char	*s;
	size_t	i;

	d = (char *) dest;
	s = (char *) src;
	while (i < n)
	{
		if (src[i] == c)
		{

			return (dest + i);
		}
	}*/
	return (NULL);
}
