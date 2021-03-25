
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strlen(char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char *str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));

	int i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

int		main()
{
	char *s;

	s = "Hello World!";

	printf("my  = %s\nstrdup = %s\n", ft_strdup(s), strdup(s));
}
