#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char) c)
			return ((char *)(str + len));
		len--;
	}
	return (NULL);
}

/*
ft_strrchr sachers for last occurence of character c in string pointed
by argument str
*/
