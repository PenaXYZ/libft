int	ft_isdigit(int c)
{
	unsigned int	i;

	i = (unsigned int)c;
	return (i >= '0' && i <= '9');
}

/* ft_isdigit checks if passed character is decimal digit character */
