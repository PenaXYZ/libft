#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			str[i] = (*f)(i, s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}

/*
ft_strmapi applies the function f to each character of the string passed
as argument by giving its index as first argument to create a “fresh” new
string (with malloc(3)) resulting from the successive applications of f.
*/
