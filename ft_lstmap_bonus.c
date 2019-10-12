/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:24:36 by tmarx             #+#    #+#             */
/*   Updated: 2019/10/12 15:17:10 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, void *(*f)(void *))
{
	t_list *new;
	t_list *ptr;
	t_list *temp;

	if (!list)
		return (NULL);
	new = ft_calloc(sizeof(t_list), 1);
	if (!new)
		return (NULL);
	new->content = f(list->content);
	ptr = new;
	while (list->next)
	{
		list = list->next;
		temp = ft_calloc(sizeof(t_list), 1);
		if (!temp)
			return (NULL);
		temp->content = f(list->content);
		ptr->next = temp;
		ptr = ptr->next;
	}
	return (new);
}
