/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:24:08 by tmarx             #+#    #+#             */
/*   Updated: 2019/10/12 14:46:16 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *list, void (*f)(void *))
{
	t_list *ptr;

	if (!f || !list)
		return ;
	ptr = list;
	while (ptr)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
}
