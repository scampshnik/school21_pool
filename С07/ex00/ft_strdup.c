/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:17:41 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/28 16:50:07 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*str;

	size = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	if (!src)
		return (NULL);
	str = (char *)malloc(sizeof(*src) * (size + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
