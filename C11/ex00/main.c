/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 08:35:32 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/03 09:01:20 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
        ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
    else
    {
        if (nb > 9)
            ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + '0');
    }
}

int		main()
{
	int *tab;
	int	length;
	int	i;

	i = 0;
	length = 20;
	tab = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, length, &ft_putnbr);
}
