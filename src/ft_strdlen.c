#include "libft.h"

size_t	ft_strdlen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

/* ft_strdlen is similar to ft_strlen, but it will stop calculating if */
/* delimiter char(c) is found                                          */
