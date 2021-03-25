
#include <unistd.h>

void	ft_union(char *str1, char *str2)
{
	int	tab[255] = {0};
	int		i;
	
	i = 0;
	while (str2[i])
	{
		if (tab[(int)str2[i]] == 0)
		{
			tab[(int)str2[i]] = 1;
		}
		i++;
	}
	i = 0;
	while (str1[i])
	{
		if (tab[(int)str1[i]] == 1)
		{
			tab[(int)str1[i]] = -1;
			write(1, &str1[i], 1);
		}
		i++;
	}
}

