/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:00:48 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/29 09:31:16 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	array = (int *)malloc(sizeof(int) * size);
	if (!array)
		return (0);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	*range = array;
	if (!size)
		return (-1);
	else
		return (size);
}
