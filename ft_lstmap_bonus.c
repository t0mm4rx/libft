/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:24:36 by tmarx             #+#    #+#             */
/*   Updated: 2019/10/10 14:29:42 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, t_list *(*f)(void *))
{
	t_list *ptr;
	t_list *ptr2;
	t_list *new;

	if (!list)
		return (NULL);
	new = f(list->content);
	ptr2 = new;
	ptr = list;
	while (ptr->next)
	{
		ptr2->next = f(ptr->next->content);
		ptr = ptr->next;
		ptr2 = ptr2->next;
	}
	return (new);
}
