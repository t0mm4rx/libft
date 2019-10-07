/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 14:11:17 by tom               #+#    #+#             */
/*   Updated: 2019/10/07 01:33:09 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef DEBUG
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
}
#endif

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int i;
	int j;

	if (*to_find == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < (int) len)
	{
		j = 0;
		while (to_find[j] == str[i + j] && i + j < (int) len)
		{
			if (to_find[j + 1] == '\0')
			{
				return ((char *)str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
