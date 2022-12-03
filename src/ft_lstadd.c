#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst != NULL || new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}

/* Adds the element new at the beginning of the list. */
