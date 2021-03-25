
#include <unistd.h>

void	ft_union(char *str1, char *str2);
//void    ft_union1(char *str1, char *str2);

int	main()
{
	char *s1;
	char *s2;

	s1 = "Hello";
	s2 = "lol";
	ft_union(s1, s2);
//    ft_union1(s1, s2);
	write(1, "\n", 1);
	return (0);
}
