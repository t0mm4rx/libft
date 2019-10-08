/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 03:56:02 by tom               #+#    #+#             */
/*   Updated: 2019/10/08 09:57:54 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *buffer;

	buffer = ft_calloc(sizeof(char), ft_strlen(src));
	ft_memcpy(buffer, src, n);
	ft_memcpy(dest, buffer, n);
	return (dest);
}
