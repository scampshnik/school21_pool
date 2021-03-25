#include <unistd.h>

int		ft_repeat(char c)
{
	return ((c >= 'a' && c <= 'z') ? c - 'a' : c - 'A');
}

int		main(int argc, char *argv[])
{
	int i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while ((argv[1][i] >= '!' && argv[1][i] <= '~') || argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{	
				int len = ft_repeat(argv[1][i]);
				while (len > 0)
				{
					write(1, &argv[1][i], 1);
					len--;
				}
			}
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}
