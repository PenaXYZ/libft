#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * len + 1);
	i = 0;
	if (str)
	{
		while (i < len)
		{
			str[i] = (*f)(s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}

/*
ft_strmap applies the function f to each character of the string given
as argument to create a “fresh” new string (with malloc(3)) resulting
from the successive applications of f.
*/
