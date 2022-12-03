#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*d;
	size_t	len;

	if (!dest && !src)
		return (NULL);
	d = dest;
	dest += ft_strlen(dest);
	len = ft_strnlen(src, n);
	dest[len] = '\0';
	ft_memcpy(dest, src, len);
	return (d);
}

/*
ft_strncat appends string pointed to by src to end of string pointed to
by dest up to n characters long
*/
