/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msandee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:44:03 by msandee           #+#    #+#             */
/*   Updated: 2021/01/27 20:45:09 by msandee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != 0 || s2[x] != 0)
	{
		if (s1[x] != s2[x])
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		x++;
	}
	return (0);
}

void	ft_sort_str(char **argv, int size)
{
	int		x;
	int		y;
	int		mmin;
	char	*strmin;

	y = 0;
	while (y < size)
	{
		x = y + 1;
		strmin = argv[y];
		mmin = y;
		while (x < size)
		{
			if (ft_strcmp(strmin, argv[x]) > 0)
			{
				strmin = argv[x];
				mmin = x;
			}
			x++;
		}
		argv[mmin] = argv[y];
		argv[y] = strmin;
		y++;
	}
}

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int x;

	ft_sort_str(argv + 1, argc - 1);
	x = 1;
	while (x < argc)
	{
		ft_putstr(argv[x]);
		write(1, "\n", 1);
		x++;
	}
	return (0);
}
