
int		ft_strlen(char *c)
{
	int i = 0;

	while (c[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int 	i;
	//int 	len;
	char	buf;

	//len = ft_strlen(str);
	i = 0;
	int size = 0;
	while (str[size] != '\0')
		size++;
	while (i < size)
	{
        size--;
		buf = str[i];
		str[i] = str[size];
		str[size] = buf;
		i++;
	}
	return (str);
}
