int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i == j)
		return (0);
	if (i > j)
		return (1);
	if (i < j)
		return (-1);
}
