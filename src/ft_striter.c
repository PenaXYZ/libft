#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
	{
		while (*s)
			f(s++);
	}
}

/*
Applies the function f to each character of the string passed
as argument. Each character is passed by address to f to be
modified if necessary.
*/
