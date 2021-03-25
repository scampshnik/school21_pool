/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mirror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:51:39 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/08 19:41:16 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_mirror(char c)
{
	return (c = (c >= 'a' && c <= 'z') ? 'z' - (c - 'a') : 'Z' - (c - 'A'));
}

int		ft_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		write(1, "\n", 1);
	else if (argc == 2)
	{
		while (*argv[1])
		{
			if (ft_alpha(*argv[1]))
			{
				ft_putchar(ft_mirror(*argv[1]));
				argv[1]++;
			}
		}
		write(1, "\n", 1);
	}
}
