#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (dest && src[i])
		dest[len++] = src[i++];
	dest[len] = '\0';
	return (dest);
}

/* ft_strcat appends the string pointed to by src to the end of the string */
/* pointed to by dest                                                      */
