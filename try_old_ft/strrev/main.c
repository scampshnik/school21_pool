
#include <stdio.h>

char	*ft_strrev(char *str);

int		main()
{
	char s[] = "0123456789";
	char *str;
	int i = 0;

	str = ft_strrev(s);

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}	
