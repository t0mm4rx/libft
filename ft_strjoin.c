/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:46:04 by tom               #+#    #+#             */
/*   Updated: 2019/10/07 15:05:05 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef DEBUG
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strjoin("ok", "ca marche"));
}
#endif

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	i = -1;
	j = -1;
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	while (++i < (int)ft_strlen(s1))
		res[i] = s1[i];
	while (++j < (int)ft_strlen(s2))
		res[i + j] = s2[j];
	res[i + j] = '\0';
	return (res);
}
