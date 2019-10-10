#include "libft.h"

int	ft_lstsize(t_list *list)
{
	int	i;
	t_list	*ptr;

	i = 0;
	ptr = list;
	while (ptr)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
