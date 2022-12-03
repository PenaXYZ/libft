#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;

	if (dest == NULL || src == NULL)
		return (NULL);
	tmp = malloc(sizeof(unsigned char) * n);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}

/*
ft_memmove copies n characters from src to dest,
for overlapping memory ft_memmove is safer than ft_memcpy
*/
