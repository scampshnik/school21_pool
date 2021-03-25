

int	ft_atoi(const char *str)
{
	int m;
	int i;
	int n;

	i = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' ||
			str[i] == ' ' || str[i] == '\n' || str[i] == '\r')
		i++;
    if (str[i] == '-')
    {
        m = 1;
        i++;
    }
    else
    {
        m = 0;
        if (str[i] == '+')
            i++;
	}
    n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + str[i] - '0';
		i++;
	}
    if (m == 1)
        return (-n);
    else
        return (n);
}
