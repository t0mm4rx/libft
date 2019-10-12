/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:24:45 by tmarx             #+#    #+#             */
/*   Updated: 2019/10/12 15:32:05 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *res;

	res = ft_calloc(sizeof(t_list), 1);
	if (!res)
		return (NULL);
	res->content = content;
	res->next = NULL;
	return (res);
}
