#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = (unsigned char)c;
	return (s);
}

/*
ft_memset copies the character c to first n characters of string s
*/
