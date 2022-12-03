#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;

	if (!str1 || !str2 || !n)
		return (0);
	i = 0;
	while (((unsigned char *)str1)[i] ==
			((unsigned char *)str2)[i] && i < n - 1)
		i++;
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}

/* ft_memcmp compares first n bytes of memory area str and memory area str2 */
