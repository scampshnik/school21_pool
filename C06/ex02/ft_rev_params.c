/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:29:00 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/27 17:35:13 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i;
	int	j;

	i = argc - 1;
	j = 0;
	while (i != 0)
	{
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i--;
	}
	return (0);
}
