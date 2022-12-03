#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * (ft_strlen(s) + 1));
	if (str)
	{
		return (ft_strcpy(str, s));
	}
	return (NULL);
}

/* ft_strdup returns pointer to new string which is duplicate of string s */
