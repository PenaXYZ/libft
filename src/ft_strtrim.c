#include "libft.h"

static int	ft_iswhitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	int	i;
	int	len;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	while (ft_iswhitespace(s[i]))
		i++;
	while ((ft_iswhitespace(s[len]) || s[len] == '\0') && i != len)
		len--;
	return (ft_strsub(s, i, len - i + 1));
}

/*
ft_strtrim allocates and returns a copy of the string given as argument
without whitespaces at the beginning or at the end of the string. Will be
considered as whitespaces the following characters ’ ’, ’\n’ and ’\t’.

If s has no whitespaces at the beginning or at the end, the function
returns a copy of s. If the allocation fails the function returns NULL.
*/
