/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 04:28:09 by tom               #+#    #+#             */
/*   Updated: 2019/10/08 12:25:44 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new)
	{
		while (i < (int)ft_strlen(s))
		{
			new[i] = s[i];
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (0);
}
