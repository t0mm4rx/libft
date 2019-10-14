/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:23:53 by tmarx             #+#    #+#             */
/*   Updated: 2019/10/14 18:57:19 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **list, t_list *new)
{
	if (!list)
		return ;
	if (!(*list))
	{
		*list = new;
		return ;
	}
	if (list && new)
	{
		new->next = *list;
		*list = new;
	}
}
