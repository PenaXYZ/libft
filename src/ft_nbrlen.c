int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		len = 1;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

/* ft_nbrlen return lenght of integer */
