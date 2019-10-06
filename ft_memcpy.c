/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 03:03:01 by tom               #+#    #+#             */
/*   Updated: 2019/10/04 03:44:50 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef DEBUG
#include <stdio.h>
int main()
{
	char test[20] = "Salut ! Ca va ?";
	char test2[10] = "Ok, cool";
	printf("%s\n", test);
	ft_memcpy(test, test2, 3);
	printf("%s\n", test);
}
#endif

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		((unsigned char*) dest)[i] = ((unsigned char*) src)[i];
		i++;
	}
	return (dest);
}
