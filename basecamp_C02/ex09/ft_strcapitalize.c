char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str = ft_strlowcase(str);
	i = 0;
	if (str[0] > 96 && str[0] < 123)
	{
		str[0] = str[0] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if ((str[i] > 96 && str[i] < 123) || (str[i] > 48 && str[i] < 58))
			i++;
		else
		{
			i++;
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] = str[i] - 32;
				i++;
			}
		}
	}
	return (str);
}
