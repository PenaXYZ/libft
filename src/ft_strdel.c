#include "libft.h"

void	ft_strdel(char **as)
{
	ft_memdel((void **)as);
}

/*
Takes as a parameter the address of a string that need to be
freed with free(3), then sets its pointer to NULL.
*/
