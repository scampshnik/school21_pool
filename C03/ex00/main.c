/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:09:56 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/23 20:08:36 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char	s1[] = "Hellp";
	char	s2[] = "Helloasdadawadwa";
	char *i;
	char *k;
	int	a;

	i = s1;
	k = s2;
	a = ft_strcmp(i, k);
	printf("%d\n", a);
}
