/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:23:58 by tmarx             #+#    #+#             */
/*   Updated: 2019/10/15 19:10:28 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*next;
	t_list	*ptr;

	if (!list || !del)
		return ;
	if (!(*list))
		return ;
	ptr = *list;
	while (ptr)
	{
		next = ptr->next;
		del(ptr->content);
		free(ptr);
		ptr = next;
	}
	*list = NULL;
}
