/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_1split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:22:31 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/10 17:33:20 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str);

int		main()
{
	char	**arr;
	char	*s;

	s = " Hello  afsdf  H   ";
	arr = ft_split(s);
	int		i = 0;
	while (arr[i] != NULL)
	{
		printf("%s\n", arr[i]);
		i++;
	}
}
