#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
ft_bzero erases data in n bytes of memory starting at location s
by writing zeroes (bytes cointaining '\0') to that area
*/
