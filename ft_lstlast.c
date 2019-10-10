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
