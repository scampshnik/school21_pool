/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:28:10 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/23 16:13:33 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main()
{
	int a;
	char	s[] = "hqsdhfsjhvashdH1GDHDGF";
	char	*i;

	i = s;
	a = ft_str_is_alpha(i);
	printf("%d", a);
}
