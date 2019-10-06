/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 00:19:40 by tom               #+#    #+#             */
/*   Updated: 2019/10/04 03:30:16 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef DEBUG
#include <stdio.h>
int main()
{
	char test[30] = "Salut ! Comment ça va ?";
	printf("%s\n", test);
	ft_memset(test, 'A', 4);
	printf("%s", test);
}
#endif

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tab;
	unsigned int	i;

	tab = s;
	i = 0;
	while (i < n)
	{
		tab[i++] = c;
	}
	return (s);
}

