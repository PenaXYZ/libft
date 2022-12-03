int	ft_isalpha(int c)
{
	unsigned int	i;

	i = (unsigned int)c;
	return ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'));
}

/* ft_isalpha checks if passed character is alphabetic */
