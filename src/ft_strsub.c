#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (str)
	{
		ft_memcpy(str, s + start, len);
		str[len] = '\0';
		return (str);
	}
	else
		return (NULL);
}

/*
Allocates (with malloc(3)) and returns a “fresh” substring from the string
given as argument. The substring begins at indexstart and is of size len.

If start and len aren’t refering to a valid substring, the behavior is
undefined. If the allocation fails, the function returns NULL
*/
