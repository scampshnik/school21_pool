
#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char *argv[])
{
	int n = 0;
	(void)argc;
	if (argc == 4)
	{
		if (*argv[2] == '+')
		{
			n = atoi(argv[1]) + atoi(argv[3]);
			printf("+ = %d\n", n);
		}
		else if (*argv[2] == '-')
		{
			n = atoi(argv[1]) - atoi(argv[3]);
			printf("- = %d\n", n);
		}
		else if (*argv[2] == '*')
		{
			printf("%d\n", atoi(argv[1]) * atoi(argv[3]));
		}
		else if (*argv[2] == '/')
		{
			n = atoi(argv[1]) / atoi(argv[3]);
			printf("/ = %d\n", n);
		}
		else if (*argv[2] == '%')
		{
			printf("%d\n", atoi(argv[1]) % atoi(argv[3]));
		}
	}
	return (0);
}
