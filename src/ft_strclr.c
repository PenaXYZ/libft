#include "libft.h"

void	ft_strclr(char *s)
{
	if (s)
		ft_bzero(s, ft_strlen(s));
}

/* Sets every character of the string to the value ’\0’ */
