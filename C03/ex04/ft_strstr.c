/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:10:56 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/24 20:18:55 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	r;

	s = 0;
	r = 0;
	if (to_find[s] == '\0')
		return (str);
	while (str[s] != '\0')
	{
		while (str[s + r] == to_find[r])
		{
			if (to_find[s + 1] == '\0')
				return (&str[s]);
			++r;
		}
		++s;
	}
	return (0);
}
