/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:36:59 by tmarx             #+#    #+#             */
/*   Updated: 2019/10/08 13:55:20 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = ft_get_number_length(n);
	res = ft_calloc(sizeof(char), len + 1);

}

void	ft_n_in_ptr(char *ptr, int n)
{
	int i;

	if (n < 0)
	{
		ptr[0] = '-';
		ft
		return ;
	}
	i = 0;
	while (ptr[i])
		i++;
	ptr[];

}

int		ft_get_number_length(int n)
{
	int len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
}
