#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i] != 0)
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*
ft_strcmp compares string pointed by s1 to string pointed by s2 and
returns 0 if strings are equal, or value < 0 when s1 is less than s2
or value > 0 when s2 is less than s1
*/
