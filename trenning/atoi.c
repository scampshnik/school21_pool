
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || 
			str[i] == ' ' || str[i] == '\r' || str[i] == '\f')
		i++;
	int minus = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	int n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + str[i] - '0';
		i++;
	}
	return (minus * n);
}

int		main()
{
	char *s;

	s = "  \n\t\f\v  ++0123asdasd 123";
	printf("my = %d\natoi = %d\n", ft_atoi(s), atoi(s));
}
