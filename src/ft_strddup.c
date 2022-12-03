#include "libft.h"

char	*ft_strddup(const char *s, char c)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strdlen((char *)s, c) + 1);
	if (!str)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* ft_strddup is similar to ft_strdup, but it will only duplicate content of  */
/* string 's' until delimiting character 'c' 								  */
