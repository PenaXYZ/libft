#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*link;

	while (lst)
	{
		link = lst->next;
		f(lst);
		lst = link;
	}
}

/* Iterates the list lst and applies the function f to each link */
