#include "libft.h"

void	ft_putendl(char const *s)
{
	if (s == NULL)
		return ;
	write(1, s, ft_strlen(s));
	write(1, "\n", 1);
}

/* Outputs the string s to the standard output followed by a ’\n’. */
