int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;
	unsigned int	i;
	unsigned int	j;

	c = 0;
	i = 0;
	while (c <= n)
	{
		i = s1[c] + i;
		c++;
	}
	c = 0;
	j = 0;
	while (c <= n)
	{
		j = s2[c] + j;
		c++;
	}
	return (i - j);
}
