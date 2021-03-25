#include <unistd.h>

int		ft_check(char *str, int i, char c)
{
	int	s;

	s = 0;
	while (s < i)
	{
		if (str[s] == c)
			return (1);
		s++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i  = 0;
	while (s1[i] != '\0')
	{
		if (ft_check(s1, i, s1[i]) == 0)
			write(1, &s1[i], 1);
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		if (ft_check(s2, j, s2[j]) == 0)
		{
			if (ft_check(s1, i, s2[j]) == 0)
				write(1, &s2[j], 1);
		}
		j++;
	}
}

int	main(int argc, char	*argv[])
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
