#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	return (ft_strncmp(s1, s2, n) == 0);
}

/*
ft_strnequ is lexicographical comparison between s1 and s2 up to n
characters or until a ’\0’ is reached. If the 2 strings are identical,
the function returns 1, or 0 otherwise
*/
