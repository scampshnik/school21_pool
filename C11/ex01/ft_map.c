/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 10:09:39 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/02 11:42:56 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	i = 0;
	res = (int *)malloc(sizeof(int) * length);
	if (!res)
		return (0);
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	return (res);
}
