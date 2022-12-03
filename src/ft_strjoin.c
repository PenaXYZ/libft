#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}

/*
ft_strjoin allocates (with malloc(3)) and returns a “fresh” string ending
with ’\0’, result of the concatenation of s1 and s2. If the allocation
fails the function returns NULL.
*/
