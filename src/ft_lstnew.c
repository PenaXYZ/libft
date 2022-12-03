#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list				*link;

	link = (t_list *)malloc(sizeof(t_list));
	if (link == NULL)
		return (NULL);
	link->next = NULL;
	if (!content || content_size == 0)
	{
		link->content = NULL;
		link->content_size = 0;
	}
	else
	{
		link->content = (void *)malloc(content_size + 1);
		if (link->content == NULL)
		{
			free(link);
			return (NULL);
		}
		ft_memcpy(link->content, content, content_size);
		link->content_size = content_size;
	}
	return (link);
}

/*
Allocates (with malloc(3)) and returns a “fresh” link. The variables
content and content_size of the new link are initialized by copy of
the parameters of the function. If the parameter content is nul, the
variable content is initialized to NULL and the variable content_size
is initialized to 0 even if the parameter content_size isn’t. The variable
next is initialized to NULL. If the allocation fails, the function returns
NULL
*/
