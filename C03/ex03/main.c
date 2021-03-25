/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 09:55:45 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/24 10:07:23 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char s[] = "Hel";
	char d[] = "lo!";
	char *q;
	char *b;
	int n;

	n = 3;
	q = s;
	b = d;
	ft_strncat(q, b, n);
	printf("%s\n", q);
}
