/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:19:18 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/07 19:44:37 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str);

int		main()
{
	char **arr;
	char *s = "  Hello,  Flavio\t WDASD!  BYE\nGOOD LAST US\tWE";

	arr = ft_split(s);
    int i = 0;
	while (arr[i] != NULL)
    {
        printf("%s\n", arr[i]);
        i++;
    }

}
