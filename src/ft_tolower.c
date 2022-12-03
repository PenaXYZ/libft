int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c | 32);
	return (c);
}

/* ft_tolower converts letter to lowercase using bitwise OR */
