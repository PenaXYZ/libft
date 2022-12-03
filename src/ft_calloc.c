#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	ptr = malloc(num * size);
	if (ptr)
		ft_bzero(ptr, num * size);
	return (ptr);
}
