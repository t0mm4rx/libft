#include "libft.h"

void	ft_lstdelone(t_list *el, void (*del)(void *))
{
	del(el->content);
	free(el);
	// how to set the pointer free ?
}
