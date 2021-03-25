/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 11:25:27 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/23 15:53:05 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char a[] = "Hello";
	char b[] = "world:";
	int n;

	n = 2;
	printf("a = %s\n", a);
	ft_strncpy(a, b, n);
	printf("a = %s\n", a);
}
