/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:24:14 by tmarx             #+#    #+#             */
/*   Updated: 2019/10/10 14:24:15 by tmarx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *ptr;

	ptr = lst;
	if (!lst)
		return (NULL);
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}
