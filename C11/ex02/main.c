/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 11:58:23 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/02 16:48:14 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_any(char **tab, int (*f)(char*));

int		ft_return(char *str)
{
	if (*str != '0')
		return (1);
	return (0);
}

int		main()
{
	char 	**array;
	int		i;

	i = 0;
	array = (char **)malloc(sizeof(char) * 4);
	array[0] = "0";
	array[1] = "0";
	array[2] = "0";
	array[3] = NULL;
	printf("%d\n", ft_any(array, &ft_return));
	return (0);
}
