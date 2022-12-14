#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	return (ft_memchr(str, c, ft_strlen(str) + 1));
}

/*
ft_strchr searches for first occurence of character c in string
pointed by argument str
*/
