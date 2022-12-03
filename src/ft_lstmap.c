#include "libft.h"

static void	ft_freelst(t_list **lst)
{
	free((*lst)->content);
	free(*lst);
	*lst = NULL;
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	new = f(lst);
	if (!new)
		return (NULL);
	if (lst->next)
	{
		new->next = ft_lstmap(lst->next, f);
		if (!new->next)
			ft_freelst(&new);
	}
	return (new);
}

/*
Iterates a list lst and applies the function f to each link to create a “fresh”
list (using malloc(3)) resulting from the successive applications of f.
If the allocation fails, the function returns NULL.
*/
