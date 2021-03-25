/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:53:28 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/28 18:53:15 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main()
{
	int	a;
	int b;
	int *range;
	int i;
	int size;

	i = 0;
	a = 0;
	b = 20;
	size = b - a;
	range = ft_range(a, b);
	while (i < size)
	{
		printf("| %d ", range[i]);
		i++;
	}
}
