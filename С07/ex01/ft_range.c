/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 17:03:52 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/28 18:53:40 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(*range) * (max - min));
	if (!range)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
