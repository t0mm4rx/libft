#include <stdio.h>
#include "libft.h"

void	print_list(t_list *el)
{
	t_list *ptr = el;
	while (ptr)
	{
		printf("%s --> ", ptr->content);
		ptr = ptr->next;
	}
	printf("NULL\n");
}

void	del(void *content)
{
	printf("Deleted : %s\n", content);
}

void	iter(void *content)
{
	printf("Iteration : %s\n", content);
}

t_list	*map(void *content)
{
	char *t = content;
	char *new_str = ft_calloc(sizeof(char), ft_strlen(t) + 1);
	int i = 0;
	while (t[i])
	{
		new_str[i] = ft_toupper(t[i]);
		i++;
	}
	return ft_lstnew(new_str);
}

int main()
{
	printf("** Creating a node (ft_lstnew)\n");
	t_list *list = ft_lstnew("Hello");
	print_list(list);

	printf("** Adding nodes to the list (ft_lstadd_new / ft_lstadd_back)\n");
	ft_lstadd_front(&list, ft_lstnew("Hey,"));
	ft_lstadd_back(&list, ft_lstnew("World"));
	print_list(list);

	printf("** Iterating a function on each node (ft_lstiter)\n");
	ft_lstiter(list, &iter);

	printf("** Getting last node : %s\n", ft_lstlast(list)->content);
	printf("** Testing ft_lstmap, copying the list in uppercase\n");
	t_list *clone = ft_lstmap(list, map);
	print_list(clone);
	printf("** Testing ft_lstclear\n");
	ft_lstclear(&list, &del);
	print_list(list);
}

