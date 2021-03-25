/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 08:09:47 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/29 09:15:58 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int main()
{
	int *range1 = NULL;
	int	size = ft_ultimate_range(&range1, -21, 16);
	int	i;

	i = 0;
	if (size && range1)
	{
		while (i < size)
		{
			printf("%d | ", range1[i]);
			i++;
		}
		free(range1);
	}
	return (0);
}
