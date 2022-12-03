#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (size)
	{
		mem = (void *)malloc(sizeof(*mem) * (size));
		if (mem)
		{
			ft_memset(mem, 0, size);
			return (mem);
		}
	}
	return (NULL);
}

/*
ft_memalloc allocates and returns a “fresh” memory area. The memory
allocated is initialized to 0. If the allocation fails, the function
returns NULL.
*/
