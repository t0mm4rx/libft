#include "libft.h"

void	ft_lstiter(t_list *list, void (*f)(void *))
{
	t_list *ptr;

	ptr = list;
	while (ptr)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
}
