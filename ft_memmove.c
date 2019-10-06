/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <tmarx@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 03:56:02 by tom               #+#    #+#             */
/*   Updated: 2019/10/04 04:01:46 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef DEBUG

#include <stdio.h>
int main()
{
}
#endif

void *memmove(void *dest, const void *src, size_t n)
{
	char *buffer;

	buffer = malloc(sizeof(char) * ft_strlen(src));
	ft_memcpy(buffer, src, n);
	ft_memcpy(dest, src, n);
}
