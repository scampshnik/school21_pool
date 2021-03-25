
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str);

int	main()
{
	printf("my = %d\n", ft_atoi("  \n\t\f\v     -+0123  2adasd"));
	printf("atoi = %d\n", atoi("  \n\t\f\v      -+0123   2adasd"));
}
