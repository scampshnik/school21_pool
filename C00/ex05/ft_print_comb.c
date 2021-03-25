/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:15:38 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/21 20:19:48 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 2);
}

void ft_output(char a, char b char c);
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);	
}

void ft_print_comb(void)
{
	char one;
	char two;
	char three;

	one = two = three = '0';
	while (one <= '9')
	{
		two = one + 1;
		while (two <= '9')
		{
			three = two + 1;
			while (three <= '9' && one ! = two && two != three && three != one)
			{
				ft_output(one, two, three);		
				three++;
			}
			two++;
		}
		one++;
	}
}

int main(void)
{
	ft_print_comb();
	return (0);
}
