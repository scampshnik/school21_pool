/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 10:12:01 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/02 11:43:00 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		*ft_map(int *tab, int length, int (*f)(int));

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int nb)
{
    nb *= nb;
    return (nb);
}

int		main()
{
	int *tab;
	int	*res;
	int	length;
	int	i;

	i = 0;
	length = 20;
	tab = (int *)malloc(sizeof(int) * length);
	if (!tab)
		return (0);
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	res = ft_map(tab, length, &ft_putnbr);
	i = 0;
    while (i < length)
	{
		printf("%d", res[i]);
		i++;
	}
	return (0);
}
