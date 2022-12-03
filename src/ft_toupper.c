int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c & ~32);
	return (c);
}

/* ft_toupper converts letter to uppercase using bitwise AND */
