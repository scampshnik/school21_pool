/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 14:34:09 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/02 16:21:53 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_count_if(char **tab, int length, int (*f)(char*));

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

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
	int		length;

	length = 4;
	i = 0;
	array = (char **)malloc(sizeof(char) * length);
	array[0] = "R";
	array[1] = "0";
	array[2] = "w";
	array[3] = "0";
	printf("%d\n", ft_count_if(array, length, &ft_return));
	return (0);
}
