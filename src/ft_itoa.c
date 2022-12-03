#include "libft.h"

static void	ft_write_itoa(long int nbr, char *s, int *i)
{
	if (nbr > 9)
		ft_write_itoa(nbr / 10, s, i);
	s[(*i)++] = '0' + nbr % 10;
}

char	*ft_itoa(int n)
{
	char		*s;
	int			len;
	int			i;
	long int	nbr;

	len = ft_nbrlen(n);
	s = ft_strnew(len);
	if (s == NULL)
		return (NULL);
	i = 0;
	nbr = (long int)n;
	if (nbr < 0)
	{
		s[i++] = '-';
		nbr *= -1;
	}
	ft_write_itoa(nbr, s, &i);
	s[i] = '\0';
	return (s);
}

/* ft_itoa converts integer to string */
