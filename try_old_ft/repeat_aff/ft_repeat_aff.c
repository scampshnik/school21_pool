/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_aff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:48:39 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/08 14:44:05 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_repeat(char c)
{
	int i;

	i = 0;
	if (c >= 'a' && c <= 'z')
		i = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		i = c - 'A' + 1;
	else
		i = 1;
	return (i);
}

int		main(int argc, char *argv[])
{
	int	repeat = 0;

	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat = ft_repeat(*argv[1]);
			while (repeat > 0)
			{
				write(1, argv[1], 1);
				repeat--;
			}
		argv[1]++;
		}
	}
	write(1, "\n", 1);
}
