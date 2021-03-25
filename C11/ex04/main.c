/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:30:51 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/03 18:25:21 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_is_sort(int	*tab, int length, int (*f)(int, int));

int		ft_sort(int a, int b)
{
	return (a - b);
}

int		main()
{
	int	array[] = {1, 2, 3, 7, 5, 6};
	int length = 6;
	printf("%d\n", ft_is_sort(array, length, &ft_sort));
}
