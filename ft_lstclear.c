#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*next;
	t_list	*ptr;

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
