/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:24:51 by tom               #+#    #+#             */
/*   Updated: 2019/10/07 14:40:40 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef DEBUG
#include <stdio.h>
int main()
{
	char test[20] = "Hello world !";
	printf("%s\n", ft_substr(test, 5, 10));
}
#endif

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (len == 0 || start > ft_strlen(s) - 1)
		return (NULL);
	i = 0;
	while (s[i++ + start] && i < len);
	res = malloc(i + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i + start] && i < len)
	{
		res[i] = s[i + start];
		i++;
	}
	return (res);
}
