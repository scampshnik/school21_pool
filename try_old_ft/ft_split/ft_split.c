/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:12:49 by jshantay          #+#    #+#             */
/*   Updated: 2021/02/07 19:44:35 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_isspace(char c)
{
	return	(c == ' ' || c == '\n' || c == '\t');
}

int		ft_words(char *str)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			size++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	return (size);
}

char	*ft_malloc(char *str)
{
	char *word;
	int i;

	i = 0;
	while (str[i] && !ft_isspace(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !ft_isspace(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char **arr = (char **)malloc(sizeof(char *) * (ft_words(str) + 1));

	int i = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			arr[i] = ft_malloc(str);
			i++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
